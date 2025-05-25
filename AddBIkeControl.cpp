#include "AddBikeControl.h"

AddBikeControl::AddBikeControl(LoginManager* l, BikeRepository* r) {
	this->auth = l;
	this->repo = r;
}
void AddBikeControl::addNewBike(string id, string name) {
    if (auth->isAdmin()) { //�������� ���
        repo->addBike(new Bike(id, name));
    }
}