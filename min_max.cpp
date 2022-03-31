#include <stdio.h>
#include<math.h>
void min(float arr[],int len){
    float min=arr[0];
    for(int i=1;i<=len-1;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("min element is %f",min);
}
void max(float arr[],int len){
    float max=arr[0];
    for(int i=1;i<=len-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nmax element is %f",max);
}

int main()
{
    float arr[]={9.98,8.87,7.6,6.5,5.1,4.5,2.8,2.9,9,10,78,98,100,98,123,67};
    int len=sizeof(arr)/sizeof(float);
    min(arr,len);
    max(arr,len);
    return 0;
}





