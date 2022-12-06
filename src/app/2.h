#pragma once

#include <QWidget>

namespace Ui
{
	class SecondWidget;
}

class SecondWidget : public QWidget
{
	Q_OBJECT
public:
	SecondWidget(QWidget* parent  = nullptr);

private:
	Ui::SecondWidget* ui;
};
