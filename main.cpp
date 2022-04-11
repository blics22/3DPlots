#include <QApplication>
#include <QtDataVisualization/Q3DBars>
#include <QWidget>
#include <QMainWindow>

using namespace QtDataVisualization;

int main(int argc, char** argv)
{
  
  /*
  
  Use this to check if you have a GL context
  
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
  
    QGuiApplication app(argc, argv);

	//Sample code to create a single line bar graph
    Q3DBars bars;
    bars.setFlags(bars.flags() ^ Qt::FramelessWindowHint);
    bars.rowAxis()->setRange(0, 4);
    bars.columnAxis()->setRange(0, 4);
    QBar3DSeries *series = new QBar3DSeries;
    QBarDataRow *data = new QBarDataRow;
    *data << 1.0f << 3.0f << 7.5f << 5.0f << 2.2f;
    series->dataProxy()->addRow(data);
    bars.addSeries(series);
    bars.show();


  return app.exec();
}
