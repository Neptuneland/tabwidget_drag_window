//CWidget.h
#ifndef CWIDGET_H
#define CWIDGET_H
#include <QWidget>

class CWidget:public QWidget
{
    Q_OBJECT
public:
    CWidget(QWidget* = 0);
protected:
    bool event(QEvent *);
signals:
    void sig_doubleClickedTitleBar();  //被双击时发射的信号
};
#endif
