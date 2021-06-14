/**
 * Project SalesSolution
 */
#pragma once
using namespace System;

namespace AppModel {
    [Serializable]
    public ref class BonusPoints {
    public:
       property int PointsQuantity;
       property int SolesQuantity;
       //property int PointsMin;
       //property int PointsMax;
       //property double PercentageEqMin; //cambio de int a double
       //property double PercentageEqMax; ////cambio de int a double
       property double PercentageDiscount;
       property int PointsEarned;
       //property int SolesPerPoint;
       BonusPoints() {}
       BonusPoints(int pointsQuantity, int solesQuantity, double percentageDiscount, int pointsEarned);
    };
}
