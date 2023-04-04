#pragma once
#include <iostream>

class Weight {
private:
    int kg;
    int gram;
public:
    Weight();
    Weight(int a, int b);
    void set_weight(int a, int b);
    int get_weight() const;
    Weight add_weight(Weight a,Weight b);
    bool less_than(Weight a, Weight b);
};

Weight::Weight(){}

// Weight::Weight(int a, int b) : kg(a), gram(b) {}

void Weight::set_weight(int a, int b) {
    kg = a;
    gram = b;
}

int Weight::get_weight() const {
    return kg * 1000 + gram;
}

Weight add_weight(Weight a, Weight b) {
    int sum_grams = a.get_weight() + b.get_weight();
    int kg = sum_grams / 1000;
    int gram = sum_grams % 1000;
    Weight w3;
    w3.set_weight(kg, gram);
    return w3;
}

bool less_than(Weight w1, Weight w2) {
    return w1.get_weight() < w2.get_weight();
}