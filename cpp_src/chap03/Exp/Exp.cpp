// class Implementation...
#include "Exp.h"

    // member function
    int Exp::getValue()
    {
        int result = 1;
            for (int i = 0; i < exp; i++) 
            {
                result = result * base;
            }
            return result;
    }
    int Exp::getBase()
    {
        
        return true;
    }
    int Exp::getExp()
    {
        return exp;
    }
    bool Exp::equals(Exp b)
    {
        //
    }

    // constructor, destructor...
    Exp::Exp()
    {
        base = 1;   exp = 1;
    }
    Exp::Exp(int b)
    {
        base = b;   exp = e;
    }
    Exp::Exp(int b, int e)
    {
        base = b;   exp = e;
    }