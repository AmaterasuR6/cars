#pragma once

#include "Cars.h"

DistanceChecker::DistanceChecker(int x, int y)
{
	startX = x;
	startY = y;
	currentX = x + 1;
	currentY = y;
	this->setPoints(2, currentX - 1, currentY, currentX++, currentY);
}

void DistanceChecker::move()
{
	this->setPoints(2, currentX - 1, currentY, currentX++, currentY);
}

int DistanceChecker::getDistance()
{
	return currentX - 1 - startX;
}

void DistanceChecker::updateCords(int x, int y)
{
	startX = x;
	startY = y;
	currentX = x + 1;
	currentY = y;
}