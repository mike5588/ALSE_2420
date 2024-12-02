#ifndef EJEMPLOPP_H
#define EJEMPLOPP_H

#include <QMainWindow>
#include <eigen3/Eigen/Dense>

QT_BEGIN_NAMESPACE
namespace Ui { class ejemploPp; }
QT_END_NAMESPACE

class ejemploPp : public QMainWindow
{
    Q_OBJECT

public:
    ejemploPp(QWidget *parent = nullptr);
    ~ejemploPp();
    void leerGUI();
    void escribirGUI();

private slots:
    void on_cmd_Operar_clicked();

private:
    Ui::ejemploPp *ui;
    //Eigen::MatrixXd A(2,2),B(2,2), R(2,2);

};
#endif // EJEMPLOPP_H
