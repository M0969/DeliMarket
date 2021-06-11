
using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class UserDB {
		public:
			List<User^>^ ListDB = gcnew List<User^>();
			UserDB();
			void SaveUsers();
			void LoadUsers();

	};
}