#include <stdio.h>
int main(){
    char str1[30] = "Digite o primeiro numero: ";
    char str2[30] = "Digite o segundo numero: ";
    char str3[30] = "Resultado: ";


    int s1 = 2;
    int s2 = 3;

    if(s1==s2){
        s1 += 1;
    } else{
        s1 += 2;
    }
    return 0;
}