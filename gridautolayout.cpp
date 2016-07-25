#include "gridautolayout.h"

GridAutoLayout::GridAutoLayout(QWidget *parent) : QWidget(parent) {
    this->setLayout(&this->grid);
}

GridAutoLayout::~GridAutoLayout() {
    while(this->items.empty())
        delete this->items.takeFirst();
}

#include <QLabel>
void GridAutoLayout::addItem(QString lbl, QPixmap logo) {
    this->items.push_back(new GridAutoItem(lbl, logo));
    this->grid.addWidget(this->items.last());
}
