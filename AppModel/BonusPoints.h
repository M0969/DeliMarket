/**
 * Project SalesSolution
 */
#pragma once
using namespace System;

namespace AppModel {
    [Serializable]
    public ref class BonusPoints {
    public:
       property int PointsMin;
       property int PointsMax;
       property double PercentageEqMin; //cambio de int a double
       property double PercentageEqMax; ////cambio de int a double
       property int PointsEarned;
       property int SolesPerPoint;
    };
}
