#include <iostream>
#include <string.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
using namespace std;
int IsPrimeNo(int No){                 // func to check prime
int k,i,j,Ans=1;

if(No<2){
 Ans=0;
}
else{
for(i=2;i<=No/2;i++){
    if(No%i == 0){
    Ans = 0;break;

    }
}
}

return Ans;
}

int main(){
    int v = 0,l,cou=0,h,j,i,Q=0,Fl = 0,s;
    char *R,S[10];

    int *x = (int *)malloc(51200*sizeof(int *));
    int *y = (int *)malloc(51200*sizeof(int *));

    cin>>h;
    for(i = 0;i<=h; i++){
            if(IsPrimeNo(i) == 1){
            //cout<<i<<"  "<<IsPrimeNo(i)<<"\n";
                x[v]=i;
                v++;
            }
    }


    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            //R = new (&x[i]) char[sizeof(x[i])];
            //cout<<R;
            //memcpy(R, &x[i], sizeof(x[i]));
            //R = (char *)(x[i]);
            //cout<<R;
std::ostringstream out;
           out<<x[i]<<x[j];
        }cout<<"\n";
    }

    return 0;
    }

