#include "pch.h"

#include "AppController.h"

void AppController::AppManager::AddProduct(Product^ p)
{	// base de datos simulada, no es tal
	DBController::AddProduct(p);
}

void AppController::AppManager::UpdateProduct(Product^ p)
{
	DBController::UpdateProduct(p);
}

void AppController::AppManager::DeleteProduct(int productId)
{
	DBController::DeleteProduct(productId);
}

List<Product^>^ AppController::AppManager::QueryAllProducts()
{
	return DBController::QueryAllProducts();
}

List<Groceries^>^ AppController::AppManager::QueryAllGroceries()
{
	return DBController::QueryAllGroceries();
}

List<HealthCare^>^ AppController::AppManager::QueryAllHealthCare()
{
	return DBController::QueryAllHealthCare();
}

Product^ AppController::AppManager::QueryAllProductById(int productId)
{
	return DBController::QueryAllProductById(productId);
}

Groceries^ AppController::AppManager::QueryGroceriesById(int productId)
{
	return DBController::QueryGroceriesById(productId);
}

HealthCare^ AppController::AppManager::QueryHealthCareById(int productId)
{
	return DBController::QueryHealthCareById(productId);
}
