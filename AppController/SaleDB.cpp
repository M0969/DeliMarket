#include "pch.h"
#include "SaleDB.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

void AppController::SaleDB::Persist()
{
	Stream^ stream = File::Open("sales.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListDB);
	stream->Close();
}

AppController::SaleDB::SaleDB()
{
   // throw gcnew System::NotImplementedException();
}
