#ifndef NEWADDRESSTAB_H
#define NEWADDRESSTAB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
class QVBoxLayout;
QT_END_NAMESPACE

class NewAddressTab : public QWidget
{
    Q_OBJECT
public:
    NewAddressTab(QWidget *parent = nullptr);

public slots:
    void addEntry();

signals:
    void sendDetails(QString name, QString address);

private:
    QLabel *descriptionLabel;
    QPushButton *addButton;
    QVBoxLayout *mainLayout;
};

#endif // NEWADDRESSTAB_H
