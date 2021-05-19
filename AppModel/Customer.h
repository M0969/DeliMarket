/**
 * Project SalesSolution
 */


#pragma once
#include "User.h"
#include "BonusPoints.h"

using namespace System;

namespace AppModel {
     public ref class Customer : public  User {
    public:

        property int CustomerPoints;
        property BonusPoints^ BonusPoints;

        Customer() {}

        Customer(String^ firstName, String^ lastName,String^ address, String^ phoneNumber, int customerpoints);
    };
     

}
