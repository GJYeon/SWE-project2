#include "userRepository.h"

void UserRepository::addUser(User* user) {
    users.push_back(user);
}

User* UserRepository::findUserById(string id) {
    for (auto& user : users) {
        if (user.getId() == id) {
            return &user;
        }
    }
    return nullptr;
}

std::vector<User>& UserRepository::getAllUsers() {
    return users;
}