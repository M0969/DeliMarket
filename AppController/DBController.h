#pragma once
#include "ProductDB.h"
#include "BonusPointsDB.h"
#include "UserDB.h"
#include "DeliveryManDB.h"
#include "CustomerDB.h"
#include "ManagerDB.h"
#include "CarritoDB.h"
#include "SaleDB.h"

using namespace AppModel;
using namespace System::Collections::Generic;

namespace AppController {
	public ref class DBController
	{
	private:
		static ProductDB^ productDB = gcnew ProductDB();
		static BonusPointsDB^ bonuspointsDB = gcnew BonusPointsDB();
		static UserDB^ userDB = gcnew UserDB();
		static CustomerDB^ customerDB = gcnew CustomerDB();
		static DeliveryManDB^ deliveryManDB = gcnew DeliveryManDB();
		static ManagerDB^ managerDB = gcnew ManagerDB();
		static CarritoDB^ carritoDB = gcnew CarritoDB();
		static SaleDB^ saleDB = gcnew SaleDB();
	public:

	/*User*/

		static void AddUser(User^);
		static void UpdateUser(User^);
		static void DeleteUser(int userId);
		static User^ ValidateUser(String^ username, String^ password);
		static User^ QueryUserbyId(int userId);
		static int ReturnIDbyUserName(String^ username);
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

		/*Carrito*/
		static void AddtoCarrito(Product^);

		static void DeletefromCarrito(int productId);
		static void DeleteAllCarrito();
		static List<Product^>^ QueryAllCarrito();
		static bool QueryCarritoByName(String^);



		/*Product*/
		static void AddProduct(Product^); // agregar
		static void UpdateProduct(Product^); //actualizar
		static void DeleteProduct(int productId); //borrar
		static List<Product^>^ QueryAllProducts(); // Consulta todos los productos
		static int QueryLastProductId();
		static List<Groceries^>^ QueryAllGroceries();
		static List<HealthCare^>^ QueryAllHealthCare();
		static int ReturnIDbyProductName(String^ name);
		static Product^ QueryProductById(int productId); //DEVOLDERÁ UN PRODUCTO COMPLETO
		static Groceries^ QueryGroceriesById(int productId);
		static HealthCare^ QueryHealthCareById(int productId);
		static Product^ QueryProductByName(String^);
	
		/*Category*/
		static List<Groceries^>^ QueryAllGroceriesByCoincidence(String^);
		static List<HealthCare^>^ QueryAllHealthCareByCoincidence(String^);

		/*BonusPoints*/
		static void AddBonusPointsPQ(BonusPoints^);
		static void AddBonusPointsSQ(BonusPoints^);
		static void UpdateBonusPointsPQ(BonusPoints^);
		static void UpdateBonusPointsSQ(BonusPoints^);
		static void DeleteBonusPointsSQ(int solesQuantity);
		static void DeleteBonusPointsPQ(int pointsQuantity);
		static BonusPoints^ QueryBonusPointsByPQ(int pointsQuantity);
		static BonusPoints^ QueryBonusPointsBySQ(int solesQuantity);
		static List<BonusPoints^>^ QueryAllBonusPointsPQ();
		static List<BonusPoints^>^ QueryAllBonusPointsSQ();

		/*Sale*/
		static void RegisterSale(Order^);
		static List<Order^>^ QueryAllSales();
		static List<Order^>^ QueryAllSalesByCustomer(String^ username);
	};
}


