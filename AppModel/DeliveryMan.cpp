/**
 * Project SalesSolution
 */

#include "pch.h"
#include "DeliveryMan.h"

/**
 * DeliveryMan implementation
 */

AppModel::DeliveryMan::DeliveryMan(int id, String^ firstName, String^ lastName, String^ phoneNumber, double quota, array<Byte>^ photo, int verificationcode, bool available)
{
	Id = id;
	FirstName = firstName;
	PhoneNumber = phoneNumber;
	Quota = quota;
	Photo = photo;
	Available = available;
	VerificationCode = verificationcode;
}
