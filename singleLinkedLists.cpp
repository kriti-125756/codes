#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
int data;
struct node *link;
};

struct node *CreateList(struct node *start){
struct node *tmp = (struct node *)malloc(sizeof(struct node));

tmp->link=NULL;
cout<<"\n"<<tmp->data;
cout<<"Enter info part\n";
cin>>tmp->data;
start=tmp;
return start;
}

void traverse(struct node *start){
struct node *tmp = start;
while(tmp->link != NULL){
        cout<<"\n"<<tmp->data;
    }
}

int main(){
int choice;
struct node *start = NULL;
while(1){
cout<<"Enter 1 to create a list\nEnter 2 to travers the list\nEnter 3 to exit the loop\n";
cin>>choice;
switch(choice){
case 1 :start=CreateList(start);
break;
case 2 : traverse(start);
case 3 :exit(1);
break;
}
}
return 0;
}


