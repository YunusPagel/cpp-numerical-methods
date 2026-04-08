#include <iostream>
#include <cmath>

float f(float x) {
    return x * std::pow(2.0f, x) - 3.0f;
}

int main() {
    float a = 1.0f;
    float b = 2.0f;

    float func_a = f(a);
    float func_b = f(b);

    if (func_a * func_b > 0) {
        std::cout << "Kein Vorzeichenwechsel im Intervall!" << std::endl;
        return -1;
    }

    float m, func_m;

    for (int i = 0; i < 8; ++i) {
        m = (a + b) / 2.0f;
        func_m = f(m);

        if (func_a * func_m < 0) {
            b = m;
            func_b = func_m;
        } else {
            a = m;
            func_a = func_m;
        }
    }

    std::cout << "Naehere Nullstelle bei x = " << (a + b) / 2.0f << std::endl;
    std::cout << "Funktionswert an Nullstelle: " << f((a + b) / 2.0f) << std::endl;
    std::cout << "Intervall: [" << a << ", " << b << "]" << std::endl;

    return 0;
}
