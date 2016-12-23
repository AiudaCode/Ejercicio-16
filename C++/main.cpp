#include <iostream>
#include "Pasar.h"

using namespace std;

int main()
{
    Pasar* obj = new Pasar();
    int n1, n2;

    cout << "Digite el valor de A" << endl;
    cin >> n1;
    obj->setA(n1);

    cout << "Digite el valord e B" << endl;
    cin >> n2;
    obj->setB(n2);

    obj->pasarNumero();
    cout << "El nuevo valor de A es: " << obj->getA() << endl;
    cout << "El nuevo valor de B es: " << obj->getB() << endl;
    return 0;
}
