#pragma once

#include "Cars.h"


Window::Window()
{
	lb1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b1 = new QPushButton("spawn car", this);
	QObject::connect(b1, &QPushButton::clicked, this, &Window::spawnCar);
	b1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b2 = new QPushButton("right", this);
	QObject::connect(b2, &QPushButton::clicked, this, &Window::moveRight);
	b2->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b3 = new QPushButton("down", this);
	QObject::connect(b3, &QPushButton::clicked, this, &Window::moveDown);
	b3->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b4 = new QPushButton("left", this);
	QObject::connect(b4, &QPushButton::clicked, this, &Window::moveLeft);
	b4->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b5 = new QPushButton("up", this);
	QObject::connect(b5, &QPushButton::clicked, this, &Window::moveUp);
	b5->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QSpacerItem* blank = new QSpacerItem(200, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);
	QPushButton* b6 = new QPushButton("check distance", this);
	QObject::connect(b6, &QPushButton::clicked, this, &Window::checkDistance);
	b6->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	secondaryLayout->addWidget(lb1);
	secondaryLayout->addWidget(b1);
	secondaryLayout->addWidget(b5);
	secondaryLayout->addWidget(b3);
	secondaryLayout->addWidget(b2);
	secondaryLayout->addWidget(b4);
	secondaryLayout->addWidget(b6);
	secondaryLayout->addSpacerItem(blank);
    mainLayout->addWidget(field);
    mainLayout->addLayout(secondaryLayout);
    this->setLayout(mainLayout);
}

void Window::spawnCar()
{
	int x = 50, y = 300;
    this->field->carVector.push_back(Car(x, y));
	/*this->field->carVector[this->field->carVector.size() - 1].checkVector.push_back(DistanceChecker((this->field->carVector[this->field->carVector.size() - 1].point(1).x() + 
		this->field->carVector[this->field->carVector.size() - 1].point(2).x()) / 2, (this->field->carVector[this->field->carVector.size() - 1].point(1).y() + 
		this->field->carVector[this->field->carVector.size() - 1].point(2).y()) / 2));*/
	this->field->update();
}

void Window::moveRight()
{
	this->field->carVector[this->field->carVector.size() - 1].moveRight(3);
	this->field->update();
}

void Window::moveDown()
{
	this->field->carVector[this->field->carVector.size() - 1].moveDown(3);
	this->field->update();
}

void Window::moveLeft()
{
	this->field->carVector[this->field->carVector.size() - 1].moveLeft(3);
	this->field->update();
}

void Window::moveUp()
{
	this->field->carVector[this->field->carVector.size() - 1].moveUp(3);
	this->field->update();
}

void Window::checkDistance()
{
	this->field->carVector[this->field->carVector.size() - 1].checkVector.push_back(DistanceChecker((this->field->carVector[this->field->carVector.size() - 1].point(1).x() +
		this->field->carVector[this->field->carVector.size() - 1].point(2).x()) / 2, (this->field->carVector[this->field->carVector.size() - 1].point(1).y() +
			this->field->carVector[this->field->carVector.size() - 1].point(2).y()) / 2));
	while (!this->field->carVector[this->field->carVector.size() - 1].checkVector[0].intersects(this->field->obstacle))
	{
		this->field->carVector[this->field->carVector.size() - 1].checkVector[0].move();
	}
	this->lb1->setNum(this->field->carVector[this->field->carVector.size() - 1].checkVector[0].getDistance());
	this->field->carVector[this->field->carVector.size() - 1].checkVector.pop_back();
}