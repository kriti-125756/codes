#include <iostream>
#include <stdlib.h>
using namespace std;

///////////////// Structures /////////////////////////
struct Vertex{
    int info;
    struct Vertex *nextVertex;
    struct Edge *FirstEdge;
}*start = NULL;

struct Edge{
    struct Edge *NextEdge;
    struct Vertex *DestVertex;
};

///////////// Function to find vertex /////////////////
struct Vertex *FindVertex(int n){

struct Vertex *ptr;
ptr = start;
while(ptr!=NULL){
    if(ptr->info != n){
    return ptr;
    }
ptr = ptr->nextVertex;
};
ptr = NULL;
return ptr;
}

//////// Function to insert edge ///////////////////

void InsertEdge(int Source, int Dest){
struct Vertex *dst,*src;
struct Edge *heman;
//struct Vertex *src = (struct Vertex *)malloc(sizeof(struct Vertex));
src = FindVertex(Source);
dst = FindVertex(Dest);
if (src == NULL){
    cout<<"\nThere is no source vertex "<<Source;
    return;
    }

if (dst == NULL){
    cout<<"\nThere is no destination vertex "<<Dest;
    return;
    }

struct Edge *NEdge =(struct Edge *)malloc(sizeof(struct Edge));
NEdge->DestVertex = dst;
NEdge->NextEdge = NULL;
if(src->FirstEdge == NULL){
    src->FirstEdge = NEdge;
    return;
    }

heman = src->FirstEdge;
while(heman->NextEdge!=NULL){
    heman = heman->NextEdge;
};

heman->NextEdge = NEdge;

}
///////////////// Insert Vertex ////////////////

void InsertVertex(int GraphValue){
struct Vertex *tmp = (struct Vertex *)malloc(sizeof(struct Vertex));
struct Vertex *ptr = (struct Vertex *)malloc(sizeof(struct Vertex));
tmp->info = GraphValue;
tmp->nextVertex = NULL;
tmp->FirstEdge = NULL;
if(start == NULL){
    start = tmp;
    return;
    }
    ptr = start;
    while(ptr->nextVertex != NULL){
        ptr = ptr->nextVertex;
    }
    ptr->nextVertex = tmp;
}

///////// Display ////////////////

void display(){
struct Vertex *vert = (struct *)malloc(sizeof(struct Vertex));
struct Edge *edg = (struct *)malloc(sizeof(struct Edge));
vert = start;
while(vert != NULL){
cout<<vert->info;
edg = vert->FirstEdge;
while(edg != NULL){
    cout<<edg->DestVertex->info;
    edg = edg->NextEdge;
};
cout<<"\n";
vert = vert->nextVertex;
};
}

///////////////////////// main function ////////////////////

int main(){
int choice,source,dest;
while(1){
cout<<"Enter your choice \n 1) Insert a vertex\n 2) Insert an edge\n 3)Exit \n";
cin>>choice;
    switch(choice){
    case 1:cout<<"Enter Graph value\n";
           cin>>source;
           InsertVertex(source);
    break;
    case 2:
            cout<<"Enter source\n";cin>>source;cout<<"Enter Destination\n";cin>>dest;
            InsertEdge(source,dest);
    break;
    case 3:display();
    break;
    case 4:exit(0);
    break;
        }

};
return 0;
}
