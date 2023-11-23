#include <iostream>
#include <string>

int main() {
    std::cout<<" iNGRESE UNA FRASE:";
    std::string phrase;
    std::getline(std::cin,phrase);
    std::cout<<"LA FRASE ES:"<<phrase<<std::endl;

    return 0;
}
