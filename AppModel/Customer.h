/**
 * Project SalesSolution
 */


#pragma once
#include "User.h"
#include "BonusPoints.h"

using namespace System;

namespace AppModel {
    [Serializable]
     public ref class Customer : public  User {
    public:

        property int CustomerPoints;
        property BonusPoints^ BonusPoints;

        Customer() {}

        Customer(int id, String^ username, String^ password, String^ firstName, String^ lastName,
            char gender, String^ documentNumber, String^ phoneNumber, String^ email, String^ category,
            String^ address, char status);
    };
     

}
