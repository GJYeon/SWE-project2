#include "AddBikeControl.h"

AddBikeControl::AddBikeControl(LoginManager* l, BikeRepository* r) {
	this->auth = l;
	this->repo = r;
}
void AddBikeControl::addNewBike(string id, string name) {
    if (auth->isAdmin()) { //관리자인 경우
        repo->addBike(new Bike(id, name));
    }
}