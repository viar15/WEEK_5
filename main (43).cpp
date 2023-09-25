/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n, terbesar = 1, terkecil = 1;
    int pengurangan;
    
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n ;i++){
        if (arr[i] >= terbesar){
            terbesar = arr[i];
        }
        if (arr[i] <= terkecil){
            terkecil = arr[i];
        }
       
    }
    pengurangan = terbesar - terkecil;
    cout << pengurangan << endl;
        }

         
    
   
    
    
        
    
    
