
#include <stdio.h>
#include<string.h>



int main()
{
    char arr[10];
    scanf("%s",arr);//a08
    int fin[4*strlen(arr)];
    for(int i=0;i<strlen(arr);i++){
        int j=4*i;
        if(arr[i]=='0'){
            fin[j]=0;
            fin[j+1]=0;
            fin[j+2]=0;
            fin[j+3]=0;
        }
        else if(arr[i]=='1'){
            fin[j]=0;
            fin[j+1]=0;
            fin[j+2]=0;
            fin[j+3]=0;
        }
        else if(arr[i]=='2'){
            fin[j]=0;
            fin[j+1]=0;
            fin[j+2]=1;
            fin[j+3]=0;
        }
        else if(arr[i]=='3'){
            fin[j]=0;
            fin[j+1]=0;
            fin[j+2]=1;
            fin[j+3]=1;
        }
        else if(arr[i]=='4'){
            fin[j]=0;
            fin[j+1]=1;
            fin[j+2]=0;
            fin[j+3]=0;
        }
        else if(arr[i]=='5'){
            fin[j]=0;
            fin[j+1]=1;
            fin[j+2]=0;
            fin[j+3]=1;
        }
        else if(arr[i]=='6'){
            fin[j]=0;
            fin[j+1]=1;
            fin[j+2]=1;
            fin[j+3]=0;
        }
        else if(arr[i]=='7'){
            fin[j]=0;
            fin[j+1]=1;
            fin[j+2]=1;
            fin[j+3]=1;
        }
        else if(arr[i]=='8'){
            fin[j]=1;
            fin[j+1]=0;
            fin[j+2]=0;
            fin[j+3]=0;
        }
        else if(arr[i]=='9'){
            fin[j]=1;
            fin[j+1]=0;
            fin[j+2]=0;
            fin[j+3]=1;
        }
        else if(arr[i]=='A'){
            fin[j]=1;
            fin[j+1]=0;
            fin[j+2]=1;
            fin[j+3]=0;
        }
        else if(arr[i]=='B'){
            fin[j]=1;
            fin[j+1]=0;
            fin[j+2]=1;
            fin[j+3]=1;
        }
        else if(arr[i]=='C'){
            fin[j]=1;
            fin[j+1]=1;
            fin[j+2]=0;
            fin[j+3]=0;
        }
        else if(arr[i]=='D'){
            fin[j]=1;
            fin[j+1]=1;
            fin[j+2]=0;
            fin[j+3]=1;
        }
        else if(arr[i]=='E'){
            fin[j]=1;
            fin[j+1]=1;
            fin[j+2]=1;
            fin[j+3]=0;
        }
        else{
            fin[j]=1;
            fin[j+1]=1;
            fin[j+2]=1;
            fin[j+3]=1;
        }
        
    }
    
    for(int k=0;k<4*strlen(arr);k++){
        if(fin[k]==1){
            fin[k]=0;
        }
        else{
            fin[k]=1;
        }
        
        printf("%d",fin[k]);
        
    }
    
    
    
    

    return 0;
}




