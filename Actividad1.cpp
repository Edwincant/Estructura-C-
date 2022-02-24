/******************************************************************************

Sofía es estudiante de una carrera técnica en sistemas de computación y requiere
un ingreso extra para amortiguar sus gastos personales. Ella se ha encontrado con una
oportunidad en Internet donde le ofrecen zapatos al por mayor y a un buen precio. Ella
decide desarrollar una aplicación en el lenguaje C++ que le ofrezca realizar cálculos para
determinar costos, margen de ganancias y proyectar sus ventas. En este programa a
desarrollar, desempeñará el rol de compañero (a) y socio (a) de Sofía y le ayudará con su
propósito


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float precio, compra, flete, pedido, unidades, gastos, neto, inversion = 0, marketing, envios, impuesto, otrosgastos, costos = 0, ventas = 0, ganancia = 0;
    
    cout << "Digite el precio por unidad de zapatos"<<endl;
    cin >> precio;
    
    cout << "Digite la cantidad de zapatos comprados al por mayor"<<endl;
    cin >> compra;
    
    cout << "Digite el costo del flete"<<endl;
    cin >> flete;
    
    pedido=precio*compra+flete;
    inversion=pedido;
    
    cout << "Digite el valor de marketing"<<endl;
    cin >> marketing;
    
    cout << "Digite el valor de envios"<<endl;
    cin >> envios;
    
    cout << "Digite el valor de impuestos"<<endl;
    cin >> impuesto;
    
    otrosgastos=marketing+envios+impuesto;
    costos=otrosgastos;
    
    cout << "Digite el valor de las ventas"<<endl;
    cin >> ventas;
    
    gastos=inversion+costos;
    neto=ventas-gastos;
    ganancia=neto;
    
    cout<<"El margen de ganancias es: "<<neto;


 system("pause");
 return 0;