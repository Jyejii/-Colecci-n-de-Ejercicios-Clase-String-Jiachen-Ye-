#include <iostream>
#include <string>
int main() {
    std::string sentence="OpenAI is leading AI research lab";
    std::cout<<"La frase es:"<< sentence<< std::endl;
    std::cout<<"La longitud de la cadena:"<<sentence.size()<<std::endl;
    std::cout<<"Esta la cadena vacia?:"<< (sentence.empty()?"SI":"NO")<<std::endl;
    return 0;
}
