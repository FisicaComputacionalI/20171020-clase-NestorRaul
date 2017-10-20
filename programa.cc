#include <iostream> 
using namespace std; 

int main(){
 int N=0; //inicia el contador desde cero
 cout <<"Dame un numero entero"<< endl;cin>>N; // El programa pide un numero para comenzar a trabajar
 int M=1; // M es el contador, tiene que alcanzar a N
 int F=1; // Servira para multiplicar el numero inicial y el posterior, generando un nuevo numero, en pocas palabas, es quien tomara el lugar del factorial
 while (M!=N){M=M+1; F=F*M;} cout <<"Valor final"<<F<<endl;//Esta es la parte que realiza el ciclo y contiene el contador para detener el programa, al finalizar, regresa el factorial del numero N inicial
 return 0;
}
