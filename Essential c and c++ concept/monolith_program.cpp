#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int length = 0,breadth = 0;
    printf("enter the value of length and breadth\n");
    cin>>length>>breadth;

    int area = length * breadth;
    int peri = 2*(length + breadth);

    printf("area is %d \n and perimeter is %d\n", area,peri);
    return 0;
}