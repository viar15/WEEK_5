/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, bil;
    cin >> n;
    int arr[n+1], counter[10] = {0};
    
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
     for(int i = 1; i <= n; i++){
         if(arr[i] == 1){
             counter [0] += 1;
         }
          if(arr[i] == 2){
             counter [1] += 1;
         }
          if(arr[i] == 3){
             counter [2] += 1;
         }
          if(arr[i] == 4){
             counter [3] += 1;
         }
          if(arr[i] == 5){
             counter [4] += 1;
         }
          if(arr[i] == 6){
             counter [5] += 1;
         }
          if(arr[i] == 7){
             counter [6] += 1;
         }
          if(arr[i] == 8){
             counter [7] += 1;
         }
          if(arr[i] == 9){
             counter [8] += 1;
         }
          if(arr[i] == 9){
             counter [8] += 1;
         }
          if(arr[i] == 10){
             counter [9] += 1;
         }}
         for(int i = 0; i < 10; i++ ){
            
       cout << i+1 << ": " << counter[i] << endl;
}
    return 0;
}
