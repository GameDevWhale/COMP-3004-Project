#include "marketschedulepage.h"
#include "ui_marketschedulepage.h"

MarketSchedulePage::MarketSchedulePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketSchedulePage)
{
    ui->setupUi(this);
}

MarketSchedulePage::~MarketSchedulePage()
{
    delete ui;
}
