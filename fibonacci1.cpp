#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

long double fibonacci(int n)
{
    if(n < 2)
        return n;
    else
        return (fibonacci(n - 1)+fibonacci(n - 2));
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
    float t = (finish - start)/CLOCKS_PER_SEC;
    cout<<"timpul de rulare = "<<setprecision(10)<<t/1000.0<<" milisecunde"<<endl<<endl;

    return 1;
}
