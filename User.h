#pragma once
#include <string>
#include <vector>
#include "Bike.h"  

using namespace std;

class User {
protected:
    string id, password, role;
public:
    User(string id, string pw, string role);
    virtual ~User() {}
    string getId();
    string getPassword();
    string identifyRole();
};

class Customer : public User {
    string phoneNum;
    vector<Bike*> rentingBike;
public:
    Customer(string id, string pw, string role, string phoneNum);
    void rent(Bike* bike);
    vector<Bike*> getRentingBikes();
};

class Admin : public User {
public:
    Admin(string id, string pw, string role);
};