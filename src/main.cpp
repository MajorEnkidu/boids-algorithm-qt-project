#include <QTextStream>

int main() {
    QTextStream(stdout) << "Hello, world!" << Qt::endl;
    return 0;
}