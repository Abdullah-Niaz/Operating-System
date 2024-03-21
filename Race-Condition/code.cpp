#include <iostream>
using namespace std;

int main(){
    int c = 5;

    int r1 = c;
    r1 = r1 + 1;
    
    int r2 = c;
    r2 = r2 -1;
    
    c = r1;
    cout<<"c: "<<c;
    c = r2; 
    cout<<"c: "<<c;
    return 0;
}