#ifndef TSELECT_FORM_H
#define TSELECT_FORM_H

#include "ui_tselect_form.h"

class TSelect_form : public QDialog, private Ui::TSelect_form
{
    Q_OBJECT

public:
    explicit TSelect_form(QWidget *parent = 0);
};

#endif // TSELECT_FORM_H
