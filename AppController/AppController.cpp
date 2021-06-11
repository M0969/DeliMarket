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

List<User^>^ AppController::UserManager::QueryAllUser()
{
	return DBController::QueryAllUsers();
}


User^ AppController::UserManager::QueryUserbyId(int userId)
{
	return DBController::QueryUserbyId(userId);
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

