#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupConnections();
}

void MainWindow::setCurrentPage(int index){
    ui->stackedWidget->setCurrentIndex(index);
}

void MainWindow::setupConnections(){
    //Login page
    connect(ui->pushButton_submitUsername, &QPushButton::clicked, this, &MainWindow::loadVendorDashboardPage);

    //Vendor Dashboard page
    connect(ui->pushButton_browseMarketSchedule, &QPushButton::clicked, this, &MainWindow::loadMarketSchedulePage);
    connect(ui->pushButton_exitSystem_vendorDashboard, &QPushButton::clicked, this, &MainWindow::loadLoginPage);

    //Operator Dashboard page
    connect(ui->pushButton_exitSystem_operatorDashboard, &QPushButton::clicked, this, &MainWindow::loadLoginPage);

    //Admin Dashboard page
    connect(ui->pushButton_exitSystem_adminDashboard, &QPushButton::clicked, this, &MainWindow::loadLoginPage);

    //Market Schedule page
    connect(ui->pushButton_returnToDashboard, &QPushButton::clicked, this, &MainWindow::loadVendorDashboardPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

