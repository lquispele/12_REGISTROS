#include<iostream>
#include<string>
using namespace std;

struct persona{
    string nombre;
    int dianac;
    int mesnac;
    int anionac;
};

int main(){
    int n,mes;
    string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo", "Junio","Julio","Agosto", "Setiembre","Octubre","Noviembre","Diciembre"};

    cout<<"Ingrese la cantidad de personas: "; cin>>n; cin.ignore();

    persona person[n];

    for(int i=0;i<n;i++){
        cout<<"Ingrese la persona "<<i+1<<endl;
        cout<<"Nombre:"; cin>>person[i].nombre;
        cout<<"Dia de nacimiento: "; cin>>person[i].dianac;
        cout<<"Mes de nacimiento: "; cin>>person[i].mesnac;
        cout<<"Anio de nacimiento: "; cin>>person[i].anionac;
    }
    system("cls");
    do{
        cout<<"Ingrese un mes: "; cin>>mes;
        for(int i=0;i<n;i++){
         if(mes==person[i].mesnac){
            cout<<person[i].nombre<<" cumple anios en el mes de "<<meses[i+1]<<endl;
         }   
        }
    } while(mes>0&&mes<13);
}