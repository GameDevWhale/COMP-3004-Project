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
    connect(ui->pushButton_submitUsername, &QPushButton::clicked, this, &MainWindow::loadDashboardPage);

    //Dashboard page
    connect(ui->pushButton_browseMarketSchedule, &QPushButton::clicked, this, &MainWindow::loadMarketSchedulePage);

    //Market Schedule page
    connect(ui->pushButton_marketSchedule_returnToDashboard, &QPushButton::clicked, this, &MainWindow::loadDashboardPage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

