#include<iostream>
#include<string>
using namespace std;
struct atletas{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};
int main(){
    int n,Mmeda=0,op,posi;
    string em;
    cout<<"Ingrese la cantidad de atletas: "; cin>>n; cin.ignore();
    atletas atl[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese el atleta "<<i+1<<endl;
        cout<<"Nombre: "; cin>>atl[i].nombre;
        cout<<"Pais de nacimiento: "; cin>>atl[i].pais;
        cout<<"Numero de medallas: "; cin>>atl[i].medallas;
        cout<<"Disciplina: "; cin>>atl[i].disciplina;
    }
    system("cls");
    do{
       cout<<"Ingrese el nombre de un pais: "<<endl; cin>>em; cin.ignore();
       cout<<"Los siguientes participantes nacieron aqui: "<<endl;
        for(int i=0;i<n;i++){
            if(atl[i].pais==em){
            cout<<atl[i].nombre<<endl;
            if(atl[i].medallas>Mmeda){
            Mmeda=atl[i].medallas;
            posi=i;
            }
            }
        }
        cout<<"El atleta con mayor medallas es: "<<atl[posi].nombre<<endl;
        cout<<"Quieres ver otros paises?"<<endl; cin>>op;
        system("cls");
    }while(op==1);
}