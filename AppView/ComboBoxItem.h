#pragma once

using namespace System;

public ref class ComboBoxItem
{
public:
	String^ Address;
	String^ Custom;
	ComboBoxItem(String^ Address, String^ Custom)
	{
		this->Address = Address;
		this->Custom = Custom;
	}

	String^ ToString()  override
	{
		return this->Address + " - " + this->Custom;
	}

};