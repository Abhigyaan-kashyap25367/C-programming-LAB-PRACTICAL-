#include<stdio.h>
int main(){
    int  a=47 ;
    int b= 67;
    int AND_opr,OR_opr,XOR_opr;
    AND_opr =(a&b);
    OR_opr =(a|b);
    int u=a^b;
    XOR_opr=((a||b)&&!(a&&b));
    printf("1: %d\n",AND_opr);
    printf("2 : %d\n",OR_opr);
    printf("3: %d\n",XOR_opr);
    printf ("%d\n",u);
    return 0;

}