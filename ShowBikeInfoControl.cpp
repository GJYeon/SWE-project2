#include "ShowBikeInfoControl.h"
#include <tuple>
ShowBikeInfoControl::ShowBikeInfoControl(LoginManager* l) {
    this->auth = l;
}
vector<tuple<string, string>> ShowBikeInfoControl::showBikeInfo() {
    vector<tuple<string, string>> result;

    if (!auth->isAdmin()) {  //일반 회원인 경우
        Customer* user = dynamic_cast<Customer*>(auth->getCurrentUser());
        vector<Bike*> bikes = user->getRentingBikes();
        reverse(bikes.begin(), bikes.end());  //순서 반대로
        for (Bike* bike : bikes) {
            result.emplace_back(bike->getBikeDetail());
        }
        return result;
    }
}
