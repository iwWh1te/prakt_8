#include <QTWidgets>
class MainWindow : public QMainWindow{
	public:
		MainWindow();};
		
MainWindow::MainWindow(){
	resize(900,500);
setWindowTitle("MainWin v8.1");}

int main(int argc,char *argv[]){
	QApplication app(argc,argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
}
