// 헤더 선언
#include "User.h"
#include "Bike.h"
#include "LoginControl.h"
#include "LoginUI.h"

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

int main() {
    signUpControl.addNewUser("admin", "admin");

    // 파일 입출력을 위한 초기화
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
                signUp(signUpUI);
                break;
            }
            break;

        case 2:
            switch (menu_level_2) {
            case 1:
                login(loginUI);
                break;
            case 2:
                logout(logoutUI);
                break;
            }
            break;

        case 3:
            switch (menu_level_2) {
            case 1:
                registerBike(addBikeUI);
                break;
            }
            break;

        case 4:
            switch (menu_level_2) {
            case 1:
                rentBike(rentBikeUI);
                break;
            }
            break;

        case 5:
            switch (menu_level_2) {
            case 1:
                rentingBikeInfo(showBikeInfoUI);
                break;
            }
            break;

        case 6:
            switch (menu_level_2) {
            case 1:
                exit(exitUI);
                is_program_exit = 1;
                break;
            }
            break;

        }
    }
}