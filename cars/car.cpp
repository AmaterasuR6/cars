#pragma once

#include "Cars.h"

Car::Car(int x, int y)
{
	this->setPoints(4, x, y, x + 30, y, x + 30, y + 10, x, y + 10);
	
}

void Car::moveRight(int r = 3)
{
	for (int i = 0; i < 4; ++i)
	{
		this->setPoint(i, this->point(i).x() + r, this->point(i).y());
	}
}

void Car::moveDown(int r = 3)
{
	for (int i = 0; i < 4; ++i)
	{
		this->setPoint(i, this->point(i).x(), this->point(i).y() + r);
	}
}

void Car::moveLeft(int r = 3)
{
	for (int i = 0; i < 4; ++i)
	{
		this->setPoint(i, this->point(i).x() - r, this->point(i).y());
	}
}

void Car::moveUp(int r = 3)
{
	for (int i = 0; i < 4; ++i)
	{
		this->setPoint(i, this->point(i).x(), this->point(i).y() - r);
	}
}