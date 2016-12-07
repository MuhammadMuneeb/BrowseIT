#include <QApplication> //QApplication Qt class hai jis mein GUI sey related sab features etc hain. Baqi sab is sey
//inherit krtin hain
#include <mainwindow.h>
//mainwindow.h aik header file hai hamari bnayi hui jiska kam mainwindow class ko include krna hai
//takey main mein call kr sakein

int main(int argc, char *argv[]){
    QApplication a(argc, argv); //QApplication class ka contructor call kr k aik object bnaya
    MainWindow w; //MainWindow, jo mainwindow.h ki wajah sey inlcude hai uska object bnaya
    w.setWindowTitle("BrowseIT"); //setWindowTitle yani jo bhi window baney gi uska title bnaya
    w.show(); //ye us window ko show krney k lye

    return a.exec(); //ye function ye us program ko execute krta hai. exec() ka matlab hai execute

}
