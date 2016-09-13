#ifndef CALCULADORA_H
#define CALCULADORA_H

template <typename data>
class Calculadora {

public:

    SuperArray() {
        N = 0;
        D = 0;
    }

    SuperArray(int c) {
        N = c;
        D = new AnyType[N];
    }

    virtual ~SuperArray() {
        delete[] D;
    }

    void Borrar() {
        delete[] D;
        N = 0;
        D = 0;
    }

    AnyType operator[](int i) {
        if (i >= 0 && i < N)
            return D[i];
    }

    int largo() {
        return N;
    }

};




#endif /* CALCULADORA_H */
