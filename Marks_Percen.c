// write a program to find percentage of class 12
#include <stdio.h>
main(){
    float H, E, M, S, P;
    scanf("%f",&H);
    scanf("%f",&E);
    scanf("%f",&M);
    scanf("%f",&S);
    P=(H+E+M+S)/4;
//    Per=p/4;
    printf("Percentage is: %.2f%%",P);
}
