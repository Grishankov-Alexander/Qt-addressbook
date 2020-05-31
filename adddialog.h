#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QTextEdit;
class QLabel;
class QPushButton;
QT_END_NAMESPACE

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    AddDialog(QWidget *parent = nullptr);
    QLineEdit *nameText;
    QTextEdit *addressText;

private:
    QLabel *nameLabel;
    QLabel *addressLabel;
    QPushButton *okButton;
    QPushButton *cancelButton;
};

#endif // ADDDIALOG_H
