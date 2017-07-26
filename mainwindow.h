#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setLabel(QString[]  , QString[]  , QString[]  , QString[] , QString[] );
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int i=0;
    QString state;
    QString firstState;
    QString spin;
    QString high[10],low[10],text[10],date[10],code[10];
    int t = 0;

private slots:
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
