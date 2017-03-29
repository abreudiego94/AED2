#ifndef ORDENACAO_H
#define ORDENACAO_H


class Ordenacao
{


    public:
        int numeros[4] = {7 ,8 , 3, 4};
        Ordenacao();
        virtual ~Ordenacao();
        void bubbleSort();
        void bubbleSortMelhoramentoUm();
        void bubbleSortMelhoramentoDois();
        void print();
    protected:
    private:
};

#endif // ORDENACAO_H
