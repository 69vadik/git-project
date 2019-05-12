#include "connecttobd.h"
#include "ui_connecttobd.h"

ConnectToBD::ConnectToBD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectToBD)
{
    ui->setupUi(this);
    setWindowTitle("Connect to DB");
    ui->lineEdit_Name_Of_Server->setText("DESKTOP-O0DH4GV\\SQLEXPRESS");
    resultMessage = new QMessageBox();

}

ConnectToBD::~ConnectToBD()
{
    delete ui;
}

void ConnectToBD::on_Button_Connect_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
        db.setDatabaseName("DRIVER={SQL Server};SERVER=" + ui->lineEdit_Name_Of_Server->text()+ ";Trusted_Connection=yes;");

        if(db.open())
            resultMessage->setText("Connected!");
        else resultMessage->setText("the connect was't connecting!");

        resultMessage->show();
}
