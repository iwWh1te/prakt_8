#include <QTWidgets>
class MainWindow : public QMainWindow{
	public:
		MainWindow();
		void startButtonClick();
		void stopButtonClick();
	private:
	QLabel *textLabel;
	QPushButton *startButton;
	QPushButton *stopButton;
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
	stopButton = new QPushButton("Stop",this);
	stopButton->setGeometry(150,220,70,30);
	stopButton->setFont(buttonFont);
	connect (startButton, &QPushButton::clicked,this, &MainWindow::startButtonClick);
	connect (stopButton, &QPushButton::clicked,this, &MainWindow::stopButtonClick);}	
void MainWindow::startButtonClick(){
	textLabel->setText("Start");
}
void MainWindow::stopButtonClick(){
	textLabel->setText("Stop");
}
int main(int argc,char *argv[]){
	QApplication app(argc,argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
}
