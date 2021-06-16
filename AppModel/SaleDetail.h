/**
 * Project SalesSolution
 */


#pragma once
#include "Product.h"
using namespace System;

namespace AppModel {
    [Serializable]
    public ref class SaleDetail {
    public:
        property double Quantity;
        property double UnitPrice;
        property double Total;
        property double SubTotal;
        property Product^ Product; // entonces SailDetail esta relacionado directamente con Product
    };
}
