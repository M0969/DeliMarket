#include "pch.h"
#include "BonusPointsDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

AppController::BonusPointsDB::BonusPointsDB()
{
}

void AppController::BonusPointsDB::PersistPQ()
{
	Stream^ stream = File::Open("bonuspointsPQ.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListPQDB);
	stream->Close();
}

void AppController::BonusPointsDB::LoadFromBinaryFilePQ()
{
	try {
		if (File::Exists("bonuspointsPQ.bin")) {
			Stream^ stream = File::Open("bonuspointsPQ.bin", FileMode::Open);
			BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
			ListPQDB = (List <BonusPoints^>^) bFormatter->Deserialize(stream);
			stream->Close();
		}
	}
	catch (...) {
		return;
	}
}

void AppController::BonusPointsDB::PersistSQ()
{
	Stream^ stream = File::Open("bonuspointsSQ.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, ListSQDB);
	stream->Close();
}

void AppController::BonusPointsDB::LoadFromBinaryFileSQ()
{
	try {
		if (File::Exists("bonuspointsSQ.bin")) {
			Stream^ stream = File::Open("bonuspointsSQ.bin", FileMode::Open);
			BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
			ListSQDB = (List <BonusPoints^>^) bFormatter->Deserialize(stream);
			stream->Close();
		}
	}
	catch (...) {
		return;
	}
}