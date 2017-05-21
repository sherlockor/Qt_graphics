#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPolygonItem>
#include <QTimerEvent>
#include <QTimer>
#include <QResizeEvent>

#include "scenerect.h"
#include "scenecircular.h"
#include "scenetriangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void Init();
    void UnInit();

public slots:
    void OnStartButton();

    void OnPauseButton();

    void OnStopButton();

    void OnQuickButton();

    void OnSlowButton();

    void OnRectButton();

    void OnCircularButton();

    void OnTirangleButton();

protected:
    void resizeEvent(QResizeEvent *);

private:
    SceneRect* rectScene;       //带有矩形的场景
    SceneCircular* circuScene;  //带有圆形的场景
    SceneTriangle* tirScene;    //带有三角形的场景
};

#endif // MAINWINDOW_H
