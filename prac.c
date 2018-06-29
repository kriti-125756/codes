#include <stdio.h>

int main()
{int *a,N,i=0,sum=0,len;
    scanf("%d",&N);
    a = malloc(sizeof(int)*N);
    while (i<=N && scanf("%d", &a[i++]) == 1)
    
    for(i=0;i<a[i]!='\0';i++){
       sum+=a[i];
    }
    int num=1,SumNum=0;
    while(SumNum<sum){
    int SumNum=sizeof(a)*num;
    if(SumNum>sum){
        for (int j=0;a[j]!='\0';j++){
         a[j]=num;   
        }
        break;
    }else{
      num++; 
    }
    }
    printf("%d",num-1);
    return 0;
}
