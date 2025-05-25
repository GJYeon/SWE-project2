#include "RentBikeControl.h"

RentBikeControl::RentBikeControl(LoginManager* l, BikeRepository* r) {
    this->auth = l;
    this->repo = r;
}
tuple<string, string> RentBikeControl::rentBike(string id) {
    if (!auth->isAdmin()) {  //일반 회원인 경우
        Customer* user = dynamic_cast<Customer*>(auth->getCurrentUser());
        Bike* bike = repo->findBikeById(id);
        user->rent(bike);
        return bike->getBikeDetail();
    }
}