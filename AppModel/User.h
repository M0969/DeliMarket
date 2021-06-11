/**
 * Project SalesSolution
 */


#pragma once
using namespace System;

namespace AppModel {
    [Serializable]

    public ref class User {
       public:
        property int Id;
        property String^ Username;
        property String^ Password;
        property String^ FirstName;
        property String^ LastName;
        property char Gender;
        property String^ DocumentNumber;
        property String^ PhoneNumber;
        property String^ Email;
        property String^ Category; // Categoría me indica si es Cliente, Repartidor o Manager
        property String^ Address;
        property array<Byte>^ Photo;
        property char Status;

        User() {}

        User(int id, String^ username, String^ password, String^ firstName, String^ lastName,
            char gender, String^ documentNumber, String^ phoneNumber, String^ email, String^ category,
            String^ address, char status);
    };

}
