#include "pch.h"
#include "DBController.h"
using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;



void AppController::DBController::AddProduct(Product^ product)
{
    productDB->ListDB->Add(product);
}

void AppController::DBController::UpdateProduct(Product^ product)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == product->Id) { // verificando id
            productDB->ListDB[i] = product;  // actualiza el producto anterior con el actual
            return;
        }
}

void AppController::DBController::DeleteProduct(int productId)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId) { // si coincide, se procede a eliminar
            productDB->ListDB[i]->Status = 'I';  // en lugar de borrarlo (por temas de seguridad), se le cambia de estado: INACTIVO
            return;
        }
}

List<Product^>^ AppController::DBController::QueryAllProducts()
{
    return productDB->ListDB;
}

List<Groceries^>^ AppController::DBController::QueryAllGroceries()
{
    List <Groceries^>^ groceriesList = gcnew List <Groceries^>();
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->GetType() == Groceries::typeid) { // GetType obtiene el tipo de la instancia actual, nos indica de que clase es 
            groceriesList->Add((Groceries^)productDB->ListDB[i]); //cada vez que encuentra un grocery, lo agrega a la lista
        }   //está casteada porque un producto no es un grocery, sino que un grocery es un producto
    return groceriesList;
}

List<HealthCare^>^ AppController::DBController::QueryAllHealthCare()
{
    List <HealthCare^>^ healthCareList = gcnew List <HealthCare^>();
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->GetType() == HealthCare::typeid) //tiene un atributo general que deriva de object, este tiene un atributo "typeid" . Como todas derivan de object, entonces TODOS TIENEN ACCESO A ESE ATRIBUTO
            healthCareList->Add((HealthCare^)productDB->ListDB[i]);
    return healthCareList;
}

Product^ AppController::DBController::QueryAllProductById(int productId)
{   //como lo tengo que buscar por id, tengo que hacer un for
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId)
            return productDB->ListDB[i];
    return nullptr; // es un puntero a nulo
}

Groceries^ AppController::DBController::QueryGroceriesById(int productId)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId &&
            productDB->ListDB[i]->GetType() == Groceries::typeid)
            return (Groceries^)productDB->ListDB[i]; // se requeria un casting para evitar el error
    return nullptr;
}

HealthCare^ AppController::DBController::QueryHealthCareById(int productId)
{
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId &&
            productDB->ListDB[i]->GetType() == HealthCare::typeid)
            return (HealthCare^)productDB->ListDB[i]; // se requeria un casting para evitar el error
    return nullptr;
}


/////////////////////////////////////////////////

/*User*/
void AppController::DBController::AddUser(User^ user)
{
    userDB->ListDB->Add(user);
    userDB->SaveUsers();

}

void AppController::DBController::UpdateUser(User^ user)
{
    userDB->SaveUsers();
    for (int i = 0; i < userDB->ListDB->Count; i++)
        if (userDB->ListDB[i]->Id == user->Id) {
            userDB->ListDB[i] = user;
            userDB->SaveUsers();
            return;
        }
}

void AppController::DBController::DeleteUser(int userId)
{
    for (int i = 0; i < userDB->ListDB->Count; i++)
        if (userDB->ListDB[i]->Id == userId) {
            //productDB->ListDB[i]->Status = 'I';
            userDB->ListDB->RemoveAt(i);
            userDB->SaveUsers();
            return;
        }
}

User^ AppController::DBController::ValidateUser(String^ username, String^ password)
{
    User^ user = nullptr;
    userDB->LoadUsers();
    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->Username->Equals(username) &&
            userDB->ListDB[i]->Password->Equals(password))
            return userDB->ListDB[i];
    }
    return user;
}

User^ AppController::DBController::QueryUserbyId(int userId)
{
    userDB->LoadUsers();
    for (int i = 0; i < userDB->ListDB->Count; i++)
        if (userDB->ListDB[i]->Id == userId &&
            userDB->ListDB[i]->GetType() == User::typeid)
            return (User^)userDB->ListDB[i];
    return nullptr;
}

int AppController::DBController::QueryLastUserId()
{
    
    if (userDB->ListDB->Count > 0)
        return userDB->ListDB[userDB->ListDB->Count - 1]->Id;
    else
        return 0;
}

List<User^>^ AppController::DBController::QueryAllUsers()
{
    userDB->LoadUsers();
    return userDB->ListDB;

}

bool AppController::DBController::ConfirmUser(User^ user) {

    userDB->LoadUsers();

    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->DocumentNumber == user->DocumentNumber
            | userDB->ListDB[i]->PhoneNumber == user->PhoneNumber
            | userDB->ListDB[i]->Username == (user->Username) )
            //userDB->ListDBUser[i]->PhoneNumber==user->PhoneNumber | userDB->ListDBUser[i]-> Username== user->Username )
        {
            return false;
        }
    }
    return true;
}


/*Customer*/
void AppController::DBController::AddCustomers(Customer^ customer)
{
    customerDB->ListDB->Add(customer);
    SaveCustomers();
}

Customer^ AppController::DBController::QueryCustomerById(int customerId)
{
    LoadCustomers();
    for (int i = 0; i < customerDB->ListDB->Count; i++) {
        if (customerDB->ListDB[i]->Id == customerId)
            return customerDB->ListDB[i];
    }
    return nullptr;
}

List<Customer^>^ AppController::DBController::QueryAllCustomer()
{   //VERIFICAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAR
    userDB->LoadUsers();
    List<Customer^>^ list = gcnew List<Customer^>();
    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->GetType() == Customer::typeid && userDB->ListDB[i]->Status == 'A') {
            list->Add(dynamic_cast<Customer^>(userDB->ListDB[i]));
        }
    }
    return list;
}

bool AppController::DBController::ConfirmCustomer(Customer^ customer)
{
    userDB->LoadUsers();

    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->DocumentNumber == customer->DocumentNumber
            | userDB->ListDB[i]->PhoneNumber == customer->PhoneNumber
            | userDB->ListDB[i]->Username == (customer->Username))
        {
            return false;
        }
    }
    return true;
}

void AppController::DBController::SaveCustomers()
{
    System::Xml::Serialization::XmlSerializer^ writer =
    gcnew System::Xml::Serialization::XmlSerializer(CustomerDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("Customers.xml");
    writer->Serialize(file, customerDB);
    file->Close();
}

void AppController::DBController::LoadCustomers()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(CustomerDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("Customers.xml");
        customerDB = (CustomerDB^)reader->Deserialize(file);
    }
    catch (...) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

/*Manager*/

Manager^ AppController::DBController::QueryManagerById(int managerId)
{
    LoadManagers();
    for (int i = 0; i < managerDB->ListDB->Count; i++) {
        if (managerDB->ListDB[i]->Id == managerId)
            return managerDB->ListDB[i];
    }
    return nullptr;
}

List<Manager^>^ AppController::DBController::QueryAllManagers()
{   //VERIFICAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAR
    userDB->LoadUsers();
    List<Manager^>^ list = gcnew List<Manager^>();
    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->GetType() == Manager::typeid && userDB->ListDB[i]->Status == 'A') {
            list->Add(dynamic_cast<Manager^>(userDB->ListDB[i]));
        }
    }
    return list;
}

bool AppController::DBController::ConfirmManager(Manager^ manager)
{
    userDB->LoadUsers();

    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->DocumentNumber == manager->DocumentNumber
            | userDB->ListDB[i]->PhoneNumber == manager->PhoneNumber
            | userDB->ListDB[i]->Username == (manager->Username) | !(manager->VerificationCode == 0000))
        {
            return false;
        }
    }
    return true;

}

void AppController::DBController::AddManagers(Manager^ manager)
{
    managerDB->ListDB->Add(manager);
    SaveManagers();
}

void AppController::DBController::SaveManagers()
{
    System::Xml::Serialization::XmlSerializer^ writer =
    gcnew System::Xml::Serialization::XmlSerializer(ManagerDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("Managers.xml");
    writer->Serialize(file, managerDB);
    file->Close();
}

void AppController::DBController::LoadManagers()
{
    System::Xml::Serialization::XmlSerializer^ reader =
    gcnew System::Xml::Serialization::XmlSerializer(ManagerDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("Managers.xml");
        managerDB = (ManagerDB^)reader->Deserialize(file);
    }
    catch (...) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}


/*Deliveryman*/

DeliveryMan^ AppController::DBController::QueryDeliveryManById(int deliverymanId)
{
    LoadDeliveryMan();
    for (int i = 0; i < deliveryManDB->ListDB->Count; i++) {
        if (deliveryManDB->ListDB[i]->Id == deliverymanId)
            return deliveryManDB->ListDB[i];
    }
    return nullptr;
}

List<DeliveryMan^>^ AppController::DBController::QueryAllDeliveryMan()
{   //VERIFICAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAR
    userDB->LoadUsers();
    List<DeliveryMan^>^ list = gcnew List<DeliveryMan^>();
    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->GetType() == DeliveryMan::typeid && userDB->ListDB[i]->Status == 'A') {
            list->Add(dynamic_cast<DeliveryMan^>(userDB->ListDB[i]));
        }
    }
    return list;
}

bool AppController::DBController::ConfirmDeliveryMan(DeliveryMan^ deliveryman)
{
    userDB->LoadUsers();

    for (int i = 0; i < userDB->ListDB->Count; i++) {
        if (userDB->ListDB[i]->DocumentNumber == deliveryman->DocumentNumber
            | userDB->ListDB[i]->PhoneNumber == deliveryman->PhoneNumber
            | userDB->ListDB[i]->Username == (deliveryman->Username) | !(deliveryman->VerificationCode == 123456))
        {
            return false;
        }
    }
    return true;

}

void AppController::DBController::AddDeliveryMan(DeliveryMan^ deliveryman)
{
    deliveryManDB->ListDB->Add(deliveryman);
    SaveDeliveryMan();
}

void AppController::DBController::SaveDeliveryMan()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(DeliveryManDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("DeliveryMan.xml");
    writer->Serialize(file, deliveryManDB);
    file->Close();
}

void AppController::DBController::LoadDeliveryMan()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(DeliveryManDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("DeliveryMan.xml");
        deliveryManDB = (DeliveryManDB^)reader->Deserialize(file);
    }
    catch (...) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}


//////////////////////////////////////////////