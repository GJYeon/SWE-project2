#include "ShowBikeInfoControl.h"
#include <tuple>
ShowBikeInfoControl::ShowBikeInfoControl(LoginManager* l) {
    this->auth = l;
}
vector<tuple<string, string>> ShowBikeInfoControl::showBikeInfo() {
    vector<tuple<string, string>> result;

    if (!auth->isAdmin()) {  //�Ϲ� ȸ���� ���
        Customer* user = dynamic_cast<Customer*>(auth->getCurrentUser());
        vector<Bike*> bikes = user->getRentingBikes();
        reverse(bikes.begin(), bikes.end());  //���� �ݴ��
        for (Bike* bike : bikes) {
            result.emplace_back(bike->getBikeDetail());
        }
        return result;
    }
}
