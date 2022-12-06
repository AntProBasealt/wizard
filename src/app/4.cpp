#include "4.h"
#include "ui_4.h"

FourthWidget::FourthWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FourthWidget())
{
    ui->setupUi(this);
}
