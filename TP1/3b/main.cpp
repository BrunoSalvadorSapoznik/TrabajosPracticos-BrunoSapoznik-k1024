#include <iostream>

using namespace std;

int main()
{
    float m1,m2,b1,b2,interseccionEnX,interseccionEnY;
    cout <<"ingrese la pendiente de la primer funcion" << endl;
    cin>>m1;
    cout<<"ingrese el termino independiente de la primer funcion"<<endl;
    cin>>b1;
    cout<<"ingrese la segunda pendiente"<<endl;
    cin>>m2;
    cout<<"ingrese el termino independiente de la segunda pendiente"<<endl;
    cin>>b2;

    if(!(m1==m2)){
        interseccionEnX= (b2-b1)/(m1-m2);
        interseccionEnY=m1*interseccionEnX+b1;
          cout<<"Las rectas se intersectan en la abscisa: "<<interseccionEnX<<" y la ordenada"<<interseccionEnY<<endl;
    }
         else{
             if(b1==b2){
                    cout<<"Las rectas son paralelas y se intersectan en todos los puntos pertencientes a la recta: "<<m1<<"x+"<<b1<<endl;
                     }
                  else{
                        cout<<"Las rectas son paralelas y no se cortan en ningún punto"<<endl;
                       }
    }
    ;

    return 0;
}
