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
}
