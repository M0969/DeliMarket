/**
 * Project SalesSolution
 */
#include "Product.h"

#pragma once
using namespace System;
using namespace System::Collections::Generic;

 namespace AppModel {
    public ref class Store {
    public:
        property int Stock;
        property int MinStock;
        property double Discount;
        property String^ Name;
        property String^ Address;
        property List<Product^>^ Product;
    };

}
