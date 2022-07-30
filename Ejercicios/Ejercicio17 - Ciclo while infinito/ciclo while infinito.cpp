#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   
    
    int ciclos = 1000000;

    while (ciclos < 100)
    {
        cout << "*";
        ciclos += 1;
    }
    
    return 0;
}
