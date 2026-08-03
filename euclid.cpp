#include<iostream>
#include<climits>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
void findXY(long long a, long long b, long long &x, long long &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return;
    }
    long long x1, y1;
    findXY(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
}
int main() {
    long long a,b,x,y;
    cin>>a>>b;
    int d=gcd(a,b);
    findXY(a,b,x,y);
    cout<<x<<" "<<y<<" "<<d<<endl;
    return 0;
}
