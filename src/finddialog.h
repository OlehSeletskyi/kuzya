/***************************************************************************
 *   Copyright (C) 2008 by Volodymyr Shevchyk                              *
 *   volder@users.sourceforge.net                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QObject>
#include <QDialog>
#include "ui_finddialog.h"
class QsciScintilla;
/**
	@author Sklyar Victor
*/
class FindDialog : public QDialog, private Ui::findForm
{
		Q_OBJECT
	public:
		FindDialog ( QWidget *parent = 0 );
		~FindDialog();

		void retranslate ( void );
	public slots:
		void slotFindDialog ( void );
	private slots:
		void slotFind ( void );
		void slotChangeCursPos ( int );
	private:
		QsciScintilla* textEditor;

};

#endif
