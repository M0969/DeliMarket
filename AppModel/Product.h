/**
 * Project SalesSolution
 */

#pragma once

using namespace System;

namespace AppModel {
    [Serializable]
    public ref class Product {
    public:
        property int Id;
        property String^ Name;
        property String^ Description;
        property double Price;
        property  int StockTotal;
        property char Status;
        property array<Byte>^ Photo;
        property String^ Brand;
        // Como ya no tendremos ProductInventory, se manajará al producto en Product
        property int InitialQuantity;
        property int QuantitySold;
        Product() {}
        Product (int id, String^ name, String^ description, double price, int stockTotal,
            char status, array<Byte>^ photo, String^ brand, int initialQuantity, int quantitySold);
    };
}

