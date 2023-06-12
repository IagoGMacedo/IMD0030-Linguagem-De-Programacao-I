#include <stdio.h>
int main(){
    //na memoria
    int max1 = 40;
    int min1 = 20;
    //lê um inteiro
    int t0;
    scanf("%d", &t0);

    //escreve da memoria
    int s0 = max1;
    int s2 = min1;
    int s1 = 0;
    int t1 = 1;
    //slt
    if(!(s0<t0 || t0<s2)){
        //DENTRO
        s1 = 1;
    } else{
        //FORA
        s1 = 0;

    }
    //printando o inteiro
    printf("%d", s1);

    return 0;
}