#include <iostream>
using namespace std;
int chet(int k){     //Ф-я, определяющая чётность числа.
  if (k % 2 == 0)
    return k;
  else 
    return 0;
}
int fibo(int p) {   //Ф-я, определяющая, входит ли число входит в ряд Фибоначчи.
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
int test_chet(){  //Ф-я проверки для функции chet()
  int chetnoe = 4;
  int ne_chetnoe = 27;
  if ( chet(chetnoe) == chetnoe and chet(ne_chetnoe) == 0)
    return 0;
  else 
    return 1;
}
int test_fibo() {  //Ф-я проверки для функции fibo()
  int chislo_fib = 13;
  int chislo_ne_fib = 9;
  if (fibo(chislo_fib) == chislo_fib and fibo(chislo_ne_fib) == 0)
    return 0;
  else 
    return 1; 
}
int main() {
  string s;
  int m,max = 0;
  int min = 0;
  int i = 0;  //счётчик при определение первого чётного числа
  int j = 0;  //счётчик при определение минимального
  int k = 1;  //счётчик кол-во минимального
  int sum_f = 0;
  cin >> s;
  while (s != "0") {
    m = stoi(s);
    if (j == 0) {  //присваиваем минимальному значению первое число
      min = m;
      j = 1;
    }
    else {
      if (m == min)  //считаем кол-во минимумов
        k = k + 1;
      else {
        if (m < min) {  //изменяем минимум и обнуляем счётчик
          min = m;
          k = 1;
        }
      }
    }
    if (chet(m) != 0 and i != 1 ) {  //присваиваем значение максимум первому чётному числу
      max = chet(m);
      i = 1;
    }
    else {
      if (chet(m) != 0) 
        if (chet(m) > max)  //изменяем максимум
          max = chet(m);
    }
    sum_f = sum_f + fibo(m);
    cin >> s;
  } 
    cout << "Максимум среди четных - " << max << endl;
    cout << "Кол-во наименьших чисел - " << k << endl;
    cout << "Сумма чисел Фибоначчи - " << sum_f << endl;
    return test_fibo();
    return test_chet();
  }
