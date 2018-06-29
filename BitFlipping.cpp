#include <iostream>
#include <vector>
using namespace std;
//vector<char> P(vector<char> &cop,int val);
vector<char> P(vector<char> cop,int val){

    int x = cop.size()/val;
    int i=1;
    int h = 0;
    while(i<=x && h<cop.size()){
    if(cop[h] == '0'){
    cop[h]=1;
    }else
    if(cop[h] == '1'){
    cop[h]=0;
    }

    h+=val;
    i++;}


    return cop;
}
int main(){

string str;
int j,k;
cout<<"Enter string"<<"\n";
getline(cin, str);
vector<char> word(str.begin(), str.end());

cout<<"Enter j\n";
cin>>j;
cout<<"Enter k\n";
cin>>k;
word = P(word,j);
/*for(vector<char>::const_iterator iter = word.begin();iter != word.end(); iter++){
        cout<<*iter;
    }
cout<<"\n";*/

word = P(word,k);
/*for(vector<char>::const_iterator iter = word.begin();iter != word.end(); iter++){
        cout<<*iter;
    }*/
return 0;

}


