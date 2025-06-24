#include<stdio.h>
#include<iostream>
 using namespace std;

 struct rectangle{
    int length;
    int breadth;
 };


 void init(struct rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
 }

 int area(struct rectangle r){
    return r.length * r.breadth;
 }

 int peri(struct rectangle r){
    int p;
    p=2*(r.length + r.breadth);
    return p;
 }

 int main(){
    struct rectangle r1={0,0};
    int l, b;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    init(&r1, l, b);
    cout<<"Area of rectangle is: "<<area(r1)<<endl;
    cout<<"Perimeter of rectangle is: "<<peri(r1)<<endl;
 }