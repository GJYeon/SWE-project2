#include "LoginManager.h"

LoginManager::LoginManager(UserRepository* r) {
	this->repo = r;
}

bool LoginManager::login(string id, string pw) {
    User* user = repo->findUserById(id);
    if (user && user->getPassword() == pw) {
        currentUser = user;
        return true;
    }
    return false;
}

string LoginManager::logout() {
    string id = currentUser->getId();
    currentUser = nullptr;
    return id;
}

bool LoginManager::isAdmin() {  //권한 확인
    User* user = currentUser;
    if (user->identifyRole() == "admin") {
        return true;
    }
    else {
        return false;
    }
}

User* LoginManager::getCurrentUser() { return currentUser; }