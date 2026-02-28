#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void setCurrentPage(int index);
    void setupConnections();

private slots:
    void loadLoginPage(){
        setCurrentPage(0);
    }
    void loadVendorDashboardPage(){
        setCurrentPage(1);
    }
    void loadMarketSchedulePage(){
        setCurrentPage(2);
    }
    void loadOperatorDashboardPage(){
        setCurrentPage(3);
    }
    void loadAdminDashboardPage(){
        setCurrentPage(4);
    }
};
#endif // MAINWINDOW_H
