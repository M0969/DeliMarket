#include "pch.h"
#include "AppController.h"

/*productos*/
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

int AppController::AppManager::QueryLastProductId()
{
	return DBController::QueryLastProductId();
}

Product^ AppController::AppManager::QueryProductById(int productId)
{
	return DBController::QueryProductById(productId);
}

Groceries^ AppController::AppManager::QueryGroceriesById(int productId)
{
	return DBController::QueryGroceriesById(productId);
}

HealthCare^ AppController::AppManager::QueryHealthCareById(int productId)
{
	return DBController::QueryHealthCareById(productId);
}

List<Product^>^ AppController::AppManager::QueryProductsByDescription(String^ description)
{
	List<Groceries^>^ groceriesList = DBController::QueryAllGroceriesByCoincidence(description);
	List<HealthCare^>^ healthcareList = DBController::QueryAllHealthCareByCoincidence(description);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < groceriesList->Count; i++)
		productList->Add(groceriesList[i]);
	for (int i = 0; i < healthcareList->Count; i++)
		productList->Add(healthcareList[i]);

	return productList;
}

List<Product^>^ AppController::AppManager::QueryProductsByName(String^ name)
{
	List<Groceries^>^ groceriesList = DBController::QueryAllGroceriesByCoincidence(name);
	List<HealthCare^>^ healthcareList = DBController::QueryAllHealthCareByCoincidence(name);
	List<Product^>^ productList = gcnew List<Product^>();

	for (int i = 0; i < groceriesList->Count; i++)
		productList->Add(groceriesList[i]);
	for (int i = 0; i < healthcareList->Count; i++)
		productList->Add(healthcareList[i]);

	return productList;
}

Product^ AppController::AppManager::QueryProductByName(String^ name)
{
	return DBController::QueryProductByName(name);
}

void AppController::AppManager::AddtoCarrito(Product^ product)
{
	return DBController::AddtoCarrito(product);
}

void AppController::AppManager::DeletefromCarrito(int productId)
{
	return DBController::DeletefromCarrito(productId);
}

void AppController::AppManager::DeleteAllCarrito()
{
	return DBController::DeleteAllCarrito();
}

List<Product^>^ AppController::AppManager::QueryAllCarrito()
{
	return DBController::QueryAllCarrito();
}

bool AppController::AppManager::QueryCarritoByName(String^ name)
{
	return DBController::QueryCarritoByName(name);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*Bonnus Points*/
void AppController::AppManager::AddBonusPointsPQ(BonusPoints^ bp)
{
	DBController::AddBonusPointsPQ(bp);
}

void AppController::AppManager::AddBonusPointsSQ(BonusPoints^ bp)
{
	DBController::AddBonusPointsSQ(bp);
}

void AppController::AppManager::UpdateBonusPointsPQ(BonusPoints^ bp)
{
	DBController::UpdateBonusPointsPQ(bp);
}

void AppController::AppManager::UpdateBonusPointsSQ(BonusPoints^ bp)
{
	DBController::UpdateBonusPointsSQ(bp);
}
void AppController::AppManager::DeleteBonusPointsSQ(int solesQuantity)
{
	DBController::DeleteBonusPointsSQ(solesQuantity);
}

void AppController::AppManager::DeleteBonusPointsPQ(int pointsQuantity)
{
	DBController::DeleteBonusPointsPQ(pointsQuantity);
}

BonusPoints^ AppController::AppManager::QueryBonusPointsByPQ(int pointsQuantity)
{
	return DBController::QueryBonusPointsByPQ(pointsQuantity);
}

BonusPoints^ AppController::AppManager::QueryBonusPointsBySQ(int solesQuantity)
{
	return DBController::QueryBonusPointsBySQ(solesQuantity);
}

List<BonusPoints^>^ AppController::AppManager::QueryAllBonusPointsPQ()
{
	return DBController::QueryAllBonusPointsPQ();
}

List<BonusPoints^>^ AppController::AppManager::QueryAllBonusPointsSQ()
{
	return DBController::QueryAllBonusPointsSQ();
}

/// /// ////////////////////////////////////////////////////////////////////////////////////////////
/// /// ////////////////////////////////////////////////////////////////////////////////////////////
/// /// ////////////////////////////////////////////////////////////////////////////////////////////
/// /// ////////////////////////////////////////////////////////////////////////////////////////////
/// /// ////////////////////////////////////////////////////////////////////////////////////////////

/*User*/
void AppController::UserManager::AddUser(User^ user )
{
	DBController::AddUser(user);
}

void AppController::UserManager::UpdateUser(User^ user)
{
	DBController::UpdateUser(user);
}

void AppController::UserManager::DeleteUser(int userId)
{
	DBController::DeleteUser(userId);
}

bool AppController::UserManager::ConfirmUser(User^ user)
{
	return DBController::ConfirmUser(user);
}

User^ AppController::UserManager::ValidateUser(String^ username, String^ password)
{
	return DBController::ValidateUser(username, password);
}

List<User^>^ AppController::UserManager::QueryAllUsers()
{
	return DBController::QueryAllUsers();
}


User^ AppController::UserManager::QueryUserbyId(int userId)
{
	return DBController::QueryUserbyId(userId);
}

int AppController::UserManager::ReturnIDbyUserName(String^ username)
{
	return DBController::ReturnIDbyUserName(username);
}


int AppController::UserManager::QueryLastUserId()
{
	return DBController::QueryLastUserId();
}

/*Customer*/

Customer^ AppController::UserManager::QueryCustomerbyId(int customerId)
{
	return DBController::QueryCustomerById(customerId);
}


List<Customer^>^ AppController::UserManager::QueryAllCustomer()
{
	return DBController::QueryAllCustomer();
}

bool AppController::UserManager::ConfirmCustomer(Customer^ customer)
{
	return DBController::ConfirmCustomer(customer);
}

void AppController::UserManager::AddCustomers(Customer^ customer)
{
	DBController::AddCustomers(customer);
}



/*DeliveryMan*/

DeliveryMan^ AppController::UserManager::QueryDeliveryManbyId(int deliverymanId)
{
	return DBController::QueryDeliveryManById(deliverymanId);
}

List<DeliveryMan^>^ AppController::UserManager::QueryAllDeliveryMan()
{
	return DBController::QueryAllDeliveryMan();
}

bool AppController::UserManager::ConfirmDeliveryMan(DeliveryMan^ deliveryman)
{
	return DBController::ConfirmDeliveryMan(deliveryman);
}

void AppController::UserManager::AddDeliveryMan(DeliveryMan^ deliveryman)
{
	DBController::AddDeliveryMan(deliveryman);
}

/*Manager*/
Manager^ AppController::UserManager::QueryManagerbyId(int managerId)
{
	return DBController::QueryManagerById(managerId);
}

List<Manager^>^ AppController::UserManager::QueryAllDManagers()
{
	return DBController::QueryAllManagers();
}

bool AppController::UserManager::ConfirmManager(Manager^ manager)
{
	return DBController::ConfirmManager(manager);
}

void AppController::UserManager::AddManagers(Manager^ manager)
{
	DBController::AddManagers(manager);
}

