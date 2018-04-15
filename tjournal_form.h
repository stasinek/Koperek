/*Koperek32(R) Copyright (c) Stanislaw Stasiak, sstoft@wp.pl  <2014> All rights reserved.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
Permission is granted to anyone use this software for any purpose, including commercial application, and to alter it, and may be redistributed freely, in subject to the following restrictions:
	1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software.
2. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
3. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
4. This notice may not be removed or altered from any source distribution.
*/

#ifndef TJOURNAL_FORM_H
#define TJOURNAL_FORM_H
#include <QDialog>
#include <QtWidgets/QButtonGroup>

namespace Ui {
	class TJournal_form;
}

class TJournal_form : public QDialog
{
	Q_OBJECT
public:
	explicit TJournal_form(QWidget *parent = 0);
	~TJournal_form();
	Ui::TJournal_form *ui;
private slots:
void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // TJOURNAL_FORM_H
