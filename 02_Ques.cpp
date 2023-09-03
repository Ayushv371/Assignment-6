// Given radius of a circle. Write a function to print the 
// area and circumference of the circle.

#include<iostream>
using namespace std;

int circle(float r, float &ar, float &circ){
    ar = 3.14*r*r;
    circ = 2*3.14*r;
}

int main(){

float rad,area,circl;
cout<<"Enter the radius: ";
cin>>rad;

circle(rad,area,circl);

cout<<"Area = "<<area<<endl;
cout<<"Circummference = "<<circl;
return 0;
}