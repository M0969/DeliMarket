#include "pch.h"
#include "UserDB.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

AppController::UserDB::UserDB()
{

}

void AppController::UserDB::SaveUsers()
{
    Stream^ stream = File::Open("users.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDB);
    stream->Close();
}

 void AppController::UserDB::LoadUsers()
    {
     try {
         if (File::Exists("users.bin")) {
             Stream^ stream = File::Open("users.bin", FileMode::Open);
             BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
             ListDB = (List <User^>^) bFormatter->Deserialize(stream);
             stream->Close();
         }
     }
     catch (...) { return; }
    
}



