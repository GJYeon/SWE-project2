#include "SignUpControl.h"
#include "User.h"

SignUpControl::SignUpControl(UserRepository* r) {
	this->repo = r;
}

void SignUpControl::addNewUser(string id, string pw) {  //관리자 가입
    if (id == "admin" && pw == "admin")
        repo->addUser(new Admin(id, pw, "admin"));
}
void SignUpControl::addNewUser(string id, string pw, string phoneNum) { //일반 회원가입
    repo->addUser(new Customer(id, pw, "customer", phoneNum));
}