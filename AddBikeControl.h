#ifndef ADDBIKECONTROL_H
#define ADDBIKECONTROL_H
#include "LoginManager.h"
#include "BikeRepository.h"

class AddBikeControl {
    LoginManager* auth;
    BikeRepository* repo;
public:
    AddBikeControl(LoginManager* l, BikeRepository* r);
    void addNewBike(string id, string name);
};


#endif
