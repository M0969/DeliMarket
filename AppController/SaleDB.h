#pragma once
using namespace AppModel;
using namespace System::Collections::Generic;

namespace AppController {
	public ref class SaleDB
	{
	public:
		List <Order^>^ ListDB = gcnew List<Order^>();
		void Persist();
		void LoadFromBinaryFile();
		SaleDB();

	};
}