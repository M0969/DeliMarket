#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class CarritoDB
	{
	public:
		List <Product^>^ ListDB = gcnew List<Product^>();
		CarritoDB();
		void Persist();
		void LoadFromBinaryFile();

	};
}