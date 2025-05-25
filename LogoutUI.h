#ifndef LOGOUTUI_H
#define LOGOUTUI_H


#include "LoginManager.h"

class LogoutUI {
    LoginManager* loginManager;
public:
    LogoutUI(LoginManager* c);
    void logout(ofstream& out_fp);
    void startInterface(ifstream& in_fp, ofstream& out_fp);
};

#endif
