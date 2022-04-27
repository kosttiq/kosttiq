#include <iostream>

using namespace std;
struct fract             //drob = fract
{
    int chisl;       
    int znam;       
};
void socr(fract* a)  
{
    for (int i = a->chisl; i > 0; i--) 
    {
    if ((a->chisl % i == 0) and (a->znam % i == 0))
      {
        a->chisl = a->chisl/i; 
        a->znam = a->znam/i; 
      }
    }
}
void sort(int x, int y[]){
    int c;
    for ( int i = 0; i < x; i++)
    {
    for (int j = 0; j < x; j++)
      {
        if (y[j]>y[j+1])
          {
            c = y[j];
            y[j] = y[j+1];
            y[j+1] = c;
          }
      }
    }
    for ( int i = 0; i < x; i++)
      cout << y[i] << " ";
}
int main()
    {   
    fract u;
    u.chisl = 2;
    u.znam = 4;
    socr(&u);
    cout << u.chisl << "/" << u.znam << endl;
    int n;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
      cout << "Enter the array:" << " ";
      cin >> a[i];
    }
    sort(n,a);
    return 0;
}
