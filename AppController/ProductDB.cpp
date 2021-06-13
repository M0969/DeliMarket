#include "pch.h"
#include "ProductDB.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

AppController::ProductDB::ProductDB()
{
}

void AppController::ProductDB::Persist()
{
	/*ProductDB^ productDB = gcnew ProductDB();
	if (productDB != nullptr) {
		Stream^ stream = File::Open("products.bin", FileMode::Create);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		bFormatter->Serialize(stream, productDB->ListDB);
		stream->Close();
	}*/
	Stream^ stream = File::Open("products.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();

}

void AppController::ProductDB::LoadFromBinaryFile()
{
	try {
		if (File::Exists("products.bin")) {
			Stream^ stream = File::Open("products.bin", FileMode::Open);
			BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
			ListDB = (List <Product^>^) bFormatter->Deserialize(stream);
			stream->Close();
		}
	}
	catch (...) {
		return;
	}
}
