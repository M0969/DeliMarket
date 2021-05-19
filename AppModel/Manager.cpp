/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Manager.h"

/**
 * Manager implementation
 */

AppModel::Manager::Manager(int id, String^ firstName, String^ lastName, String^ phoneNumber, array<Byte>^ photo, int verificationcode, int employeesNumber)
{
	Id = id;
	FirstName = firstName;
	PhoneNumber = phoneNumber;
	Photo = photo;
	VerificationCode = verificationcode;
	EmployeesNumber = employeesNumber;
}
