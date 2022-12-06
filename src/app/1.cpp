#include "1.h"
#include "ui_1.h"

FirstWidget::FirstWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FirstWidget())
{
    ui->setupUi(this);
}
