#ifndef MARKETSCHEDULEPAGE_H
#define MARKETSCHEDULEPAGE_H

#include <QWidget>

namespace Ui {
class MarketSchedulePage;
}

class MarketSchedulePage : public QWidget
{
    Q_OBJECT

public:
    explicit MarketSchedulePage(QWidget *parent = nullptr);
    ~MarketSchedulePage();

private:
    Ui::MarketSchedulePage *ui;
};

#endif // MARKETSCHEDULEPAGE_H
