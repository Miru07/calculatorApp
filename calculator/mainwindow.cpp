#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNr;
bool SecondNr_pressed = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Zero,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->One,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Two,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Three,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Four,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Five,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Six,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Seven,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Eight,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Nine,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->PlusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->Percentage,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->Clear,SIGNAL(released()),this,SLOT(on_Clear_released()));
    connect(ui->Equal,SIGNAL(released()),this,SLOT(on_Equal_released()));

    connect(ui->Plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Division,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->Plus->setCheckable(true);
    ui->Minus->setCheckable(true);
    ui->Multiply->setCheckable(true);
    ui->Division->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton*) sender();
    double labelNr;
    QString labelText;

    if((ui->Plus->isChecked()||ui->Minus->isChecked()||ui->Multiply->isChecked()||ui->Division->isChecked())&&(!SecondNr_pressed))
    {
        labelNr = button->text().toDouble();
        SecondNr_pressed = true;
        labelText = QString::number(labelNr,'g',15);
    }
    else
    {
        if(ui->label->text().contains(".")&&button->text()=="0")
        {
           labelText = ui->label->text()+ button->text();
        }
        else
        {
            labelNr = (ui->label->text()+ button->text()).toDouble();
            labelText = QString::number(labelNr,'g',15);
        }

    }



    ui->label->setText(labelText);
}

void MainWindow::on_Dot_released()
{
    ui->label->setText(ui->label->text()+".");
}

void MainWindow::unary_operation_pressed()
{
    QPushButton *button = (QPushButton*)sender();
    double labelNr;
    QString labelText;

    if(button->text()=="+/-")
    {
        labelNr = ui->label->text().toDouble();
        labelNr = labelNr*-1;
        labelText = QString::number(labelNr,'g',15);
        ui->label->setText(labelText);
    }
    else
    {
        labelNr = ui->label->text().toDouble();
        labelNr = labelNr*0.01;
        labelText = QString::number(labelNr,'g',15);
        ui->label->setText(labelText);
    }
}

void MainWindow::on_Clear_released()
{
    ui->Plus->setChecked(false);
    ui->Minus->setChecked(false);
    ui->Multiply->setChecked(false);
    ui->Division->setChecked(false);

    SecondNr_pressed = false;
    ui->label->setText("0");
}

void MainWindow::on_Equal_released()
{
    double labelNr, secondNr;
    QString newLabel;

    secondNr = ui->label->text().toDouble();
    if(ui->Plus->isChecked())
    {
        labelNr = firstNr + secondNr;
        newLabel = QString::number(labelNr,'g',15);
        ui->label->setText(newLabel);
        ui->Plus->setChecked(false);
    }
    else if(ui->Minus->isChecked())
    {
        labelNr = firstNr - secondNr;
        newLabel = QString::number(labelNr,'g',15);
        ui->label->setText(newLabel);
        ui->Minus->setChecked(false);
    }
    else if(ui->Multiply->isChecked())
    {
        labelNr = firstNr * secondNr;
        newLabel = QString::number(labelNr,'g',15);
        ui->label->setText(newLabel);
        ui->Multiply->setChecked(false);
    }
    else if(ui->Division->isChecked())
    {
        labelNr = firstNr / secondNr;
        newLabel = QString::number(labelNr,'g',15);
        ui->label->setText(newLabel);
        ui->Division->setChecked(false);
    }
    SecondNr_pressed = false;
}
void MainWindow::binary_operation_pressed()
{
    QPushButton *button = (QPushButton*)sender();

    firstNr = ui->label->text().toDouble();

    button->setChecked(true);
}
