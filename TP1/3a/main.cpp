#include <iostream>

using namespace std;

int main()
{

    float kph,mPorS;
    cout<<"Ingrese el valor de Kilometros por hora"<<endl;
    cin>>kph;
    mPorS=kph/3.6;
    cout<<"La velocidad en metros por segundo es de : "<<mPorS<<endl;

    return 0;
}
