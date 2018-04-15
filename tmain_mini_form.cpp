/*Koperek32(R) Copyright (c) Stanislaw Stasiak, sstoft@wp.pl  <2014> All rights reserved.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
Permission is granted to anyone use this software for any purpose, including commercial application, and to alter it, and may be redistributed freely, in subject to the following restrictions:
    1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software.
2. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
3. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
4. This notice may not be removed or altered from any source distribution.
*/

#include "tmain_mini_form.h"
#include "ui_tmain_mini_form.h"
#include "../Kop32/kop32_main.h"

TMain_mini_form::TMain_mini_form(QWidget *a_parent) :
    QDialog(a_parent),
    ui(new Ui::TMain_mini_form)
{
    ui->setupUi(this);
//    ui->Animation_graphicsView->setScene(Application->FileAnimationScene);
    ui->Animation_graphicsView->setVisible(0);
    QWidget *p = ui->Animation_graphicsView->parentWidget();
    while (p) {
           p->adjustSize();
           p = a_parent->parentWidget();
    }

}

TMain_mini_form::~TMain_mini_form()
{
    delete ui;
}


void TMain_mini_form::on_toolButton_2_clicked(bool checked)
{
}

void TMain_mini_form::on_toolButton_3_clicked()
{
    Application->Finished = true;
    reject();
}
void TMain_mini_form::on_toolButton_MENU_clicked()
{
    Application->Menu->exec( QWidget::mapToGlobal(ui->toolButton_MENU->pos()+QPoint(ui->toolButton_MENU->width(),0)));
}

void TMain_mini_form::showEvent(QShowEvent *e)
{
    Application->MenuActions_SwitchToMainWindow->setEnabled(1);
    Application->MenuActions_SwitchToMiniWindow->setEnabled(0);
    Application->MenuActions_SwitchToConsoleWindow->setEnabled(1);
    QDialog::showEvent(e);
}
void TMain_mini_form::hideEvent(QHideEvent *e)
{
if (Application->Finished) Application->closeAllWindows();
}
