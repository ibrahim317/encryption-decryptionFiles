#include "home.h"
#include "ui_home.h"
#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <string>
#include <fstream>
#include <QTextStream>
#include <QMediaPlayer>
#include <QMessageBox>
using namespace std;
QMediaPlayer * mu=new QMediaPlayer();
home::home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::home)
{
    setStyleSheet("background-color:#1d2432;");
    ui->setupUi(this);
    setWindowTitle("Encryption-Decryption");
    mu->setMedia(QUrl("qrc:/sounds/calm.wav"));
}

home::~home()
{
    delete ui;
}

void home::on_pushButton_clicked()
{
    ifstream file;
    QString filename = QFileDialog::getOpenFileName(this,"CHOOSE THE FILE THAT YOU WANT TO CRYPT","/home");
    std::string fn = filename.toUtf8().constData();
    file.open(fn);
    if(!file.is_open()){
    QMessageBox::warning(this,"Waring","Can't open the File");
    }
    else{
    ofstream faile;
    QString afilename = QFileDialog::getSaveFileName(this,"CHOOSE THE FILE THAT YOU WANT TO SAVE IN THE CRYPTED FILE","/home");
    std::string afn = afilename.toUtf8().constData();
      faile.open(afn);

   string contant="";
   while(!file.eof()){
       contant+=file.get()+'*';
   }
       faile << contant;
    file.close();
    faile.close();

    }
}


void home::on_pushButton_2_clicked()
{
    ifstream file;
    QString filename = QFileDialog::getOpenFileName(this,"CHOOSE THE FILE THAT YOU WANT TO DECRYPT","/home");
    std::string fn = filename.toUtf8().constData();
    file.open(fn);
    if(!file.is_open()){
    QMessageBox::warning(this,"Waring","Can't open the File");
    }
    else{
    ofstream faile;
    QString afilename = QFileDialog::getSaveFileName(this,"CHOOSE THE FILE THAT YOU WANT TO SAVE IN THE DECRYPTED FILE","/home");
    std::string afn = afilename.toUtf8().constData();
        faile.open(afn);

   string contant="";
   while(!file.eof()){
       contant+=file.get()-'*';
   }
       faile << contant;
    file.close();
    faile.close();
}}





void home::on_pushButton_3_clicked()
{
    mu->pause();
}




void home::on_pushButton_5_clicked()
{
     mu->play();
}










