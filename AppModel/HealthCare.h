/**
 * Project SalesSolution
 */

#pragma once
#include "Product.h"

namespace AppModel {
    [Serializable]
    public ref class HealthCare : public Product {
    public:
        //property String^ Category;

        HealthCare() {}
        HealthCare(int id, String^ name, String^ description, double price, int stockTotal, char status, String^ brand);
    };

}