#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = 0);
    ~about();

private slots:
    void on_buttonBox_clicked();

private:
    Ui::about *ui;
};

#endif // ABOUT_H
