#include <stdio.h>
#include<math.h>
void min(float arr[],int len){
	int a;
	

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
	int l;

 	printf("enter the lenghth of the array");
 	scanf("%d",&l);
 	float arr[l];
 	printf("enter the elements in the array");
 	for(int i=0;i<l;i++)
 	{
 			scanf("%f",&arr[i]);
	 }
  
    min(arr,l);
    max(arr,l);
    return 0;
}

//this code runs in an online compiler but is not compilin in the IDE


