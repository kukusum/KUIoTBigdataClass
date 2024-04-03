//class declaration...
class Exp
{
public:
    // member variable
    int base;
    int exp;

    // member function
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);

    // constructor, destructor...
    Exp();
    Exp(int b);
    Exp(int b, int e);
}