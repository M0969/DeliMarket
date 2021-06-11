/**
 * Project SalesSolution
 */

#include "pch.h"
#include "DeliveryMan.h"

/**
 * DeliveryMan implementation
 */

AppModel::DeliveryMan::DeliveryMan(int id, String^ userName, String^ password, String^ firstName, String^ lastName, char gender, String^ documentnumber, String^ phonenumber, String^ email, String^ category, String^ address, char status, double quota, array<Byte>^ photo, int verificationcode, bool available)
{
	Id = id;
	Username = userName;
	Password = password;
	FirstName = firstName;
	LastName = lastName;
	Gender = gender;
	DocumentNumber = documentnumber;
	PhoneNumber = phonenumber;
	Category = category;
	Email = email;
	Address = address;
	Status = status;
	Photo = photo;
	VerificationCode = verificationcode;
	Available = available;
}
