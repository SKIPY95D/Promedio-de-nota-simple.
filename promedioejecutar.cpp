//notas del 1 al 10. //se aprueba con 5.
#include <iostream>
using namespace std;
int main(){
int n1, n2, n3;
float promedio;
cout<<"digite la primera nota: ";
cin>>n1;
while (n1 < 1 or n1 > 10){
	cout<<"la nota es invalida: ";
	cout<<"ingresala de vuelta: ";
	cin>>n1;
}
cout<<"digite la segunda nota: ";
cin>>n2;
while (n2 < 1 or n2 > 10){
	cout<<"la nota es invalida: ";
	cout<<"ingresala de vuelta: ";
	cin>>n2;
}
cout<<"digite la tercera nota: ";
cin>>n3;
while (n3 < 1 or n3 > 10){
	cout<<"la nota es invalida: ";
	cout<<"ingresala de vuelta: ";
	cin>>n3;
}
system("cls"); // clear

promedio = (n1+n2+n3) / 3;
cout<<"El promedio es: "<<promedio<<endl; //salto de linea

if (promedio >= 5){ //si es igual o mayor a 5
	cout<<"estas aprobado :D !!";
}else{ //sino...
cout<<"Estas desaprobado :'( ";
}
};
