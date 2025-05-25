#ifndef LOGINUI_H
#define LOGINUI_H


#include "LoginManager.h"

class LoginUI {
private:
    LoginManager* loginManager;

public:
    LoginUI(LoginManager* loginManager);
    void login(ofstream& out_fp, const string& id, const string& pw);
    void startInterface(ifstream& in_fp, ofstream& out_fp);
};

#endif
