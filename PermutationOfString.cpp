#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iterator>

using std::strlen;
int main(){
	int n,i,j,k;
	std::vector <std::string> collection;
	std::vector <std::string> collection1;
	std::string word;
	//std::vector <std::char> path;
	std::cout<<"Enter the size of array\n";
	std::cin>>n;
	for (unsigned int i = 0; i < n; ++i)
    {
        std::cin >> word;
        collection.push_back(word);
    }

    for (int i=0; i < collection.size();i++){
    std::string str =  collection[i];
    int x=str.length();

    for(j=0;j<x;j++){
    	//char CharUnderConsideration=str[j];
    	std::string StringUnderCons;
    	StringUnderCons=str;
    	std::random_shuffle(StringUnderCons.begin(), StringUnderCons.end());
    	//for(k=j;k<x;k++){
    		//std::swap(StringUnderCons[j], StringUnderCons[k]);
            //std::cout<<StringUnderCons<<"\n";
            if (std::find(collection1.begin(), collection1.end(), StringUnderCons) == collection1.end())
            {
                collection1.push_back(StringUnderCons);
            }

    		StringUnderCons=str;


    	//}
    }
  }

for(j=0;j<collection1.size();j++){
    std::cout<<collection1[j]<<"\n";
   }
	return 0;
}
