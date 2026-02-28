#ifndef ADMINDASHBOARDPAGE_H
#define ADMINDASHBOARDPAGE_H

#include <QWidget>

namespace Ui {
class AdminDashboardPage;
}

class AdminDashboardPage : public QWidget
{
    Q_OBJECT

public:
    explicit AdminDashboardPage(QWidget *parent = nullptr);
    ~AdminDashboardPage();

private:
    Ui::AdminDashboardPage *ui;
};

#endif // ADMINDASHBOARDPAGE_H
