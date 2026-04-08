#include <iostream>
#include <cmath>


void output(long double x){
    std::cout << x << std::endl;

}


void newton(long double x){

    output(x);
    for(int i = 0; i < 10; ++i){
        x = x - (std::exp(x)-4)/(std::exp(x));
        output(x);

    }
}


int main(){

    long double x = 1;
    newton(x);

    return 0;
}