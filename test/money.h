#ifndef LAB3_MONEY_H

#define LAB3_MONEY_H

// 避免重复多次导入头文件
#pragma once

#include <string>

using namespace std;


class Money

{


public: Money(int e, int c): euros(e), cents(c) {}

int getEuros() const { return euros; }

int getCents() const { return cents; }

string toString() const;

Money plus(const Money&) const;


private:

int euros, cents;

};


#endif //LAB3_MONEY_H
