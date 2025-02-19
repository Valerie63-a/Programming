#include <iostream>
using namespace std;
int main (){
   double precio= 5620;
   double descuennto= precio *0.15;
   double precio_final= precio-descuento;
    std::cout << "El precio final con el descuento es: " << precio_final << std::endl;
    
    return 0;
}

