#pragma once

#include "Cars.h"

Field::Field()
{
	this->setFixedHeight(800);
	this->setFixedWidth(600);
}

void Field::paintEvent(QPaintEvent* e)
{
	QPainter* painter = new QPainter(this);
	painter->setPen(QPen(Qt::red, 1, Qt::SolidLine));
	painter->setBrush(QBrush("#c56c00"));
	for (int i = 0; i < carVector.size(); ++i)
	{
		painter->drawPolygon(carVector[i]);
	}
	painter->drawPolygon(obstacle);
	if (carVector.size() != 0)
	{
		if (carVector[carVector.size() - 1].checkVector.size() != 0)
		{
			painter->drawPolygon(carVector[carVector.size() - 1].checkVector[0]);
		}
	}
}