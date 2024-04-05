#include <stdio.h>

int main(){

        char c = "a";
        int x = 5;
        float f = 5.25;
        double d = 15.113;
        double y = 5.0e10;

        int numeros [5] = {1,2,3,4,5};
        for(size_t i = 0; i< 4 ; i++)
    {
        printf("%d \n", numeros [i]);
    }
    printf("O valor é c =%c  \n",c);
    printf("O valor é c =%c  \n",x);
    printf("O valor é c =%c  \n",f);
    printf("O valor é c =%c  \n",d);           
    printf("O valor é c =%c  \n",y);

}
