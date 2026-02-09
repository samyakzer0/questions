#include <iostream>
#include <cmath>
using namespace std;

// function to print swastika
int main() 
{
    int n;
    cin >>n;
{
for (int i = 0; i < n; i++) 
{
    for (int j = 0; j < n; j++) 
    {
        
    // checking if i < row/2
    if (i < floor(n / 2))
    {
        
        // checking if j<col/2
        if (j < floor(n / 2)) 
        {
            
        // print '*' if j=0
        if (j == 0)
            cout << "*";
            
        // else print space
        else
            cout << "  ";
        }
        
        // check if j=col/2 
        else if (j == floor(n / 2))
        cout << " *";
        else
        {
        // if i=0 then first 
        // row will have '*'
        if (i == 0)
            cout << " *";
        }
    }
    else if (i == floor(n / 2))
        cout << "* ";
    else 
    {
        
        // middle column and last
        // column will have '*'
        // after i > row/2
        if (j == floor(n / 2 )|| 
            j == n - 1)
        cout << "* ";
        
        // last row
        else if (i == n - 1) 
        {
            
        // last row will be have 
        // '*' if j <= col/2 or 
        // if it is last column
        if (j <= floor(n / 2) ||
            j == n - 1)
            cout << "* ";
        else
            cout << "  ";
        } 
        else
        cout << "  ";
    }
    }
    cout << "\n";
}
}
}