#pragma once
#include "ProductDB.h"
using namespace AppModel;
using namespace System::Collections::Generic;

namespace AppController {
	public ref class DBController
	{
	private:
		static ProductDB^ productDB = gcnew ProductDB(); // Una clase que representa productos
	public:
		static void AddProduct(Product^); // agregar
		static void UpdateProduct(Product^); //actualizar
		static void DeleteProduct(int productId); //borrar
		static List<Product^>^ QueryAllProducts(); // Consulta todos los productos
		static List<Groceries^>^ QueryAllGroceries();
		static List<HealthCare^>^ QueryAllHealthCare();
		static Product^ QueryAllProductById(int productId); //DEVOLDERÁ UN PRODUCTO COMPLETO
		static Groceries^ QueryGroceriesById(int productId);
		static HealthCare^ QueryHealthCareById(int productId);
	};
}
