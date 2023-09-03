// Write a function to print squares of the first 5 natural numbers.

#include<iostream>
using namespace std;

int sqnum(int num){
    return num * num;
}

int main(){

for(int n=1; n<=5; n++){
    int sq=sqnum(n);
    cout<<"Square of "<<n<< " = " <<sq<<endl;
}

return 0;
}