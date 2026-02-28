#include "admindashboardpage.h"
#include "ui_admindashboardpage.h"

AdminDashboardPage::AdminDashboardPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminDashboardPage)
{
    ui->setupUi(this);
}

AdminDashboardPage::~AdminDashboardPage()
{
    delete ui;
}
