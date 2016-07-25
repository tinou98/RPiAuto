#ifndef GRIDAUTOLAYOUT_H
#define GRIDAUTOLAYOUT_H

#include <QWidget>
#include <QAction>
#include <QGridLayout>
#include <QLabel>


class GridAutoItem : public QLabel {
public:
    GridAutoItem(QString lbl, QPixmap logo) {
        this->setText(lbl);
        this->setPixmap(logo);
    }
};

class GridAutoLayout : public QWidget {
    Q_OBJECT
public:
    GridAutoLayout(QWidget *parent = 0);
    ~GridAutoLayout();

    void addItem(QString lbl, QPixmap logo);

private:
    QList<GridAutoItem*> items;
    QGridLayout grid;
};

#endif // GRIDAUTOLAYOUT_H
