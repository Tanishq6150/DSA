#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/*
struct rectangle{
    int length;
    int breath;
};
void fun(struct rectangle *p)
{   p->length = 20;
    cout<<"length"<<p->length<<endl<<"breath"<<p->breath<<endl;
};

int main(){
    struct rectangle r ={10,5};
    fun(&r);
    printf("length is %d\n breath is %d \n",r.length,r.breath);
    return 0;
}
*/

struct rectangle{
    int length;
    int breath;
};

struct rectangle *fun(){
    struct rectangle *p;
    p=new rectangle;
    // p= (struct rectangle *)malloc(size of (struct rectangle));
    p->length = 15;
    p->breath = 7;
    return p;
}


int main(){
    struct rectangle *ptr = fun();
    cout<< "length"<<ptr->length<<endl<<"breath"<<ptr->breath<<endl;
    return 0;
}