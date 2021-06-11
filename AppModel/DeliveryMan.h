/**
 * Project SalesSolution
 */
#pragma once

#include "Employee.h"

using namespace System;

namespace AppModel {
    [Serializable]
    public ref class DeliveryMan : public  Employee {
    public:
  
        property double Quota;

        property bool Available;

        DeliveryMan() {}
        DeliveryMan(int id,String^ userName,String^ password, String^ firstName, String^ lastName, 
           char gender, String^ documentnumber,String^phonenumber,String^ email,String^ category,
            String^ address,char status,double quota, array <Byte>^ photo, int verificationcode, bool available);

    };
}



