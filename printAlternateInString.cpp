#include <iostream>
#include <vector>

using namespace std;

int main(){

vector <string>s;string S;int i=0,n,k;
cout<<"Enter no Of test cases\n";
cin>>n;
cin.ignore();
for(int i = 0; i < n; i++){
getline(cin, S);

s.push_back(S);
}

for(vector <string>::const_iterator it =s.begin();it!=s.end();it++){
S=*it;
k=S.length();
for(i=0;i<k;i+=2){
cout<<S[i];
}
cout<<" ";
for(i=1;i<k;i+=2){
cout<<S[i];
}
cout<<"\n";
}
/*
while(i < n){
cout<<"Enter new string\n";
cin>>S;

i++;
}*/
return 0;
}
