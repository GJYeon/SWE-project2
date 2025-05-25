#include <vector>
#include "user.h"
#include <string>

class UserRepository {
private:
    std::vector<User> users;

public:
    void addUser(const User& user);
    User* findUserById(const string& id);
    std::vector<User>& getAllUsers();
};

