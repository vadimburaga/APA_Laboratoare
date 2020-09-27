#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;


long double fibonacci(int n)
{
    long double i = 1,j = 0,k = 0,h = 1,t;
    while(n > 0)
    {
        if(n%2 == 1)
        {
            t = j * h;
            j = i * h + j * k + t;
            i = i * k + t;
        }

        t = pow(h,2);
        h = 2 * k * h + t;
        k = pow(k,2) + t;
        n = n / 2;
    }
    return j;
}

int main()
{
    int valoarea[] = {10, 30, 50, 100, 1000, 10000};
    float start = clock();
    for(int i = 0;i < 6;i++)
    {
        cout<<"Pentru valoarea a numarului "<<valoarea[i]<<endl;
        cout<<"Metoda recursiva "<<fibonacci(valoarea[i])<<endl<<endl;
    }
    float finish = clock();
    float t = (finish-start)/CLOCKS_PER_SEC;
    cout<<"timpul de rulare = "<<setprecision(10)<<t/1000.0<<" milisecunde"<<endl<<endl;
    return 1;
}


