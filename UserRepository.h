#ifndef USERREPOSITORY_H 
#define USERREPOSITORY_H 

#include <vector>
#include "User.h"
#include <string>

class UserRepository {
private:
    std::vector<User> users;

public:
    void addUser(User* user);
    User* findUserById(string id);
    std::vector<User>& getAllUsers();
};

#endif
