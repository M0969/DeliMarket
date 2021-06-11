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
			static List<Product^>^ QueryAllProducts(); // Consulta todos los productos
			static List<Groceries^>^ QueryAllGroceries();
			static List<HealthCare^>^ QueryAllHealthCare();
			static Product^ QueryAllProductById(int productId); //DEVOLDERÁ UN PRODUCTO COMPLETO
			static Groceries^ QueryGroceriesById(int productId);
			static HealthCare^ QueryHealthCareById(int productId);

		// Métodos CRUD para cliente

		// Métodos CRUD para venta
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
				static List<User^>^ QueryAllUser();
				static User^ QueryUserbyId(int userId);
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
