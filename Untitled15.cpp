
#include <stdio.h>
#include<math.h>

int main()
{
    int i=1;
    while(i==1){
        unsigned int range;
        printf("enter the number of bits");
        scanf("%u",&range);
        float v;
        printf("enter the volt");
        scanf("%f",&v);
        unsigned int fin=pow(2,range)-1;
        float conv=(v/5.0)*fin;
        printf("the Battery percentage is %f",(conv/fin)*100);
        printf("\nPress 1 to continue");
        scanf("%d",&i);
    }    
    
    
    

    return 0;
}


