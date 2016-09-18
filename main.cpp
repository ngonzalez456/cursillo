#include "Calculadora.h"
#include "Polinomios.h"

int main(int argc, char** argv) {
	
    double d1[] = {1,2,3};
    double d2[] = {3,2,1};

    int size1 = (sizeof(d1)/sizeof(*d1));
    int size2 = (sizeof(d2)/sizeof(*d2)); 
    
    Polinomios p1(d1, size1, d2, size2);

}
