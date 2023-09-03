// Given two numbers a and b, write a program using functions to print all
// the odd numbers between them.

#include<iostream>
using namespace std;

int oddnum(int num1, int num2){
    while(num1<=num2){
        if(num1%2==1){
            cout<<num1<<", ";
        }
        num1++;
    }
}

int main(){

int n1 , n2;
cout<<"Enter number 1: ";
cin>>n1;
cout<<"Enter number 2: ";
cin>>n2;

oddnum(n1, n2);

return 0;
}