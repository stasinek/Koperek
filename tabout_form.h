#ifndef TABOUT_FORM_H
#define TABOUT_FORM_H

#include <QDialog>
#include <QPushButton>
#include <QEvent>
#include <QCloseEvent>

namespace Ui {
class TAbout_form;
}

class TAbout_form : public QDialog
{
    Q_OBJECT

public:
    explicit TAbout_form(QWidget *parent = 0);
    ~TAbout_form();

private slots:
    void on_checkBox_toggled(bool checked);
    void showEvent(QShowEvent *e);
    void closeEvent(QCloseEvent *e);
    void on_buttonBox_clicked(QAbstractButton *button);
private:
    Ui::TAbout_form *ui;
    bool ok;
};

#endif // TABOUT_FORM_H
