#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=4,i,PhoneNumber;
    string key,name;
    map <string,int> PhoneBook;
    cin.ignore();
    for(i = 0; i < n;i++){
       cin>>key;
       cin>>PhoneNumber;
       PhoneBook.insert(pair<string,int>(key,PhoneNumber));
    }


    cin.ignore();
    while(cin >> name) {
    if (PhoneBook.count(name) == 0 ){
        cout <<name<< "=" <<PhoneBook.find(name)->second <<"\n";
    } else {
        cout << "Not found" <<"\n";
    }
}
    return 0;
}


/*#include <iostream>
#include <map>

using namespace std;


int main() {

    int n,i,PhoneNumber;
    string key;
    map <string,int> PhoneBook;
    cin.ignore();
    for(i = 0; i < n;i++){
       cin>>key;
       cin>>PhoneNumber;
       PhoneBook.insert(pair<string,int>(key,PhoneNumber));
    }

    for(map<string,int>::iterator it = PhoneBook.begin(); it != PhoneBook.end() ; it++){
        cout<<it->first<<" "<<it->second;
    }
    return 0;
}
int main(){

map<char,string> NameMap;
char a;
string test;

for(a='a';a<='d';a++){
cin>>test;
NameMap.insert(pair<char,string>(a,test));
}

for(map<char,string>::iterator it = NameMap.begin(); it != NameMap.end(); it++){
cout<<it->first<<" "<<it->second<<"\n";
}
return 0;
}*/
