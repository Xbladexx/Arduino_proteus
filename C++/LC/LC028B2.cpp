#include<iostream>
using namespace std;
int num;

int main(){ 

    cin >> num;
    bool primo = true;
    for (int i = 2 ; i < num ; i++)
    if (num % i == 0) primo = false;
    if (primo == true) cout<<"El numero es primo";
    else cout<<"El numero no es primo";
    

    return 0;
}
