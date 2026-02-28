#include "vendordashboardpage.h"
#include "ui_vendordashboardpage.h"

VendorDashboardPage::VendorDashboardPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VendorDashboardPage)
{
    ui->setupUi(this);
}

VendorDashboardPage::~VendorDashboardPage()
{
    delete ui;
}
