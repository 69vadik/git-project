#ifndef ECLUB_H
#define ECLUB_H

// simple for learning git

#include <QMainWindow>
#include "connecttobd.h"
#include <QSqlQueryModel>

namespace Ui {
class EClub;
}

class EClub : public QMainWindow
{
    Q_OBJECT

public:
    explicit EClub(QWidget *parent = nullptr);
    ~EClub();

    ConnectToBD * toBD;

private slots:
    void on_actionConnect_to_Data_Base_triggered();

private:
    Ui::EClub *ui;
    QSqlQueryModel* model;
};

#endif // ECLUB_H
