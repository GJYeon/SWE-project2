#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include "UserRepository.h"
#include "User.h"

class LoginManager {
    UserRepository* repo;
    User* currentUser = nullptr;
public:
    LoginManager(UserRepository* r);

    bool login(string id, string pw);

    string logout();

    bool isAdmin();

    User* getCurrentUser();
};

#endif