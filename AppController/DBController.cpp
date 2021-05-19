#include "pch.h"
#include "DBController.h"

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
