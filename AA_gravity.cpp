#include <iostream>
using namespace std;


//Se inicializan los valores de G y M;
int G= 10;
int M = 1000;

//Se inicializan los punts x y y, que reciben como parametro x y v.
double px(double x, double v);
double py(double x, double v);

//Se inicializa el main
int main(){

//Se incian x y v, se determina dt como x/max.
int x = 100;
int v = 0;
double dt = x/2000000;

//Se inicializa en tiempo cero, tal que la posicion final sea el 1% de x.
int t=0;
double xfinal= 0.01*x;

//Se inicializan los valores de x y v con runge-kutta.
double x1, x2, x3, x4, v1, v2, v3, v4;

int max=2000000;

//Ecuaciones de segundo orden.
int i=0;
while(i<max && x>xfinal){
x1=px(x,v);
v1=py(x,v);
x2=px(x+x1*dt/2, v+v1*dt/2);
v2=py(x+x1*dt/2, v+v1*dt/2);
x3=px(x+x2*dt/2, v+v2*dt/2);
v3=py(x+x2*dt/2, v+v2*dt/2);
x4=px(x+x3*dt/2, v+v3*dt/2);
v4=py(x+x3*dt/2, v+v3*dt/2);

t+=dt;
x+=dt*(x1+(2*x2)+(2*x3)+x4)/6;
v+=dt*(v1+(2*v2)+(2*v3)+v4)/6;

cout<<x<<" "<<v<<" "<<t<<" "<<"\n";
i=i+1;
}

return 0;
}
//Resultado de la funcion derivada de x.
double px(double x, double v){
return v;
}
//Resultado de la funcion derivada de v.
double py(double x, double v){
return -M*G)/(x*x);         
}
