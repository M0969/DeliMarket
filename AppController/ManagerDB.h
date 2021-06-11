#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class ManagerDB {
	public:
		List<Manager^>^ ListDB = gcnew List<Manager^>();
		ManagerDB();

	};
}