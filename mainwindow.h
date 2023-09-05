#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QMessageBox>
#include <block.h>
#include <dialog.h>
#include <QTimer>
#include <background.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int background_c=0;
    int BLOCK_WIDTH=20;
    int BLOCK_HEIGHT=20;  //格子像素高
    int MENU_HEIGHT=23; //菜单栏高度
    int BOARD_HEIGHT=(MENU_HEIGHT+40); //40是记分板高度
    int ELENUM_WIDTH=20; //红色数字像素宽
    int ELENUM_HEIGHT=28 ;//红色数字像素高
    int EXPRESSION_WIDTH=24;//表情像素宽
    int EXPRESSION_HEIGHT=24;//表情像素高
protected:
    void mousePressEvent(QMouseEvent *event);//绘图事件
    void paintEvent(QPaintEvent *event);//鼠标事件

private slots:

    void on_actionReStart_triggered();//重新开始当局游戏按键响应(菜单栏)信号槽

    void on_actionPrimary_triggered();//创建初级难度雷图按键响应(菜单栏)信号槽

    void on_actionInternediate_triggered();//创建中级难度雷图按键响应(菜单栏)信号槽

    void on_actionHigh_triggered();//创建高级难度雷图按键响应(菜单栏)信号槽

    void on_actionUser_Define_triggered();//创建自定义雷图按键响应(菜单栏)信号槽

    void on_updateTimer();//更新计时信号槽

    void on_actionExit_triggered();//退出程序按键响应(菜单栏)信号槽

    void on_actionHow_to_play_triggered();//游戏帮助按键响应(菜单栏)信号槽

    void on_actionrank_triggered();

private:
    Ui::MainWindow *ui;
    Block *mBlock;
    QTimer *mTimer;
};

#endif // MAINWINDOW_H
