#include "userRepository.h"

void UserRepository::addUser(User* user) {
    users.push_back(user);
}
User* UserRepository::findUserById(string id) {
    for (User* u : users) {
        if (u->getId() == id) return u;
    }
    return nullptr;
}
vector<User*>& UserRepository::getAllUsers() { return users; }