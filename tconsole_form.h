#ifndef TCONSOLE_FORM_H
#define TCONSOLE_FORM_H

#include <QDialog>

namespace Ui {
class TConsole_form;
}

class TConsole_form : public QDialog
{
    Q_OBJECT
public:
    Ui::TConsole_form *ui;
    explicit TConsole_form(QWidget *parent = 0);
    ~TConsole_form();
private slots:
    void on_toolButton_2_clicked(bool checked);
    void on_toolButton_3_clicked();
    void on_toolButton_MENU_clicked();
private:
    virtual void showEvent(QShowEvent *e);
    virtual void hideEvent(QHideEvent *e);

};

#endif // TCONSOLE_FORM_H
