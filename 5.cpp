
#include <iostream>

using namespace std;

int main()
{
   int count = 0;
   string kata;
   getline(cin,kata);
   cout << endl;
 
 
  for(int i = 0; i < kata.length(); i++){
    if(kata[i] == ' ' ){ 
        count++;
    }
  }
  
  cout <<count+1<< endl;
  return 0;
}
