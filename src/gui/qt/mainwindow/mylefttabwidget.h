//
// C++ Interface: MyLeftTabWidget
//
// Description: 
//
//
// Author: FThauer FHammer <f.thauer@web.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MYLEFTTABWIDGET_H
#define MYLEFTTABWIDGET_H

#include <QtGui>
#include <QtCore>

#include <iostream>

class MyLeftTabWidget : public QTabWidget
{
Q_OBJECT
public:
    MyLeftTabWidget(QGroupBox*);

    ~MyLeftTabWidget();


	void paintEvent(QPaintEvent * event);
	void startBlinkChatTab();
	void stopBlinkChatTab();
	void showDefaultChatTab();

public slots:
	
	void blinkChatTab();

private: 

	QTimer *chatBlinkTimer;
	QTabBar *myTabBar;

};

#endif
