#include <QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QLabel>
#include <fstream>
#include <iostream>
#include <string>

#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*QString address("../Android2/Sky.jpg");
    QPixmap bkgnd(address);
        bkgnd = bkgnd.scaled(this->size() , Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette :: Background , bkgnd);
        this->setPalette(palette);
        this->setFixedSize(this->width(),this->height());*/



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: setLabel(QString high_2[10] , QString low_2[10] , QString date_2[10] , QString text_2[10], QString code_2[10]){
    for(int i=0;i<10;i++){
        if(i==0){
    ui->label_high->setText(high_2[i]);
    ui->label_low->setText(low_2[i]);
    ui->label_date->setText(date_2[i]);
    ui->label_text->setText(text_2[i]);
    switch (code_2[i].toInt()) {
    case 0:
    {QPixmap pix("../Android2/0.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 1:
    {QPixmap pix("../Android2/1.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 2:
    {QPixmap pix("../Android2/2.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 3:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 4:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 5:
    {QPixmap pix("../Android2/5-40.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 6:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 7:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 8:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 9:
    {QPixmap pix("../Android2/9-12.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 10:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 11:
    {QPixmap pix("../Android2/11.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 12:
    {QPixmap pix("../Android2/9-12.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 13:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 14:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 15:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 16:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 17:
    {QPixmap pix("../Android2/17.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 18:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 19:
    {QPixmap pix("../Android2/19.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 20:
    {QPixmap pix("../Android2/20-21-22.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 21:
    {QPixmap pix("../Android2/20-21-22.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 22:
    {QPixmap pix("../Android2/20-21-22.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 23:
    {QPixmap pix("../Android2/23-24.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 24:
    {QPixmap pix("../Android2/23-24.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 25:
    {QPixmap pix("../Android2/25.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 26:
    {QPixmap pix("../Android2/26-29-44.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 27:
    {QPixmap pix("../Android2/27-28-30-33-34.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 28:
    {QPixmap pix("../Android2/27-28-30-33-34.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 29:
    {QPixmap pix("../Android2/26-29-44.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 30:
    {QPixmap pix("../Android2/27-28-30-33-34.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 31:
    {QPixmap pix("../Android2/31-32.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 32:
    {QPixmap pix("../Android2/31-32.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 33:
    {QPixmap pix("../Android2/27-28-30-33-34.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 34:
    {QPixmap pix("../Android2/27-28-30-33-34.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 35:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 36:
    {QPixmap pix("../Android2/36.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 37:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 38:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 39:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 40:
    {QPixmap pix("../Android2/5-40.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 41:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 42:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 43:
    {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 44:
    {QPixmap pix("../Android2/26-29-44.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 45:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 46:
    {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    case 47:
    {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    default:
    {QPixmap pix("../Android2/31-32.jpg");
        ui->label_pic->setPixmap(pix);
        break;}
    }
        }
        else if(i == 1){
            ui->label_high_2->setText(high_2[i]);
            ui->label_low_2->setText(low_2[i]);
            ui->label_date_2->setText(date_2[i]);
            ui->label_text_2->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_2->setPixmap(pix);
                break;}
            }

        }
        else if(i == 2){
            ui->label_high_3->setText(high_2[i]);
            ui->label_low_3->setText(low_2[i]);
            ui->label_date_3->setText(date_2[i]);
            ui->label_text_3->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_3->setPixmap(pix);
                break;}
            }

        }
        else if(i == 3){
            ui->label_high_4->setText(high_2[i]);
            ui->label_low_4->setText(low_2[i]);
            ui->label_date_4->setText(date_2[i]);
            ui->label_text_4->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_4->setPixmap(pix);
                break;}
            }

        }
        else if(i == 4){
            ui->label_high_5->setText(high_2[i]);
            ui->label_low_5->setText(low_2[i]);
            ui->label_date_5->setText(date_2[i]);
            ui->label_text_5->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_5->setPixmap(pix);
                break;}
            }

        }
        else if(i == 5){
            ui->label_high_6->setText(high_2[i]);
            ui->label_low_6->setText(low_2[i]);
            ui->label_date_6->setText(date_2[i]);
            ui->label_text_6->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_6->setPixmap(pix);
                break;}
            }

        }
        else if(i == 6){
            ui->label_high_7->setText(high_2[i]);
            ui->label_low_7->setText(low_2[i]);
            ui->label_date_7->setText(date_2[i]);
            ui->label_text_7->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_7->setPixmap(pix);
                break;}
            }

        }
        else if(i == 7){
            ui->label_high_8->setText(high_2[i]);
            ui->label_low_8->setText(low_2[i]);
            ui->label_date_8->setText(date_2[i]);
            ui->label_text_8->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_8->setPixmap(pix);
                break;}
            }

        }
        else if(i == 8){
            ui->label_high_9->setText(high_2[i]);
            ui->label_low_9->setText(low_2[i]);
            ui->label_date_9->setText(date_2[i]);
            ui->label_text_9->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_9->setPixmap(pix);
                break;}
            }

        }
        else if(i == 9){
            ui->label_high_10->setText(high_2[i]);
            ui->label_low_10->setText(low_2[i]);
            ui->label_date_10->setText(date_2[i]);
            ui->label_text_10->setText(text_2[i]);
            switch (code_2[i].toInt()) {
            case 0:
            {QPixmap pix("../Android2/0.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 1:
            {QPixmap pix("../Android2/1.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 2:
            {QPixmap pix("../Android2/2.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 3:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 4:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 5:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 6:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 7:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 8:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 9:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 10:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 11:
            {QPixmap pix("../Android2/11.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 12:
            {QPixmap pix("../Android2/9-12.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 13:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 14:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 15:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 16:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 17:
            {QPixmap pix("../Android2/17.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 18:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 19:
            {QPixmap pix("../Android2/19.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 20:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 21:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 22:
            {QPixmap pix("../Android2/20-21-22.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 23:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 24:
            {QPixmap pix("../Android2/23-24.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 25:
            {QPixmap pix("../Android2/25.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 26:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 27:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 28:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 29:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 30:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 31:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 32:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 33:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 34:
            {QPixmap pix("../Android2/27-28-30-33-34.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 35:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 36:
            {QPixmap pix("../Android2/36.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 37:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 38:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 39:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 40:
            {QPixmap pix("../Android2/5-40.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 41:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 42:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 43:
            {QPixmap pix("../Android2/13-14-15-16-41-43.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 44:
            {QPixmap pix("../Android2/26-29-44.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 45:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 46:
            {QPixmap pix("../Android2/6-7-8-10-18-35-42-46.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            case 47:
            {QPixmap pix("../Android2/3-4-37-38-39-45-47.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            default:
            {QPixmap pix("../Android2/31-32.jpg");
                ui->label_pic_10->setPixmap(pix);
                break;}
            }

        }
   }
}

void MainWindow :: on_pushButton_clicked()
{

    state = ui->lineEdit->text();
    QString url = "https://query.yahooapis.com/v1/public/yql?q=select * from weather.forecast where woeid in (select woeid from geo.places(1) where text='" + state + "')&format=json";
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(QUrl(url)));
    QEventLoop event;
    connect(response, SIGNAL(finished()), &event, SLOT(quit()));
    event.exec();
    QString json = response->readAll();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(json.toUtf8());
        if (jsonResponse.isNull()) {
            fprintf(stderr, "Invalid json output from qmlimportscanner.\n");
            return;
        }


    //QJsonDocument jsonResponse = QJsonDocument::fromJson(json.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();
    QJsonObject query = jsonObject["query"].toObject();
    QJsonObject results = query["results"].toObject();
    QJsonObject channel = results["channel"].toObject();
    QJsonObject item = channel["item"].toObject();
    QJsonArray forecast = item["forecast"].toArray();
    double x = 0.55556;
    qDebug() << "State : " + state;
    foreach (const QJsonValue & value, forecast) {
        QJsonObject obj = value.toObject();
        qDebug() << "Code : " + obj["code"].toString() + " High : " + obj["high"].toString() + " Low : " + obj["low"].toString() + " Text : " + obj["text"].toString();
        if(i<10)
        {high [i] = "High : " + QString :: number(t = (obj["high"].toString().toDouble() - 32)*(x));
            low [i]= "low : " + QString :: number(t = (obj["low"].toString().toDouble() - 32)*(x));
            date [i]= obj["date"].toString();
            text [i]= obj["text"].toString();
            code [i]= obj["code"].toString();
            i++;
        }

}
    setLabel(high,low,date,text,code);
}
