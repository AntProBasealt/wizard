#include "3.h"
#include "ui_3.h"

ThirdWidget::ThirdWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ThirdWidget())
{
    ui->setupUi(this);
}
