#include <iostream>
using namespace std;
int chet(int k){
  if (k % 2 == 0)
    return k;
  else 
    return 0;
}
int fibo(int p) {
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
int test_chet(){
  int chetnoe = 4;
  int ne_chetnoe = 27;
  if ( chet(chetnoe) == chetnoe and chet(ne_chetnoe) == 0)
    return 0;
  else 
    return 1;
}
int test_fibo() {
  int chislo_fib = 13;
  int chislo_ne_fib = 9;
  if (fibo(chislo_fib) == chislo_fib and fibo(chislo_ne_fib) == 0)
    return 0;
  else 
    return 1; 
}
void kolvo_min( int *pm, int *pj, int *pmin, int *pk) {
    if ((*pj) == 0 ) {
      (*pmin) = (*pm);
      (*pj) = 1;
    }
    else {
        if ((*pm) == (*pmin))
          (*pk) = (*pk) + 1;
        else {
          if ((*pm) < (*pmin)) {
          (*pmin) = (*pm);
          (*pk) = 1;
        }
      }
    }
}
void max_chet (int *pm, int *pi, int *pmax) {
    int x;
    x = chet((*pm));
    if (x != 0 and (*pi) != 1 ) {
      (*pmax) = x;
      (*pi) = 1;
    }
    else {
      if (x != 0)
        if (x > (*pmax))
          (*pmax) = x;
    }
}
void sum_fib(int *psum_f, int *pm) {
    (*psum_f) = (*psum_f) + fibo((*pm));
}
int main() {
  string s;
  int m,max = 0;
  int min = 0;
  int i = 0;
  int j = 0;
  int k = 1;
  int sum_f = 0;
  cin >> s;
  while (s != "0") {
    m = stoi(s);
    kolvo_min(&m, &j, &min, &k);
    max_chet(&m, &i, &max);
    sum_fib(&sum_f, &m);
    cin >> s;
  } 
    cout << "Максимум среди четных - " << max << endl;
    cout << "Кол-во наименьших чисел - " << k << endl;
    cout << "Сумма чисел Фибоначчи - " << sum_f << endl;
    return test_fibo();
    return test_chet();
  }
