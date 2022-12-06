#pragma once

#include <QWidget>

namespace Ui
{
	class ThirdWidget;
}

class ThirdWidget : public QWidget
{
	Q_OBJECT
public:
	ThirdWidget(QWidget* parent = nullptr);

private:
	Ui::ThirdWidget* ui;
};
