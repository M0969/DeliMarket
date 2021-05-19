/**
 * Project SalesSolution
 */

#include "pch.h"
#include "Customer.h"

/**
 * Customer implementation
 */

AppModel::Customer::Customer(String^ firstName, String^ lastName, String^ address, String^ phoneNumber, int customerpoints)
{
	FirstName = firstName;
	LastName = lastName;
	Address = address;
	PhoneNumber = phoneNumber;
	CustomerPoints = customerpoints;

}
