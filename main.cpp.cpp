#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
double a, b, x, y, k;
cin >> x >> y ;
    if (fabs(y)>=0 && fabs(y)<=1)
        k = fabs(x);
    if (fabs(y)>1)
        {
        a = fabs(x);
        b = fabs(y)-1;
        k = sqrt(a*a+b*b);
        }
    if (fabs(y)<0)
        {
        a = fabs(x);
        b = fabs(y);
        k = sqrt(a*a+b*b);
        }
cout << k;
}

