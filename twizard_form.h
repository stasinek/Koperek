#ifndef TWIZARD_FORM_H
#define TWIZARD_FORM_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class TWizard_form;
}

class TWizard_form : public QDialog
{
    Q_OBJECT
public:
    explicit TWizard_form(QWidget *parent = 0);
    ~TWizard_form();
private slots:
    void on_pushButton_clicked();
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::TWizard_form *ui;
    virtual void showEvent(QHideEvent *e);
    virtual void hideEvent(QHideEvent *e);
public slots:
};

#endif // TWIZARD_FORM_H
