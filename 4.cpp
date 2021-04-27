// Pointers with array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {20, 30, 40, 50};
    int *ptr = arr; //assigning an array to pointer gives the address of first element of array to the pointer
                    // if we add 1 or 2 or any integer to pointer the address shifts by the size of type of pointer
                    //this is a great application of pointer in array
    cout<<*(ptr+2);
}