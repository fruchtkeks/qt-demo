#include <QApplication>
#include <QPushButton>

int main(int _argc, char** _argv)
{
    QApplication app(_argc, _argv);

    QPushButton button("Hello World!");
    button.show();

    return app.exec();
}
