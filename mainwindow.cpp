#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QTimer>


QString type = "";
QString ingriedient = "";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this,SLOT(showTime()));
    timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showTime(){
    QFile file("Data.txt");

    QString line;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){

            line.append(stream.readLine());
        }

        float curentWeightInGrams = line.toInt();

        if(ingriedient == "All Purpose flour (dip and sweet method)"){
            const float UsCup = 145;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "AP flour (spooned into the cup)"){
            const float UsCup = 121;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "AP flour (sifted, then measured)"){
            const float UsCup = 114;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "bread flour (dip and sweep)"){
            const float UsCup = 157;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "bread flour (spooned into the cup)"){
            const float UsCup = 130;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "bread flour (sifted, then measured)"){
            const float UsCup = 121;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "cake flour (dip and sweep method)"){
            const float UsCup = 130;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "cake flour (spooned into the cup)"){
            const float UsCup = 114;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "cake flour (sifted, then measured)"){
            const float UsCup = 100;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "whole wheat flour (dip and sweep)"){
            const float UsCup = 144;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "whole wheat flour (sifted, then measured)"){
            const float UsCup = 125;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "cornmeal (dip and sweep)"){
            const float UsCup = 128;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "cornstarch (lightly spooned or sifted)"){
            const float UsCup = 120;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "butter"){
            const float UsCup = 227;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "clarified butter"){
            const float UsCup = 195;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "vegetable shortening"){
            const float UsCup = 191;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "vegetable oil"){
            const float UsCup = 218;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "canola oil"){
            const float UsCup = 215;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "safflower"){
            const float UsCup = 215;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "heavy cream"){
            const float UsCup = 232;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "sour cream"){
            const float UsCup = 242;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "full-fat yogurt"){
            const float UsCup = 243;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "buttermilk"){
            const float UsCup = 242;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "whole milk"){
            const float UsCup = 242;
            display_US_measurements(curentWeightInGrams, UsCup);
        }


        if(ingriedient == "half and half"){
            const float UsCup = 242;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "crème fraiche"){
            const float UsCup = 232;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "mascarpone"){
            const float UsCup = 250;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "water"){
            const float UsCup = 236;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "granulated sugar"){
            const float UsCup = 200;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "dark brown sugar (packed)"){
            const float UsCup = 239;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "light brown sugar (packed)"){
            const float UsCup = 217;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "powdered sugar (dip and sweep)"){
            const float UsCup = 115;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "honey"){
            const float UsCup = 336;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "molasses"){
            const float UsCup = 322;
            display_US_measurements(curentWeightInGrams, UsCup);
        }

        if(ingriedient == "corn syrup"){
            const float UsCup = 328;
            display_US_measurements(curentWeightInGrams, UsCup);
        }


    }
    file.close();

}



void MainWindow::display_US_measurements(float Grams, float UsCup){
    if(type == "US"){

        float Ounce = Grams*0.035274;
        float USPound = Ounce*16;

        float UsCups = Grams/(UsCup);
        float Sticks_of_butter = UsCups*2;
        float Tablespoons = UsCups*16;
        float Teaspoons = Tablespoons*3;

        ui->label_1->setText(QString::number(Grams, 'f', 2));
        ui->label_2->setText(QString::number(Ounce, 'f', 2));
        ui->label_3->setText(QString::number(USPound, 'f', 2));
        ui->label_4->setText(QString::number(UsCups, 'f', 2));
        ui->label_5->setText(QString::number(Sticks_of_butter, 'f', 2));
        ui->label_6->setText(QString::number(Tablespoons, 'f', 2));
        ui->label_7->setText(QString::number(Teaspoons, 'f', 2));


        ui->label_1_1->setText("Grams");
        ui->label_2_2->setText("Ounces");
        ui->label_3_3->setText("Us Pounds");
        ui->label_4_4->setText("US Cup");
        ui->label_5_5->setText("sticks of butter");
        ui->label_6_6->setText("Tablespoons");
        ui->label_7_7->setText("Teaspoons");
    }
    if(type == "Imperial"){

        float ImperialCups = Grams/(UsCup*0.8326716);
        float Sticks_of_butter = ImperialCups*2;
        float Tablespoons = ImperialCups*16;
        float Teaspoons = Tablespoons*3;

        ui->label_1->setText(QString::number(Grams, 'f', 2));
        ui->label_2->setText(QString::number(ImperialCups, 'f', 2));
        ui->label_3->setText(QString::number(Sticks_of_butter, 'f', 2));
        ui->label_4->setText(QString::number(Tablespoons, 'f', 2));
        ui->label_5->setText(QString::number(Teaspoons, 'f', 2));
        ui->label_6->setText("");
        ui->label_7->setText("");


        ui->label_1_1->setText("Grams");
        ui->label_2_2->setText("ImperialCups");
        ui->label_3_3->setText("Sticks of butter");
        ui->label_4_4->setText("Tablespoons");
        ui->label_5_5->setText("Teaspoons");
        ui->label_6_6->setText("");
        ui->label_7_7->setText("");
    }
}


void MainWindow::on_comboBoxMeasurementType_textActivated(const QString &arg1)
{
    type = arg1;
}


void MainWindow::on_comboBoxIngridient_textActivated(const QString &arg1)
{
    ingriedient = arg1;
}

