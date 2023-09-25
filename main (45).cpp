
#include <iostream>

using namespace std;

int main()
{
   string n;
   int vokal = 0;
  
  
  getline(cin,n);
  cout << endl;
 
 
  for(int i = 0; i < n.length(); i++){
    if(n[i]=='a'||n[i]=='i'||n[i]=='u'||n[i]=='e'||n[i]=='o') {
      vokal++;
    }
  }
  
  if (vokal > 0) {
    cout << vokal;
  }
  else {
    cout << "Huruf vokal tidak ditemukan";
  }
 
  cout << endl;
  return 0;
}