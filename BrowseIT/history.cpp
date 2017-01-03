#include "history.h"
#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void history::history_write(QString filename, QString input)
{
    QFile file(filename);

    //next line is to open file in read and write mode
    if(!file.open(QFile::Append | QFile::Text)){
        qDebug(); //Throw an error if file doesnt open
    }


    QTextStream out(&file);
    out<< "\n"<< input;
    file.flush();
    file.close();
};

