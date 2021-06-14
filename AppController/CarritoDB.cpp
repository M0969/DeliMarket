#include "pch.h"
#include "CarritoDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;


AppController::CarritoDB::CarritoDB()
{
 
}

void AppController::CarritoDB::Persist()
{
	Stream^ stream = File::Open("carrito.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

void AppController::CarritoDB::LoadFromBinaryFile()
{
	try {
		if (File::Exists("carrito.bin")) {
			Stream^ stream = File::Open("carrito.bin", FileMode::Open);
			BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
			ListDB = (List <Product^>^) bFormatter->Deserialize(stream);
			stream->Close();
		}
	}
	catch (...) {
		return;
	}

}
