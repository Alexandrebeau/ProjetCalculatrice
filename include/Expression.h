#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <iostream>
using namespace std;

class Expression
{
    public:
        Expression();
        virtual ~Expression();
        virtual void afficher(ostream os);
        virtual void afficherNPI(ostream os);
        virtual float calculer();

    protected:

    private:
};

#endif // EXPRESSION_H
