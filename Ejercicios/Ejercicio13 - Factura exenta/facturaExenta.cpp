#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char facturaExenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    cout << "Es una factura exenta? escriba S o N: ";
    cin >> facturaExenta;
    
    if (facturaExenta == 'S' || facturaExenta == 's')
    {
	    calculoImpuesto = 0;
    }	
    else{
        calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    }

    cout << endl; 
    calculoDescuento = (subtotal * descuento) / 100;
    total = subtotal - calculoDescuento + calculoImpuesto;
	
    cout << "El total a pagar es: " << total;
	
    return 0;
}
