#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class ProductDB
	{
	public:
		List <Product^>^ ListDB = gcnew List<Product^>();
		ProductDB();
		void Persist();
		void LoadFromBinaryFile();

	};
}
