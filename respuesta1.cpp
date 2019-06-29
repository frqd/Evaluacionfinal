#include <iostream>
#include "console.h"
#include <string>
#include <map.h>
#include <math.h>
#define PI 3.1416
using namespace std;

class Punto{
  	public:
    Punto(double e, double f){
       x = e;
       y = f;
    }
        int cuadrante(){
            int aux = 0;
            if(x > 0 && y < 0){
                 aux = 4;
            }
            if(x > 0 && y > 0){
                 aux = 1;
            }
            if(x < 0 && y > 0){
                 aux = 2;
            }
            if(x < 0 && y < 0){
                 aux = 3;
            }
            return aux;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double tita(){
            double  m = 0;
            double  angulo = 0;
            m = y/x;
            angulo = atan(m)*180/PI;
            return angulo;
        }
        string toString(){
            string e, f;
            double aux1;
            double aux2;
            aux1 = x;
            aux2 = y;
            e = to_string(aux1);
            f = to_string(aux2);
            return "(" + e + "," + f + ")";
        }
    private:
        double x;
        double y;
};

int main() {
    Punto a1(1,1);
    cout << "La Abcisa: "<< a1.getX() << endl;
    cout << "La Ordenada: "<< a1.getY() << endl;
    cout << "El Cuadrante donde se encuetra es : "<< a1.cuadrante() << endl;
    cout << "El angulo entre la abcisa positiva y la linea positiva : "<< a1.tita() << endl;
    cout << "El Punto es : "<< a1.toString() << endl;




return 0;
}
