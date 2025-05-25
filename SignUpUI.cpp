#include "SignUpUI.h"
#include <fstream>

SignUpUI::SignUpUI(SignUpControl* c) {
    this->control = c;
}
void SignUpUI::signUpUser(ofstream& out_fp, const string& id, const string& pw, const string& phoneNum) {
    control->addNewUser(id, pw, phoneNum);
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl << endl;
}
void SignUpUI::startInterface(ifstream& in_fp, ofstream& out_fp) {
    string id, pw, phoneNum;
    in_fp >> id >> pw >> phoneNum;
    out_fp << "1.1. 회원가입" << endl;
    signUpUser(out_fp, id, pw, phoneNum);
}