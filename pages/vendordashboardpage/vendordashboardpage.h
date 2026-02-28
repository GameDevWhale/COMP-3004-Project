#ifndef VENDORDASHBOARDPAGE_H
#define VENDORDASHBOARDPAGE_H

#include <QWidget>

namespace Ui {
class VendorDashboardPage;
}

class VendorDashboardPage : public QWidget
{
    Q_OBJECT

public:
    explicit VendorDashboardPage(QWidget *parent = nullptr);
    ~VendorDashboardPage();

private:
    Ui::VendorDashboardPage *ui;
};

#endif // VENDORDASHBOARDPAGE_H
