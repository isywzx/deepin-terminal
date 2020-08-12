/*
 *  Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
 *
 * Author:     wangpeili <wangpeili@uniontech.com>
 *
 * Maintainer: wangpeili <wangpeili@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef THEMEPANEL_H
#define THEMEPANEL_H

#include "rightpanel.h"

/*******************************************************************************
 1. @类名:    ThemePanel
 2. @作者:    ut000439 wangpeili
 3. @日期:    2020-08-12
 4. @说明:
*******************************************************************************/

class ThemeListView;
class ThemeListModel;
class ThemePanel : public RightPanel
{
    Q_OBJECT
public:
    explicit ThemePanel(QWidget *parent = nullptr);

signals:
    void themeChanged(const QString themeName);

private:
    ThemeListView *m_themeView = nullptr;
    ThemeListModel *m_themeModel = nullptr;
};

#endif  // THEMEPANEL_H
