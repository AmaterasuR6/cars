/*#pragma once

#include "Cars.h"

ControlPanel::ControlPanel()
{
	lb1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QPushButton* b1 = new QPushButton("spawn car", this);
	QObject::connect(b1, &QPushButton::clicked, w, &Window::spawnCar);
	b1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
	QSpacerItem* blank = new QSpacerItem(200, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);
	mainLayout->addWidget(lb1);
	mainLayout->addWidget(b1);
	mainLayout->addSpacerItem(blank);
	setLayout(mainLayout);
}*/