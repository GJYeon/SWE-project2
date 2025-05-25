#ifndef SHOWBIKEINFOCONTROL_H
#define SHOWBIKEINFOCONTROL_H
#include "LoginManager.h"

class ShowBikeInfoControl {
    LoginManager* auth;
public:
    ShowBikeInfoControl(LoginManager* l);
    vector<tuple<string, string>> showBikeInfo();
};


#endif
