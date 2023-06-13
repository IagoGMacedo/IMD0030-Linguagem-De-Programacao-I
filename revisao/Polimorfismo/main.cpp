#include <iostream>
#include <string>
#include "TemplateClasse.h"
//melhor manter como um header mesmo, ou .hpp

int main(){
    //especializa como inteiro
    Par<int> p(1,2);
    p.getPrimeiro();
    p.getSegundo();
    //especializa como string
    Par<std::string> p("iago","ilana");
    p.getPrimeiro();
    p.getSegundo();
    return 0;
}

//tabem tem como fazer composição de classes mas paciencia

