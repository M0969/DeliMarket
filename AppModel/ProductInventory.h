/**
 * Project SalesSolution
 */

#include "SaleDetail.h"
#include "Product.h"
#pragma once
using namespace System;
using namespace System::Collections::Generic;

namespace AppModel {
    public ref class ProductInventory {
    public:
        property int Id;
        property String^ Name;
        property int InitialQuantity;
        property int QuantitySold;
        property List<SaleDetail^>^ Details;
        property List<Product^>^ Products;
    };
}

