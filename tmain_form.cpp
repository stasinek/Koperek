/*Koperek32(R) Copyright (c) Stanislaw Stasiak, sstoft@wp.pl  <2014>
 *  All rights reserved.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
Permission is granted to anyone use this software for any purpose, including commercial application, and to alter it, and may be redistributed freely, in subject to the following restrictions:
    1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software.
2. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
3. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
4. This notice may not be removed or altered from any source distribution.
*/

#include "tmain_form.h"
#include "ui_tmain_form.h"
#include "../Kop32/kop32_main.h"

TMain_form::TMain_form(QWidget *a_parent) :
    QDialog(a_parent),
    ui(new Ui::TMain_form)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    QStringList Header;
                Header << "Path";
                Header << "Name";
                Header << "Size";
    ui->tableWidget->setHorizontalHeaderLabels(Header);
    ui->tableWidget->setAlternatingRowColors(true);
    //ui->Animation_graphicsView->setScene(Application->FileAnimationScene);
    //ui->Chart_graphicsView->setScene(Application->FileChartScene);
    ui->Animation_graphicsView->setVisible(0);
//    QWidget *p = ui->Animation_graphicsView->parentWidget();
//    while (p) {
//           p->adjustSize();
//           p = parent->parentWidget();
//    }
    ui->toolButton_F->click();
    //ui->verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
}

TMain_form::~TMain_form()
{
    delete ui;
}

/*
bool TMain_form::nativeEvent(const QByteArray& eventType, void* message, long* result)
{
    return QWidget::nativeEvent(eventType,message,result);

    MSG *msg = reinterpret_cast<MSG*>(message);
    switch (msg->message)
    {
    case WM_NCLBUTTONDOWN:
            //return false;
        break;
    default:
        break;
    }
    *result = 0;
    return QWidget::nativeEvent(eventType,message,result);
}

*/
void TMain_form::on_toolButton_F_clicked(bool checked)
{
    //ui->verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
    if  (checked) ui->widget_5->setVisible(1);
    else ui->widget_5->setVisible(0);
    QWidget *p = ui->widget_5->parentWidget();
    while (p) {
           p->adjustSize();
           p = p->parentWidget();
    }
}

void TMain_form::on_tableWidget_2_cellChanged(int row, int column)
{
    ui->stackedWidget->setCurrentIndex(row);
}

void TMain_form::on_progressBar_1_valueChanged(int value)
{
}

void TMain_form::on_progressBar_2_valueChanged(int value)
{
}

void TMain_form::on_toolButton_2_clicked(bool checked)
{
}
void TMain_form::on_toolButton_3_clicked()
{
    Application->Finished = true;
    reject();
}

void TMain_form::on_toolButton_MENU_clicked()
{
    Application->Menu->exec( QWidget::mapToGlobal(ui->toolButton_MENU->pos()+QPoint(ui->toolButton_MENU->width(),0)));
}
void TMain_form::showEvent(QShowEvent *e)
{
    //static int first = 0;
    Application->MenuActions_SwitchToMainWindow->setEnabled(0);
    Application->MenuActions_SwitchToMiniWindow->setEnabled(1);
    Application->MenuActions_SwitchToConsoleWindow->setEnabled(1);
    QDialog::showEvent(e);
    //if (!first);
    //first = 1;

}
void TMain_form::hideEvent(QHideEvent *e)
{
if (Application->Finished) Application->closeAllWindows();
}
