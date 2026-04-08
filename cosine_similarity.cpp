#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
#include <cstdlib>



const std::vector<float> data_1 = {10, 25, 12, -20, 25, 45, 49};
const std::vector<float> data_2 = {51, 84, 4.3, 20, 126, 45, 20};


void print_vec(const std::vector<float> &data){
    std::cout << "[" ;
    for(size_t idx = 0; idx < data.size(); idx++){
        std::cout << data[idx] ;
        if(idx != data.size()-1){
            std::cout << ", " ;
        }
    }
    std::cout << "]" ;
    return;
}


float inner_product(const std::vector<float> &data_1, const std::vector<float> &data_2){
    float result = std::inner_product(data_1.begin(), data_1.end(), data_2.begin(), 0.0f);
    return result;
}

float eucledian_norm(const std::vector<float> &data){
    float result = 0.0;
    for(size_t idx = 0; idx < data.size(); idx++){
        result += std::powf(data[idx], 2.0f);
    }
    return std::fabsf(sqrt(result));
}

float cosine_similarity(){
    float result = (inner_product(data_1, data_2))/((eucledian_norm(data_1))*(eucledian_norm(data_2)));
    return result;
}

int main(){

    std::cout << "data_1: " ; print_vec(data_1); std::cout << std::endl;
    std::cout << "data_2: " ; print_vec(data_2); std::cout << std::endl; 

    std::cout << "Inner product: " << inner_product(data_1, data_2) << std::endl;

    std::cout << "Eucledian norm data 1: " << eucledian_norm(data_1) << std::endl;
    std::cout << "Eucledian norm data 2: " << eucledian_norm(data_2) << std::endl;

    std::cout << "Cosine similarity = " << cosine_similarity() << std::endl;

    return 0;
}
