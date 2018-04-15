#ifndef TMAIN_FORM_H
#define TMAIN_FORM_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class TMain_form;
}

class TMain_form : public QDialog
{
    Q_OBJECT
public:
    explicit TMain_form(QWidget *parent = 0);
    ~TMain_form();
    Ui::TMain_form *ui;
private slots:
    void on_toolButton_F_clicked(bool checked);
    void on_tableWidget_2_cellChanged(int row, int column);

    void on_progressBar_1_valueChanged(int value);
    void on_progressBar_2_valueChanged(int value);

    void on_toolButton_2_clicked(bool checked);
    void on_toolButton_3_clicked();
    void on_toolButton_MENU_clicked();

private:
    virtual void showEvent(QShowEvent *e);
    virtual void hideEvent(QHideEvent *e);
    //    bool nativeEvent(const QByteArray& eventType, void* message, long* result);
};

#endif // TMAIN_FORM_H
