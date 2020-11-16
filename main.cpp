#include "animal.hpp"
#include <iostream>

using namespace std;

int main(){

    Animal* animal1 = new Animal(1, "Morcego", "Chiroptera", "Batman", "Mamiferos", 'M', 0.4, "Frutas");

    cout << "O animal cadastrado possui id: " << animal1->get_id() << endl;
return 0;
}
