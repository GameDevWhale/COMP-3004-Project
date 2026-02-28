#ifndef OPERATORDASHBOARDPAGE_H
#define OPERATORDASHBOARDPAGE_H

#include <QWidget>

namespace Ui {
class OperatorDashboardPage;
}

class OperatorDashboardPage : public QWidget
{
    Q_OBJECT

public:
    explicit OperatorDashboardPage(QWidget *parent = nullptr);
    ~OperatorDashboardPage();

private:
    Ui::OperatorDashboardPage *ui;
};

#endif // OPERATORDASHBOARDPAGE_H
