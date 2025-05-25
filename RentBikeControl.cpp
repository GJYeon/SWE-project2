#include "RentBikeControl.h"

RentBikeControl::RentBikeControl(LoginManager* l, BikeRepository* r) {
    this->auth = l;
    this->repo = r;
}
tuple<string, string> RentBikeControl::rentBike(string id) {
    if (!auth->isAdmin()) {  //�Ϲ� ȸ���� ���
        Customer* user = dynamic_cast<Customer*>(auth->getCurrentUser());
        Bike* bike = repo->findBikeById(id);
        user->rent(bike);
        return bike->getBikeDetail();
    }
}