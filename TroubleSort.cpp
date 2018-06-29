#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <map>


using namespace std;

void troubleSort(map<int, int*> A){
int done=0,i,x,t=1,index;

//cout<<"\n Length:"<<l;
while(!done){
done=1;
for(i=0;i<l-2;i++){
cout<<type_info(A[i]);
    /*if(A[i]>A[i+2]){
    done=0;
    x=A[i+2];
    A[i+2]=A[i];
    A[i]=x;
    }*/
}
}

/*for(i=0;i<l;i++){
cout<<A[i];
}*/


/*for(i=0;i<l-1;i++){
    if(A[i]>A[i+1]){cout<<"\n"<<A[i];
    t=0;
    index=i;
    break;
    }
}*/

if(t==1){
cout<<"\n"<<"OK";}
else{
cout<<"\n"<<index;
}

}

int main(){
int N,i,len,j;
map<int, int*> Arrs;

cout<<"Enter number of test cases";
cin>>N;
for(i=0;i<N;i++){
cout<<"\n"<<"Enter array size";
cin>>len;
int* a = new int[len];
cout<<"\n"<<"Enter elements";
for(j=0;j<len;j++){
cin>>a[j];
}
Arrs[i]=a;
//troubleSort(a,len);
}
troubleSort(Arrs)
return 0;

}

/*void swap(int x[], int m, int n){
    int temp = x[m];
    x[m] = x[n];
    x[n] = temp;
}

int main(){
int Size,i,j,key,temp;
cout<<"Enter size:\n";
cin>>Size;
int *a = new int[Size];

cout<<"Enter the elements of array\n";
for(i = 0;i<Size;i++){
    cin>>a[i];
}

for(i=0;i<Size;i++){
    key = a[i];
    for(j=0;j<Size;j++){
        if(key > a[j]){
            swap( a,i, j);
        }
        }
    }

for(i = 0;i<Size;i++){
    cout<<a[i];
}

return 0;
}*/
