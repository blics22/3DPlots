#include <QApplication>
#include <QtDataVisualization/Q3DBars>
#include <QWidget>
#include <QMainWindow>

using namespace QtDataVisualization;

int main(int argc, char** argv)
{
  QGuiApplication app(argc, argv);
  
  Q3DBars bars;
  bars.setFlags(bars.flags() ^ Qt::FramelessWindowHint);
  bars.show();
  
  /*
  https://code.qt.io/cgit/qt/qtdatavis3d.git/tree/examples/datavisualization/bars?h=5.15
  
  //! [0]
    QApplication app(argc, argv);
    Q3DBars *widgetgraph = new Q3DBars();
    QWidget *container = QWidget::createWindowContainer(widgetgraph);
    //! [0]

    if (!widgetgraph->hasContext()) {
        QMessageBox msgBox;
        msgBox.setText("Couldn't initialize the OpenGL context.");
        msgBox.exec();
        return -1;
    }
  */
  return 0;
}
