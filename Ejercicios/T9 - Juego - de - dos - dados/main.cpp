#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1;
    int i;   
    int dado2;
    string lanzarDado;
    int tiroDado;
    
    tiroDado = dado1 + dado2;

    while (true)
    {
        cout << "**************************************************" << endl;
        cout << "             Sea bienvenido al juego                  " << endl; 
        cout << "**************************************************" << endl << endl;
        
        cout<<"De click a cualquier tecla, para lanzar los dados: "<< endl;
        cin >> lanzarDado;

        system ("cls");
        for (int i = 0; i <= 3; i++)
        {
        srand (time (NULL));
        dado1 = rand()% 6+1;
        dado2 = rand()% 6+1;  
        }
        
        cout << "Dado numero 1: "<< dado1 << endl;
        cout << "Dado numero 2: "<< dado2 <<endl;
                
        cout<<"La suma de los dados es igual a: "<< tiroDado << endl <<endl;
        
        if (tiroDado == 4 || tiroDado == 6 || tiroDado == 8)
        {
            cout<< endl << "***********************************"<< endl;
            cout<< endl << "       Felicidades, haz ganado     "<< endl;
            cout<< endl << "***********************************"<< endl;
            break;
        }
        if (tiroDado == 2 || tiroDado == 12)
        {
            cout<< endl << "***********************************"<< endl;
            cout<< endl << "       Lo siento, haz perdido     "<< endl;
            cout<< endl << "***********************************"<< endl;
            break;
        }
        
        system("pause");
        system ("cls");
    }

    return 0;
}
    
