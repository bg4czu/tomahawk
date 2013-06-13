/* === This file is part of Tomahawk Player - <http://tomahawk-player.org> ===
 *
 *   Copyright 2013, Christian Muehlhaeuser <muesli@tomahawk-player.org>
 *
 *   Tomahawk is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Tomahawk is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Tomahawk. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOMAHAWKSTYLE_H
#define TOMAHAWKSTYLE_H

#include "TomahawkUtils.h"
#include "DllMacro.h"

#include <QColor>
#include <QPainter>
#include <QStyle>

class QFrame;
class QScrollBar;

namespace TomahawkStyle
{
    DLLEXPORT void loadFonts();

    /**
     * Draws a header background on a painter with the specified rectangle
     */
    DLLEXPORT void horizontalHeader( QPainter* painter, const QRect& rect );

    /**
     * Draws a styled arrow that looks good on a Header (from qwindowstyle.cpp)
     * \copyright {  Licensed under the GPL v3+
     *               Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
     *               Contact: Nokia Corporation (qt-info@nokia.com) }
     */
    DLLEXPORT void drawArrow( QStyle::PrimitiveElement, QPainter* painter, const QStyleOption* opt );

    DLLEXPORT void stylePageFrame( QFrame* frame );
    DLLEXPORT void styleScrollBar( QScrollBar* scrollBar );

    static const QColor BORDER_LINE = QColor( "#8c8c8c" );
    static const QColor POPUP_BACKGROUND = QColor( "#ffffff" );
    static const QColor POPUP_OSX_BACKGROUND = QColor( "#D6E3F1" );

    static const QColor GROUP_HEADER = QColor( "#637180" );
    static const QColor HOVER_GLOW = QColor( "#dddddd" );

    static const QColor NOW_PLAYING_ITEM = QColor( "#962c26" );
    static const QColor NOW_PLAYING_ITEM_TEXT = QColor( "#ffffff" );
    static const QColor SELECTION_BACKGROUND = QColor( "#962c26" );
    static const QColor SELECTION_FOREGROUND = QColor( "#ffffff" );

    static const QColor HEADER_UPPER = QColor( "#25292c" );
    static const QColor HEADER_LOWER = QColor( "#1e1e1e" );
    static const QColor HEADER_TEXT = QColor( "#eaeaea" );
    static const QColor HEADER_HIGHLIGHT = QColor( "#333" );

    static const QColor PAGE_TEXT = Qt::gray;
    static const QColor PAGE_ITEM_BACKGROUND = QColor( "#1e1e1e" ).lighter( 290 );
    static const QColor PAGE_FOREGROUND = QColor( "#ffffff" );
    static const QColor PAGE_BACKGROUND = QColor( "#1e1e1e" ).lighter();
    static const QColor FOOTNOTES_BACKGROUND = QColor( "#272b2e" );
    static const QColor DASHBOARD_ROUNDFIGURE_BACKGROUND = QColor( "#454e59" );

    static const QColor SIDEBAR_ROUNDFIGURE_BACKGROUND = QColor( 167, 183, 211 );
    static const QColor SIDEBAR_ROUNDFIGURE_INBOX_BACKGROUND = QColor( 239, 140, 51 );
    static const QColor SIDEBAR_LAZYLIST_UPPER = QColor( "#ffffff" );
    static const QColor SIDEBAR_LAZYLIST_LOWER = QColor( 0x88, 0x88, 0x88 );
    static const QColor SIDEBAR_LAZYLIST_LOWEST = QColor( 0x99, 0x99, 0x99 );

    static const QColor SLIDESWITCH_CHECKED_TOP = QColor( 8, 54, 134 );
    static const QColor SLIDESWITCH_CHECKED_BOTTOM = QColor( 118, 172, 240 );
    static const QColor SLIDESWITCH_UNCHECKED_TOP = QColor( 128, 128, 128 );
    static const QColor SLIDESWITCH_UNCHECKED_BOTTOM = QColor( 179, 179, 179 );
    static const QColor SLIDESWITCH_TEXT = QColor( "#606060" );

    static const int POPUP_ROUNDING_RADIUS = 6;
    static const float POPUP_OPACITY = 0.93;
}

#endif // TOMAHAWKSTYLE_H
