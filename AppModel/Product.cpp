/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Product.h"

/**
 * Product implementation
 */

AppModel::Product::Product(int id, String^ name, String^ description, double price, int stockTotal, char status, array<Byte>^ photo, String^ brand, int initialQuantity, int quantitySold)
{
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	StockTotal = stockTotal;
	Status = status;
	Photo = photo;
	InitialQuantity = initialQuantity;
	QuantitySold = quantitySold;
}
