#include "2.h"
#include "ui_2.h"

SecondWidget::SecondWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SecondWidget())
{
    ui->setupUi(this);
}
