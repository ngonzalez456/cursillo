#ifndef CALCULADORA_H
#define CALCULADORA_H

template <typename data>

class Calculadora {
    
public:

    void add(const data &d1, const data &d2){

        return (d1 + d2);

    };

    void sub(const data &d1, const data &d2){

        return (d1 - d2);

    };

    void mul(const data &d1, const data &d2){

        return (d1 * d2);

    };

    void div(const data &d1, const data &d2){

        return (d1 / d2);

    };

    void print(const data &d){

    };

    Calculadora() {
        
    }

    virtual ~Calculadora() {

    }

};

#endif /* CALCULADORA_H */
