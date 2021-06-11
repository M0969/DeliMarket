/**
 * Project SalesSolution
 */


#pragma once

#include "Product.h"

using namespace System;

namespace AppModel {
    [Serializable]
    public ref class Groceries : public Product {
    public:
       //property String^ Category;
       property double PriceperWeight;

       Groceries() {}
       Groceries(int id, String^ name, String^ description, double price, int stockTotal, char status, String^ brand);
       // POR EL MOMENTO QUE ME PIDA SOLO ARGUMENTOS
    };
}
