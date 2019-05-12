#include "eclub.h"
#include "ui_eclub.h"

EClub::EClub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EClub)
{
    ui->setupUi(this);
}

EClub::~EClub()
{
    delete ui;
}

void EClub::on_actionConnect_to_Data_Base_triggered()
{
    toBD = new ConnectToBD();
    toBD->show();
}
