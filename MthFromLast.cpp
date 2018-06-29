#include <iostream>
#include <malloc.h>
#include <stdlib.h>

using namespace std;

struct node{
int value;
struct node *link;
}*start = NULL;

struct node *InsertVal(int NodeVal){
    struct node *Temp = (struct node *)malloc(sizeof(struct node));
    Temp->value = NodeVal;
    Temp->link = NULL;
    if(start == NULL){
        start = Temp;
        return start;
    }else{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr = start;
    while(ptr->link != NULL){
          ptr = ptr->link;
        }
       ptr->link = Temp;

       return start;
    }
}

void Disp(struct node *str){

struct node *test = str;
while(test!= NULL){
        cout<<test->value<<"  ";
        test = test->link;
    };
}

int main(){
int a,n;
while(1){
cout<<"Enter your choice \n1)Insert node\n2)Display values \n3) Exit\n";
cin>>a;
    switch(a){
    case(1):cout<<"\nInsert value";
            cin>>n;
            start = InsertVal(n);
    break;
    case(2):
            Disp(start);
    break;
    case(3):exit(0);
    break;
    }
};
return 0;
}
