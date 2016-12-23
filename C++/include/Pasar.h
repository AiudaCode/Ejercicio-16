#ifndef PASAR_H
#define PASAR_H


class Pasar
{
    public:
        Pasar();//Metodo constructor.
        virtual ~Pasar();//Metodo destructor.
        //Se definen los metodos publicos:
        void pasarNumero();

        //Se definen los metodos Setters y Getters de los atributos "a" y "b".
        void setA(int val);
        int getA();
        void setB(int val);
        int getB();

    protected:

    private:
        //Se definen los atributos privados:
        int a; // "a" de tipo entero
        int b; // "b" de tipo entero
};

#endif // PASAR_H
