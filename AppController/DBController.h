#pragma once
#include "ProductDB.h"
#include "UserDB.h"
#include "DeliveryManDB.h"
#include "CustomerDB.h"
#include "ManagerDB.h"
using namespace AppModel;
using namespace System::Collections::Generic;

namespace AppController {
	public ref class DBController
	{
	private:
		static ProductDB^ productDB = gcnew ProductDB();
		static UserDB^ userDB = gcnew UserDB();
		static CustomerDB^ customerDB = gcnew CustomerDB();
		static DeliveryManDB^ deliveryManDB = gcnew DeliveryManDB();
		static ManagerDB^ managerDB = gcnew ManagerDB();
	public:

	/*User*/

		static void AddUser(User^);
		static void UpdateUser(User^);
		static void DeleteUser(int userId);
		static User^ ValidateUser(String^ username, String^ password);
		static User^ QueryUserbyId(int userId);
		static int QueryLastUserId();
		static List<User^>^ QueryAllUsers();
		static bool ConfirmUser(User^);


		/*Customer*/
		static List<Customer^>^ QueryAllCustomer();
        static Customer^ QueryCustomerById(int customerId);
		static bool ConfirmCustomer(Customer^);
		static void AddCustomers(Customer^);
		static void SaveCustomers();
		static void LoadCustomers();


		/*DeliveryMan*/
		static List<DeliveryMan^>^ QueryAllDeliveryMan();
		static DeliveryMan^ QueryDeliveryManById(int deliverymanId);
		static bool ConfirmDeliveryMan(DeliveryMan^);
		static void AddDeliveryMan(DeliveryMan^);
		static void SaveDeliveryMan();
		static void LoadDeliveryMan();


		/*Manager*/
		static List<Manager^>^ QueryAllManagers();
		static Manager^ QueryManagerById(int managerId);
		static bool ConfirmManager(Manager^);
		static void AddManagers(Manager^);
		static void SaveManagers();
		static void LoadManagers();


		/*Product*/
		static void AddProduct(Product^); // agregar
		static void UpdateProduct(Product^); //actualizar
		static void DeleteProduct(int productId); //borrar
		static List<Product^>^ QueryAllProducts(); // Consulta todos los productos
		static List<Groceries^>^ QueryAllGroceries();
		static List<HealthCare^>^ QueryAllHealthCare();
		static Product^ QueryAllProductById(int productId); //DEVOLDERÁ UN PRODUCTO COMPLETO
		static Groceries^ QueryGroceriesById(int productId);
		static HealthCare^ QueryHealthCareById(int productId);
	//User*/


	};
}


