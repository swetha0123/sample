
#include <stdio.h>
#include<math.h>

int main()
{
    unsigned int  a;
    unsigned int b;
    printf("enter the number");
    scanf("%u",&a);
    printf("enter the bit to be checked");
    scanf("%u",&b);
    if((a&((int)pow(2,b)))!=0){
        printf("the bit is set");
    }
    else{
        printf("the bit is not set");
    }
    return 0;
}
/* int to unsigned int*/

