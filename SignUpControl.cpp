#include "SignUpControl.h"
#include "User.h"

SignUpControl::SignUpControl(UserRepository* r) {
	this->repo = r;
}

void SignUpControl::addNewUser(string id, string pw) {  //������ ����
    if (id == "admin" && pw == "admin")
        repo->addUser(new Admin(id, pw, "admin"));
}
void SignUpControl::addNewUser(string id, string pw, string phoneNum) { //�Ϲ� ȸ������
    repo->addUser(new Customer(id, pw, "customer", phoneNum));
}