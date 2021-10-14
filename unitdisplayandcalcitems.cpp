#include "unitdisplayandcalcitems.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
unitDisplayAndCalcItems::unitDisplayAndCalcItems()
{
    const float Ounces = 0.035274;
    const float UsCup = 236.59;
    const float ImperialCup = 284.13;
    const float MetricCup = 250;
    const float Tablespoon = 14.79;
    const float Teaspoon = 4.93;

    ui->labelGram->setText(QString::number(x, 'f', 2) + " Grams (g)");
    ui->labelOnz->setText(QString::number(x * Ounces, 'f', 2) + " Ounces");
    ui->labelUSCup->setText(QString::number(x/UsCup, 'f', 2) + " Us Cups");
    ui->labelImperialCup->setText(QString::number(x/ImperialCup, 'f', 2) + " Imperial Cup");
    ui->labelMetricCup->setText(QString::number(x/MetricCup, 'f', 2) + " Metric Cups");
    ui->labelTablespoon->setText(QString::number(x/Tablespoon, 'f', 2) + " Tablespoon");
    ui->labelTeaspoon->setText(QString::number(x/Teaspoon, 'f', 2) + " Teaspoon");
}
