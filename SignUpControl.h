#ifndef SIGNUPCONTROL_H
#define SIGNUPCONTROL_H


#include "UserRepository.h"

class SignUpControl {
    UserRepository* repo;
public:
    SignUpControl(UserRepository* r);
    void addNewUser(string id, string pw); //������ ����
    void addNewUser(string id, string pw, string phoneNum); //�Ϲ� ȸ������
};

#endif
