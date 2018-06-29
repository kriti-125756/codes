#include <iostream>
#include <algorithm>
using namespace std;

void CountSort(int *Arr2,int Size);
int main(){
int N,K,i,j,DaysCount=0,prblm;
cout<<"Enter jobs & then enter K\n";
cin>>N>>K;

int *Arr1 = new int[N];

for(i=0;i<N;i++){
cin>>Arr1[i];
}

CountSort(Arr1,N);

for(i = 0; i<N; i++){
if(Arr1[i]==-1){
continue;
}else{
prblm =Arr1[i];
}

 for(j=i+1;(Arr1[j] != -1)&& (j<=N) &&(prblm-Arr1[j] >= K);j++ ){
  DaysCount++;
  Arr1[j]=-1;
 }
}

//cout<<"\n"<<DaysCount;
return 0;
}

void CountSort(int *Arr2,int Size){
int m,n,*Maximum;
Maximum = max_element(Arr2,Arr2+Size);
int *CountArray = new int[*Maximum];
int *Arr3 = new int[Size];
fill_n(CountArray,*Maximum, 0);
for(m=0;m<=*Maximum; m++){
CountArray[Arr2[m]-1]++;
}

/*for(m=0;m<*Maximum;m++){
cout<<CountArray[m]<<"  ";
}*/

int k=0;
for(m = 0;m < *Maximum; m++){
    for(n = 0;n < CountArray[m];n++){
        Arr3[k++] = m+1;
    }
}

for(m=0;m<Size;m++){
cout<<Arr3[m]<<"  ";
}
}
