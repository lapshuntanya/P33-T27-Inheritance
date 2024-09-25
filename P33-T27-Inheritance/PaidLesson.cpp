#include "PaidLesson.h"

PaidLesson::PaidLesson(){
     //Lesson();
    price = 0;
    cout << "PaidLesson()\n";
}

PaidLesson::PaidLesson(string theme, string info, string home, float price)
    :Lesson(theme, info, home)
{
    //Lesson();
   /* this->theme = theme;
    this->info = info;
    setHome(home);*/

    this->price = price;
    cout << "PaidLesson(t, i, h, p)\n";
}

PaidLesson::~PaidLesson(){
    cout << "~PaidLesson() => " << theme << endl;
}

void PaidLesson::setPrice(float price){
    this->price = price;
}

float PaidLesson::getPrice() const
{
    return price;
}

void PaidLesson::showInfo() const{
    Lesson::showInfo(); // theme, info, home
    cout << "Price: " << price << "UAH\n\n";
}
