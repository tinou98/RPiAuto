#ifndef GRIDAUTOLAYOUT_H
#define GRIDAUTOLAYOUT_H

#include <QWidget>
#include <QAction>
#include <QGridLayout>
#include <QLabel>


class GridAutoItem : public QWidget {
public:
	GridAutoItem(QString str, QPixmap logo) {
		QLabel *lbl = new QLabel(); {
			lbl->setPixmap(logo);
			lbl->setAlignment(Qt::AlignCenter);
		} lay.addWidget(lbl);


		lbl = new QLabel(); {
			lbl->setText(str);
			lbl->setAlignment(Qt::AlignCenter);
		} lay.addWidget(lbl);

		this->setLayout(&this->lay);
    }

private:
	QVBoxLayout lay;
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
