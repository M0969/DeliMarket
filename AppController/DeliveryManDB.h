#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class DeliveryManDB {
	public:
		List<DeliveryMan^>^ ListDB = gcnew List<DeliveryMan^>();
		DeliveryManDB();

	};
}
