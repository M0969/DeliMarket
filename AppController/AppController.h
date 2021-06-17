#pragma once
#include "DBController.h"
using namespace System;
using namespace AppModel;
using namespace System::Collections::Generic; // para que reconozca List

namespace AppController {
	public ref class AppManager
	{
		public:
			// Métodos CRUD para productos
			static void AddProduct(Product^); // agregar
			static void UpdateProduct(Product^); //actualizar
			static void DeleteProduct(int productId); //borrar
			static int ReturnIDbyProductName(String^ name);
			static Product^ QueryProductById(int productId);
			static List<Product^>^ QueryAllProducts(); // Consulta todos los productos
			static List<Product^>^ QueryProductsByDescription(String^ description);
			static List<Product^>^ QueryProductsByName(String^ name);
			static List<Groceries^>^ QueryAllGroceries();
			static List<HealthCare^>^ QueryAllHealthCare();
			static Groceries^ QueryGroceriesById(int productId);
			static HealthCare^ QueryHealthCareById(int productId);
			static int QueryLastProductId();
			static Product^ QueryProductByName(String^);
			//

			// Métodos CRUD para puntos bonus
			static void AddBonusPointsPQ(BonusPoints^); // agregar
			static void AddBonusPointsSQ(BonusPoints^); // agregar
			static void UpdateBonusPointsPQ(BonusPoints^); //actualizar
			static void UpdateBonusPointsSQ(BonusPoints^); //actualizar
			static void DeleteBonusPointsSQ(int solesQuantity);
			static void DeleteBonusPointsPQ(int pointsQuantity); //borrar
			static BonusPoints^ QueryBonusPointsByPQ(int pointsQuantity);
			static BonusPoints^ QueryBonusPointsBySQ(int solesQuantity);
			static List<BonusPoints^>^ QueryAllBonusPointsPQ();
			static List<BonusPoints^>^ QueryAllBonusPointsSQ();

			/*Carrito*/
			static void AddtoCarrito(Product^);
			static void DeletefromCarrito(int productId);
			static void DeleteAllCarrito();
			static List<Product^>^ QueryAllCarrito();
			static bool QueryCarritoByName(String^ );
			

		// Métodos CRUD para cliente

		// Métodos CRUD para venta
			static void RegisterSale(Order^);
			static List<Order^>^ QueryAllSales();
			static List<Order^>^ QueryAllSalesByCustomer(String^ username);
			static int QueryLastSaleId();
			static Order^ QueryOrderbyId(int saleId);
			static void UpdateOrder(Order^);
		// Métodos CRUD para repartidor
	};

	public ref class UserManager {
			// Metodos CRUD para registrarse en cuenta 
			public:
				//User
				static User^ ValidateUser(String^ username, String^ password);
				static void AddUser(User^);
				static void UpdateUser(User^);
				static void	DeleteUser(int userId);
				static bool ConfirmUser(User^);
				static List<User^>^ QueryAllUsers();
				static User^ QueryUserbyId(int userId);
				static int ReturnIDbyUserName(String^ username);
				static int QueryLastUserId();

				//DeliveryMan
				static DeliveryMan^ QueryDeliveryManbyId(int deliverymanId);
				static List<DeliveryMan^>^ QueryAllDeliveryMan();
				static bool ConfirmDeliveryMan(DeliveryMan^);
				static void AddDeliveryMan(DeliveryMan^);

				//Manager
				static Manager^ QueryManagerbyId(int managerId);
				static List<Manager^>^ QueryAllDManagers();
				static bool ConfirmManager(Manager^);
				static void AddManagers(Manager^);
				
				//Customer
				static List<Customer^>^ QueryAllCustomer();
				static Customer^ QueryCustomerbyId(int customerId);
				static bool ConfirmCustomer(Customer^);
				static void AddCustomers(Customer^);

			};
	
}
