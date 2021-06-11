/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Groceries.h"

/**
 * Groceries implementation
 */

AppModel::Groceries::Groceries(int id, String^ name, String^ description, double price, int stockTotal, char status, String^ brand)
{
	Id = id;
	Name = name;
	Description = description;
	Price = price;
	Status = stockTotal;
	Brand = brand;
}
