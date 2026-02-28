#include "operatordashboardpage.h"
#include "ui_operatordashboardpage.h"

OperatorDashboardPage::OperatorDashboardPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OperatorDashboardPage)
{
    ui->setupUi(this);
}

OperatorDashboardPage::~OperatorDashboardPage()
{
    delete ui;
}
