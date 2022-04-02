#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Cars.h"
#include <QtWidgets/QMainWindow>
#include "qpainter.h"
#include <QPushButton>
#include <QFrame>
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPainter>
#include <iostream>
#include <QLabel>
#define _USE_MATH_DEFINES
#include <math.h>
#include <QRect>
#include <QPolygon>
#include <vector>
#include <QTextCodec>
#include <QSpacerItem>
#include <QVector>
using namespace std;



class DistanceChecker : public QPolygon
{
public:
	DistanceChecker(int, int);
	void move();
	int getDistance();
	void updateCords(int, int);
private:
	int startX, startY, currentX, currentY;
};

class Obstacle : public QPolygon
{
public:
	Obstacle();
};

class Car : public QPolygon
{
public:
	Car(int, int);
	void moveRight(int);
	void moveDown(int);
	void moveLeft(int);
	void moveUp(int);
	vector<DistanceChecker> checkVector;
private:
};

class Field : public QWidget
{
public:
	Field();
	vector<Car> carVector;
	Obstacle obstacle;
private:
	void paintEvent(QPaintEvent* e);
};

class Window : public QWidget
{
public:
	Window();
	void spawnCar();
	void moveRight();
	void moveDown();
	void moveLeft();
	void moveUp();
	void checkDistance();
private:
	Field* field = new Field;
	QHBoxLayout* mainLayout = new QHBoxLayout(this);
	QVBoxLayout* secondaryLayout = new QVBoxLayout();
	QLabel* lb1 = new QLabel("hello", this);
};