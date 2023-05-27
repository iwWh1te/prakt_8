#include <QTWidgets>

class MainWindow : public QMainWindow{
	public:
		MainWindow();
	private:
	QLabel *textLabel;
	QPushButton *startButton;
	};
		
MainWindow::MainWindow(){
	resize(900,500);
	setWindowTitle("MainWin v8.1");
	QFont buttonFont("Time", 20, QFont::Bold);
	textLabel = new QLabel(this);
	textLabel->setGeometry(50,100,350,120);
	textLabel->setText("QLabel test");
	textLabel->setFont(QFont("Time",48,QFont::Bold));
	startButton = new QPushButton("Start",this);
	startButton->setGeometry(50,220,70,30);
	startButton->setFont(buttonFont);
	
	}

int main(int argc,char *argv[]){
	QApplication app(argc,argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
}
