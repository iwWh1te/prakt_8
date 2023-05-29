#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class MainWindow : public QMainWindow {
public:
    MainWindow();
    void startButtonClick();
    void stopButtonClick();
    void pauseButtonClick();
    void road1ButtonClick();
    void road2ButtonClick();

private:
    QLabel *textLabel;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *pauseButton;
    QPushButton *road1Button;
    QPushButton *road2Button;
};

MainWindow::MainWindow() {
    resize(900, 500);
    setWindowTitle("MainWin v8.1");
    QFont buttonFont("Time", 20, QFont::Bold);

    textLabel = new QLabel(this);
    textLabel->setGeometry(50, 100, 350, 120);
    textLabel->setText("QLabel test");
    textLabel->setFont(QFont("Time", 48, QFont::Bold));

    startButton = new QPushButton("Start", this);
    startButton->setGeometry(50, 220, 70, 30);
    startButton->setFont(buttonFont);

    stopButton = new QPushButton("Stop", this);
    stopButton->setGeometry(150, 220, 70, 30);
    stopButton->setFont(buttonFont);

    pauseButton = new QPushButton("Pause", this);
    pauseButton->setGeometry(200, 220, 70, 30);
    pauseButton->setFont(buttonFont);

    road1Button = new QPushButton("Road1", this);
    road1Button->setGeometry(300, 220, 70, 30);
    road1Button->setFont(buttonFont);

    road2Button = new QPushButton("Road2", this);
    road2Button->setGeometry(400, 220, 70, 30);
    road2Button->setFont(buttonFont);

    connect(startButton, &QPushButton::clicked, this, &MainWindow::startButtonClick);
    connect(stopButton, &QPushButton::clicked, this, &MainWindow::stopButtonClick);
    connect(pauseButton, &QPushButton::clicked, this, &MainWindow::pauseButtonClick);
    connect(road1Button, &QPushButton::clicked, this, &MainWindow::road1ButtonClick);
    connect(road2Button, &QPushButton::clicked, this, &MainWindow::road2ButtonClick);
}

void MainWindow::startButtonClick() {
    textLabel->setText("Start");
}

void MainWindow::stopButtonClick() {
    textLabel->setText("Stop");
}

void MainWindow::pauseButtonClick() {
    textLabel->setText("Pause");
}

void MainWindow::road1ButtonClick() {
    // Assign new values and update road properties
    // Example:
    int roadNumber = 1;
    int roadLength = 500;
    QString roadInfo = "Road " + QString::number(roadNumber) + ": Length " + QString::number(roadLength);
    textLabel->setText(roadInfo);
}

void MainWindow::road2ButtonClick() {
    // Assign new values and update road properties
    // Example:
    int roadNumber = 2;
    int roadLength = 1000;
    QString roadInfo = "Road " + QString::number(roadNumber) + ": Length " + QString::number(roadLength);
    textLabel->setText(roadInfo);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
