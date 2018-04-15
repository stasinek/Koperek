#ifndef TREPLACE_FORM_H
#define TREPLACE_FORM_H

#include <QDialog>
#include <QAbstractButton>


namespace Ui {
class TReplace_form;
}

class TReplace_form : public QDialog
{
    Q_OBJECT

public:
    explicit TReplace_form(QWidget *parent = 0);
    ~TReplace_form();
    bool Test;

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::TReplace_form *ui;
};

#endif // TREPLACE_FORM_H
