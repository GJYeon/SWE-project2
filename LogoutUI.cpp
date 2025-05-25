#include "LogoutUI.h"
#include <iostream>
#include <fstream>
using namespace std;

LogoutUI::LogoutUI(LoginManager* loginManager) {
    this->loginManager = loginManager;
}

void LogoutUI::logout(ofstream& out_fp) {
    string id = loginManager->logout();
    out_fp << "> " << id << " " << endl << endl;
}
void LogoutUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    out_fp << "2.2. ·Î±×¾Æ¿ô" << endl;
    logout();
}