#include "pch.h"
#include "SaleDB.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void AppController::SaleDB::Persist()
{
	Stream^ stream = File::Open("Sales.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void AppController::SaleDB::LoadFromBinaryFile()
{

	try {
		if (File::Exists("Sales.bin")) {
			Stream^ stream = File::Open("Sales.bin", FileMode::Open);
			BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
			ListDB = (List <Order^>^) bFormatter->Deserialize(stream);
			stream->Close();
		}
	}
	catch (...) {
		return;
	}
}

AppController::SaleDB::SaleDB()
{
   // throw gcnew System::NotImplementedException();
}
