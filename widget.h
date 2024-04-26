#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QStringList listFile;

private:
    void initForm();
    bool checkFile(const QString &fileName);
    void NumberOfCodes(const QString &filePath);
    void NumberOfCodes(const QStringList &files);
    void NumberOfCodes(const QString &fileName, int &lineCode, int &lineBlank, int &lineNotes);


private slots:
    void on_btnOpenFile_clicked();
    void on_btnOpenPath_clicked();
    void on_btnClear_clicked();

};
#endif // WIDGET_H
