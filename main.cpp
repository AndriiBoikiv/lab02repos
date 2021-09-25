// Lab_02.cpp
// Бойків Андрій.
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x; //вхідний параметр
    double z1; //результат виконання 1-ого виразу
    double z2; //результат виконання 2-ого виразу
    
    double Pi = 4 * atan(1.);

    cout << "x = "; cin >> x; //приймаємо значення параметру x від користувача
    cout << endl;

    z1 = cos(x) + sin(x) + cos(3*x) + sin(3*x); //обчислюємо результат виконання 1-ого виразу
    z2 = 2 * sqrt(2) * cos(x) * sin(Pi/4 +2*x); //обчислюємо результат виконання 2-ого виразу

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}