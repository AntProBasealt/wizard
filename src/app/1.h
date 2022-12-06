#pragma once

#include <QWidget>

namespace Ui
{
	class FirstWidget;
}

class FirstWidget : public QWidget
{
	Q_OBJECT
public:
	FirstWidget(QWidget* parent = nullptr);

private:
	Ui::FirstWidget* ui;
};
