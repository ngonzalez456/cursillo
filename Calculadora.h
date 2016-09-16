#ifndef CALCULADORA_H
#define CALCULADORA_H

template <typename data>

class Calculadora {
    
public:

    void add(data &d1, const data &d2){

        return (d1 + d2);

    };

    void sub(data &d1, const data &d2){

        return (d1 - d2);

    };

    void mul(data &d1, const data &d2){

        return (d1 * d2);

    };

    void div(data &d1, const data &d2){

        return (d1 / d2);

    };

    void print(data &d){

    };

    Calculadora() {
        
    }

    virtual ~Calculadora() {

    }

};

#endif /* CALCULADORA_H */
