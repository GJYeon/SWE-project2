#include "LoginUI.h"
#include <iostream>
#include <fstream>
using namespace std;

LoginUI::LoginUI(LoginManager* loginManager) {
    this->loginManager = loginManager;
}

void LoginUI::login(ofstream& out_fp, const string& id, const string& pw) {
    if (loginManager->login(id, pw)) {
        out_fp << "> " << id << " " << pw << " " << endl << endl;
    }
    else {
        cout << "아이디, 비밀번호가 틀렸습니다. " << endl;
    }
}
void LoginUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    string id, pw;
    in_fp >> id >> pw;
    out_fp << "2.1. 로그인" << endl;
    login(out_fp, id, pw);
}