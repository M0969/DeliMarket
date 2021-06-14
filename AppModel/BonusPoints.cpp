/**
 * Project SalesSolution
 */

#include "pch.h"
#include "BonusPoints.h"

/**
 * BonusPoints implementation
 */

AppModel::BonusPoints::BonusPoints(int pointsQuantity, int solesQuantity, double percentageDiscount, int pointsEarned)
{
    PointsQuantity = pointsQuantity;
    SolesQuantity = solesQuantity;
    PercentageDiscount = percentageDiscount;
    PointsEarned = pointsEarned;
}