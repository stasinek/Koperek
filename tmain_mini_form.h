#ifndef TMAIN_MINI_FORM_H
#define TMAIN_MINI_FORM_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class TMain_mini_form;
}

class TMain_mini_form : public QDialog
{
    Q_OBJECT
public:
    explicit TMain_mini_form(QWidget *parent = 0);
    ~TMain_mini_form();
    Ui::TMain_mini_form *ui;

private slots:
    void on_toolButton_2_clicked(bool checked);
    void on_toolButton_3_clicked();
    void on_toolButton_MENU_clicked();

private:
    void showEvent(QShowEvent *e);
    void hideEvent(QHideEvent *e);
};

#endif // TMain_mINI_FORM_H
