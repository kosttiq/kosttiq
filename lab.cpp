
#include <iostream>
using namespace std;
int chet(int k){ //Ф-я, определяющая чётность числа.
if (k % 2 == 0)
return k;
else return 0;
}
int fibo(int p) { //Ф-я, определяющая, входит ли число входит в ряд Фибоначчи.
int fib1 = 0;
int fib2 = 1;
int fib_sum;
while (fib2 <= p) {
fib_sum = fib1 + fib2;
fib1 = fib2;
fib2 = fib_sum;
if (p == fib_sum) 
return p;
}
return 0; 
}
int main() {
string s;
int m,max = 0;
int min = 0;
int i = 0; //счётчик при чётности
int j = 0; //счётчик при наименьшего
int k = 0; //счётчик наименьших
int sum_f = 0;
do {
cin » s;
m = stoi(s);
if (j == 0) { //присваиваем минимальному значению первое число
min = m;
j = 1;
}
else {
if (m == min) //считаем кол-во минимумов
k = k + 1;
else {
if (m < min){ //изменяем минимум и обнуляем счётчик
min = m;
k = 0;
}
}
}
if ( chet(m) != 0 and i != 1 ) { //присваиваем значение максимум первому чётному числу
max = chet(m);
i = 1;
}
else {
if (chet(m) != 0)
if (chet(m) > max) //изменяем максимум
max = chet(m);
}
sum_f = sum_f + fibo(m); //сумма Фибоначчи
} while ( s != "0");
cout « "Максимальное среди четных: " « max « endl;
cout « "Кол-во равных минимальному: " « k « endl;
cout « "Сумма чисел Фибоначчи: " « sum_f « endl;
return 0;
}
