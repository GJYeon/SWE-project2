// 헤더 선언
#include "User.h"
#include "Bike.h"
#include "UserRepository.h"
#include "BikeRepository.h"
#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "AddBikeUI.h"
#include "RentBikeUI.h"
#include "ShowBikeInfoUI.h"
#include "LoginManager.h"
#include "SignUpControl.h"
#include "ExitUI.h"


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

ifstream in_fp;
ofstream out_fp;

void doTask(SignUpUI& signUpUI, LoginUI& loginUI, LogoutUI& logoutUI,
    AddBikeUI& addBikeUI, RentBikeUI& rentBikeUI, ShowBikeInfoUI& showBikeInfoUI, ExitUI& exitUI);

int main() {
    //저장소 및 control 선언
    UserRepository userRepo;
    BikeRepository bikeRepo;
    SignUpControl signUpControl(&userRepo);
    LoginManager loginManager(&userRepo);
    AddBikeControl addBikeControl(&loginManager, &bikeRepo);
    RentBikeControl rentBikeControl(&loginManager, &bikeRepo);
    ShowBikeInfoControl showBikeInfoControl(&loginManager);
    ExitControl exitControl;

    //UI 객체 생성
    SignUpUI signUpUI(&signUpControl);
    LoginUI loginUI(&loginManager);
    LogoutUI logoutUI(&loginManager);
    AddBikeUI addBikeUI(&addBikeControl);
    RentBikeUI rentBikeUI(&rentBikeControl);
    ShowBikeInfoUI showBikeInfoUI(&showBikeInfoControl);
    ExitUI exitUI(&exitControl);

    // 초기 관리자 계정 추가
    signUpControl.addNewUser("admin", "admin");

    // 파일 열기
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask(signUpUI, loginUI, logoutUI, addBikeUI, rentBikeUI, showBikeInfoUI, exitUI);

    out_fp.close();
    in_fp.close();

    return 0;
}


void doTask(SignUpUI& signUpUI, LoginUI& loginUI, LogoutUI& logoutUI, AddBikeUI& addBikeUI, RentBikeUI& rentBikeUI, ShowBikeInfoUI& showBikeInfoUI, ExitUI& exitUI)
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    while (is_program_exit != 1)
    {
        in_fp >> menu_level_1 >> menu_level_2;
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2) {
            case 1:
                signUpUI.startInterface(in_fp, out_fp);
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1:
                loginUI.startInterface(in_fp, out_fp);
                break;
            case 2:
                logoutUI.startInterface(in_fp, out_fp);
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1:
                addBikeUI.startInterface(in_fp, out_fp);
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1:
                rentBikeUI.startInterface(in_fp, out_fp);
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            case 1:
                showBikeInfoUI.startInterface(out_fp);
                break;
            }
            break;

        case 6:
            switch (menu_level_2) {
            case 1:
                exitUI.startInterface(out_fp);
                is_program_exit = 1;
                break;
            }
            break;

        }
    }
}