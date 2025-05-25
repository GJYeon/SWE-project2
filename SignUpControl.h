#ifndef SIGNUPCONTROL_H
#define SIGNUPCONTROL_H


#include "UserRepository.h"

class SignUpControl {
    UserRepository* repo;
public:
    SignUpControl(UserRepository* r);
    void addNewUser(string id, string pw); //관리자 가입
    void addNewUser(string id, string pw, string phoneNum); //일반 회원가입
};

#endif
