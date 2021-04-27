/*
variable  |  value  |  Address
  x       |    10   |    0x1234
  ptr     |  0x1234 |    0x4321

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int x =10;
    int *ptr = &x; // can also be declared as // int* ptr; 
    cout<<*ptr<<endl; // prints the value stored at 0x1234
    cout<<ptr<<endl; // prints the value of ptr
    return 0;
}