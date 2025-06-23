#include<stdio.h>
#include<iostream>
using namespace std;

int area(int length,int breadth){

    return length*breadth;
}

int peri(int length,int breadth){

    int p;
    p= 2*(length+ breadth);

    return p;
}
int main(){
    int length = 0,breadth = 0;
    printf("enter the value of length and breadth\n");
    cin>>length>>breadth;

    int a = area(length,breadth);
    int p= peri(length,breadth);

    printf("area is %d \n and perimeter is %d\n", a,p);
    return 0;
}