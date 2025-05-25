#include "User.h"

User::User(string id, string pw, string role) : id(id), password(pw), role(role) {}
string User::getId() { return id; }
string User::getPassword() { return password; }
string User::identifyRole() { return role; }

Customer::Customer(string id, string pw, string role, string phoneNum) : User(id, pw, "customer"), phoneNum(phoneNum) {}
void Customer::rent(Bike* bike) {
    rentingBike.push_back(bike);
    bike->rentBike();
}
vector<Bike*> Customer::getRentingBikes() {
    return rentingBike;
}

Admin::Admin(string id, string pw, string role) : User(id, pw, role) {}
