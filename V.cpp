#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    for (int i = n ; i > 0 ; i--){
       for (int j = 1 ; j <= n - i ; j++){
           cout << "  ";
       }
       cout << "* ";
       for (int j = 1 ; j <= 2*i - 3 ; j++){
           cout << "  ";
       }
       if(i != 1){
           cout << "* ";
       }
       cout << endl;
    }
}