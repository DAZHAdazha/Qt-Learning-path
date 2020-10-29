#include <iostream>

#include "Money.h"


using namespace std;





string Money::toString() const

{

return "EUR " + to_string(euros) +'.' + to_string (cents);

}


Money Money::plus(const Money& other) const

{

        return Money(euros + other.euros, cents + other.cents );

}

Money operator + (const Money& m1, const Money& m2)

{

int e = m1.getEuros() + m2.getEuros();

int c = m1.getCents() + m2.getCents();

return Money(e + c/100, c % 100);

}

Money operator + (const Money& m1, int value)

{
    int e = m1.getEuros() + value;
    int c = m1.getCents();
    return Money(e + c/100, c%100);
}

Money operator + (const Money& m1, double value)

{
    int e = m1.getEuros() + value / 1;
    int c = m1.getCents()+ int(value * 100) % 100;
    return Money(e + c/100, c%100);
}




int main()

{

Money m1(2, 50);

Money m2(0, 52);

Money sum  = m1 + 1.32;

cout << "Sum = " << sum.toString() << endl;

return 0; // everything went as planned

}
