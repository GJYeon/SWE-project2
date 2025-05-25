#ifndef SIGNUPUI_H 
#define SIGNUPUI_H 
#include "SignUpControl.h"
class SignUpUI {
    SignUpControl* control;
public:
    SignUpUI(SignUpControl* c);
    void signUpUser(ofstream& out_fp, const string& id, const string& pw, const string& phoneNum);
    void startInterface(ifstream& in_fp, ofstream& out_fp);
};


#endif