// Given the age of a person, write a function to check if 
// the person is eligible to vote or not.

#include<iostream>
using namespace std;

int age(int yourage){
    if(yourage>=18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
}

int main(){

int ag;
cout<<"Enter your age: ";
cin>>ag;

age(ag);

return 0;
}