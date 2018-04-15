#ifndef TRENAME_FORM_H
#define TRENAME_FORM_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class TReplace_rename_form;
}

class TReplace_rename_form : public QDialog
{
    Q_OBJECT

public:
    explicit TReplace_rename_form(QWidget *parent = 0);
    ~TReplace_rename_form();

private:
    Ui::TReplace_rename_form *ui;
};

#endif // TRENAME_FORM_H
