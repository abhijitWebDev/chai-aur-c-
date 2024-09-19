#include<iostream>

using namespace std;

void func1(int n) {
    for(int i=n; i >=0; i--) 
    cout << i << endl;
}

void func2(int n) {
    if(n==0) return;

    cout << n << endl;
    func2(n-1);
    cout << n << endl;
}

int funcFib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;

    return funcFib(n-1) + funcFib(n-2);
}

int funcTrib(int n){
    if(n==0) return 0;
    if(n <=2) return 1;

    return funcTrib(n-1) + funcTrib(n-2) + funcTrib(n-3);
}



int main() {

    int n = 25;

    cout << "Fibnacci of " << n << " is " << funcFib(n) << endl;
    cout << "Fibnacci of " << n << " is " << funcTrib(n) << endl;
    return 0;
}

