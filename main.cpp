#include <QTWidgets>
class MainWindow : public QMainWindow{
	public:
		MainWindow();
	private:
	QLabel *textLabel;
};		
MainWindow::MainWindow(){
	resize(900,500);
	setWindowTitle("MainWin v8.1");
	textLabel = new QLabel(this);
	textLabel->setGeometry(50,100,350,120);
	textLabel->setText("QLabel test");
	textLabel->setFont(QFont("Courier",32,QFont::Bold));
	}
int main(int argc,char *argv[]){
	QApplication app(argc,argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
}
