#ifndef TSUMMARY_FORM_H
#define TSUMMARY_FORM_H

#include "ui_tfinished_form.h"

class TFinished_form : public QDialog, private Ui::TFinished_form
{
    Q_OBJECT

public:
    explicit TFinished_form(QWidget *parent = 0);
};

#endif // TSUMMARY_FORM_H
