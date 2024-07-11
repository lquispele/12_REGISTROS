#include<iostream>
#include<string>
using namespace std;

struct persona{
    string nombre;
    int DNI;
    int EDAD;
};

int main(){
    int n,k=0,S=0;
    cout<<"Ingrese la cantidad de personas: "; cin>>n; cin.ignore();

    persona person[n];

    for(int i=0;i<n;i++){
        cout<<"Ingrese la persona "<<i+1<<endl;
        cout<<"Nombre:"; cin>>person[i].nombre;
        cout<<"DNI: "; cin>>person[i].DNI;
        cout<<"Edad: "; cin>>person[i].EDAD;
        
        if(person[i].EDAD>50){
        k++;
        }
        
        S+=person[i].EDAD;
    }
    cout<<"Las personas que tienen mas de 50 anios son: "<<k<<endl;
    cout<<"El promedio de las edades son: "<<S/n<<endl;
    cout<<"\n**********************************************************"<<endl;
        for(int i=0;i<n;i++){
        cout<<"La persona "<<i+1<<" es:"<<endl;
        cout<<"Nombre:"<<person[i].nombre<<endl;
        cout<<"DNI: "<<person[i].DNI<<endl;
        cout<<"Edad: "<<person[i].EDAD<<endl;
        }
    return 0;
}