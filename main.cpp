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
  
  return 0;
}
