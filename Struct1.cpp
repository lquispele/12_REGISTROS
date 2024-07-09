#include<iostream>
using namespace std;
struct empleado{
	char nombre[20];
	char sexo[10];
	int sueldo;
}e[999];
int main(){
	int n,Ye=0,Me=0;
	double mayor=0, menor=999999;
	cout<<"Ingrese cantidad de empleados: "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"EMPLEADO "<<i+1<<endl;
		fflush(stdin);
		cout<<"Nombre: ";cin.getline(e[i].nombre,10,'\n');
		cout<<"Sexo: "; cin.getline(e[i].sexo,10,'\n');
		cout<<"sueldo: "; cin>>e[i].sueldo;
	if(e[i].sueldo<menor){
		menor=e[i].sueldo;
		Me=i;	
		}
	if(e[i].sueldo>mayor){
		mayor=e[i].sueldo;
		Ye=i;
		}
	}
	cout<<"El empleado con mayor sueldo es: "<<endl;
		cout<<"Nombre: "<<e[Ye].nombre<<endl;
		cout<<"Sexo: "<<e[Ye].sexo<<endl;
		cout<<"sueldo: "<< e[Ye].sueldo<<endl;
	cout<<"El empleado con menor sueldo es: "<<endl;
		cout<<"Nombre: "<<e[Me].nombre<<endl;
		cout<<"Sexo: "<<e[Me].sexo<<endl;
		cout<<"sueldo: "<< e[Me].sueldo<<endl;
	return 0;
}
