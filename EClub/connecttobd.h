#ifndef CONNECTTOBD_H
#define CONNECTTOBD_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class ConnectToBD;
}

class ConnectToBD : public QWidget
{
    Q_OBJECT

public:
    explicit ConnectToBD(QWidget *parent = nullptr);
    ~ConnectToBD();

    QMessageBox *resultMessage;
private slots:
    void on_Button_Connect_clicked();

private:
    Ui::ConnectToBD *ui;
    QSqlDatabase db;
};

#endif // CONNECTTOBD_H
