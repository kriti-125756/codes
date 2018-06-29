#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int I;
    double D;
    string S;
    cin>>I;
    cin>>D;
    cin.ignore();
    getline(std::cin,S);
    string heman = s+S;
    cout<<i+I<<"\n";
    double x=D+d;
    cout<<setprecision(1)<<fixed;
    cout<<x<<"\n";
    cout<<heman;

   }
