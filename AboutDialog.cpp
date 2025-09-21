#include "AboutDialog.h"

AboutDialog::AboutDialog(QWidget *parent) : QDialog(parent) {
    QLabel *infoLabel = new QLabel("姓名：郭灿辉\n学号：2023414290307", this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(infoLabel);
    setWindowTitle("关于");
    setFixedSize(200, 100);
}
