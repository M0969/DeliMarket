/**
 * Project SalesSolution
 */
#pragma once

#include "Employee.h"

using namespace System;

namespace AppModel {
    public ref class DeliveryMan : public  Employee {
    public:
  
        property double Quota;
        property char Status;
        property bool Available;

        DeliveryMan() {}
        DeliveryMan(int id, String^ firstName, String^ lastName, 
            String^ phoneNumber, double quota, array <Byte>^ photo, int verificationcode, bool available);

    };
}

