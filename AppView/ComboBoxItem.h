#pragma once
using namespace System;

public ref class ComboBoxItem
{
public:
	int PointsQuantity;
	String^ Name;
	//property int SolesQuantity;
	//property double PercentageDiscount;
	//property int PointsEarned;
	ComboBoxItem(int PointsQuantity, String^ Name)
	{
		this->PointsQuantity = PointsQuantity;
		this->Name = Name;
	}

	String^ ToString()  override
	{
		return this->PointsQuantity + "" + this->Name;
	}

};