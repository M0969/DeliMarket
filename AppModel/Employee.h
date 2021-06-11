/**
 * Project SalesSolution
 */

#pragma once

#include "User.h"

using namespace System;
namespace AppModel {
    [Serializable]
    public ref class Employee : public User {
    public:
        property double Salary;
        property int VerificationCode; // no es necesario  si actualizo rol e id y luego hago visible sus pestañas correspondientes
                                       // lo que no debe ver las oculto
    };
}

