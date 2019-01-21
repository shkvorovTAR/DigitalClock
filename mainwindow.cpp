#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // создание таймера
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));
    //запуск таймера с интервалом 1 секунду
    timer->start(1000);
    qDebug()<<"Start clock"<<endl;
    tick();
}

void MainWindow::tick()
{
    // Получение текущего времени
    temp = date.currentDateTime().time().toString("hh:mm:ss");
    // Условный оператор, если кол-во секунд четное то : меняется на пробел
    if ((date.currentDateTime().time().second() % 2) == 0)
    {
        temp[2] = ' ';
        temp[5] = ' ';
    }
    //Вывод даты и времени в отладчик
    qDebug()<<date.currentDateTime().toString("yyyy.MM.dd hh:mm:ss")<<endl;
    //Вывод даты и времени на status bar
    ui->statusBar->showMessage(date.currentDateTime().toString("yyyy.MM.dd hh:mm:ss"));
    //Отображение времени на дисплее
    ui->LCD->display(temp);
}

MainWindow::~MainWindow()
{
    delete ui;
}
