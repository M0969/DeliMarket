/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Customer.h"

/**
 * Customer implementation
 */



AppModel::Customer::Customer(int id, String^ username, String^ password, String^ firstName, String^ lastName, char gender, String^ documentNumber, String^ phoneNumber, String^ email, String^ category, String^ address, char status)
{
	Id = id;
	Username = username;
	Password = password;
	FirstName = firstName;
	LastName = lastName;
	Gender = gender;
	DocumentNumber = documentNumber;
	PhoneNumber = phoneNumber;
	Category = category;
	Email = email;
	Address = address;
	Status = status;
}
