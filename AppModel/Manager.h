/**
 * Project SalesSolution
 */


#pragma once
//#include "ProductInventory.h"
#include "Employee.h"

namespace AppModel {
    [Serializable]
    public ref class Manager : public Employee {
    public:
        property int EmployeesNumber;
        //property ProductInventory^ ProductInventory;

        Manager() {}
        Manager (int id, String^ firstName, String^ lastName,
            String^ phoneNumber, array <Byte>^ photo,
            int verificationcode, int employeesNumber);
    };
}

