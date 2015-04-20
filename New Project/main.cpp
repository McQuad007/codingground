#include <iostream>

using namespace std;

struct personaje{
    string nombre;
    int clase; // 1 Mago, 2 Cazador, 3 Asesino, 4 Guardian
    int salud;
};
int main()
{
    personaje dios1;
    personaje dios2;
    
    dios1.nombre = "Artemisa";
    dios1.clase = 2;
    dios1.salud = 400;
    
    dios2.nombre = "Zeus";
    dios2.clase= 1;
    dios2.salud = 300;
    
    cout<<"El dios 1 es: "<<endl;
    cout<<"Nombre: "<<dios1.nombre<<endl;
    cout<<"Clase: " <<dios1.clase<<endl;
    cout<<"Salud: "<<dios1.salud<<endl;
    cout<<"______________________"<<endl;
    cout<<"El dios 2 es: "<<endl;
    cout<<"Nombre: "<<dios2.nombre<<endl;
    cout<<"Clase: " <<dios2.clase<<endl;
    cout<<"Salud: "<<dios2.salud<<endl;
    
    
    personaje dioses[2];
    for (int i =0; i<2; i++){
        cout<<"Ingrese el nombre del dios :"<<i;
        cin>>dioses[i].nombre;
        cout<<"Ingrese la clase, 1Mago, 2Cazador, 3Guardian: ";
        cin>>dioses[i].clase;
        cout<<"Ingrese la salud del dios: ";
        cin>>dioses[i].salud;
    }
    
    for (int i =0; i<2; i++){
        cout<<"Nombre: "<<dioses[i].nombre<<endl;
        cout<<"Clase: " <<dioses[i].clase<<endl;
        cout<<"Salud: "<<dioses[i].salud<<endl;
    }
    
    return 0;
}

