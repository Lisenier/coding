//References in c++


#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int &y=x;
    cout<<&y<<" "<<endl; //prints the address of x
    cout<<y<<" "<<endl; //prints the value of x
    x+=5;
    cout<<y<<endl;
    y+=5;
    cout<<y<<endl;
}

