/******************************************************************************

Actividad 4

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    
    
    //declaracion de la variable
    int referencia, talla, costo;
    char descripcion [100];
    char registro= 's'; //variable que se aigna para nueva clasificacion 


    while (registro=='s' || registro == 's'){
        cout << "Desea registrar otro tipo de zapatos s/n : "<<endl;
        cin >> registro;

        if (registro=='s' || registro == 'S'){
            cout << "Digite la ferencia del zapato :     "<<endl;
            cin >> referencia;
            
            cout << "Digite la descripción de los zapatos : "<<endl;
            cin.ignore();
            cin.getline(descripcion,100);
    
            cout << "Digite la descripción del zapato :     "<<endl;
            cin >> talla;
    
            cout << "Digite el costo del zapato"<<endl;
            cin >> costo;
        }
    }
    
    cout << "FIN DE LA APLICACIÓN" << endl;

 
 return 0;
}