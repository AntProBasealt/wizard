#pragma once

#include <QWidget>

namespace Ui
{
	class FourthWidget;
}

class FourthWidget : public QWidget
{
	Q_OBJECT
public:
	FourthWidget(QWidget* parent = nullptr);

private:
	Ui::FourthWidget* ui;
};
