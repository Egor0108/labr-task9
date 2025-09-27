#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double  a, b, x, z, y, f;
    int choice;
    cout << "Введиет чему равны a, b, x, z, choice( f:1 соответствует 2*x; 2 соответствует x*x*x; 3 соответствует x/3): ";
    cin >>a>>b>>x>>z>>choice;
    if (z>0) {x=1/(z*z+2*z);}
    else if (z<=0) {x=1-z*z*z;}
    switch (choice)
    {
    case 1:
    f=2*x;
    cout <<"Выбрана функция 2*x";
       break;
    case 2:
    f=x*x*x;
    cout <<"Выбрана функция x*x*x";
    break;
    case 3:
    f=x/3;
    break;
    default:
    cout << "Неверно выбраное f; ";
        break;
    }
    y=(2.5*a*exp(-3*x)-4*b*x*x)/(log(fabs(x))+f);
    cout << "Ответ: "<<y;
    return 0;
}