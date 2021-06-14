#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace AppModel;

namespace AppController {
	public ref class BonusPointsDB
	{
	public:
		List <BonusPoints^>^ ListPQDB = gcnew List<BonusPoints^>();
		List <BonusPoints^>^ ListSQDB = gcnew List<BonusPoints^>();
		BonusPointsDB();
		void PersistPQ();
		void LoadFromBinaryFilePQ();
		void PersistSQ();
		void LoadFromBinaryFileSQ();
	};
}


