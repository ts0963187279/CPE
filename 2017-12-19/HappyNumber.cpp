/*Author: Vector Wang*/
#include <iostream>
#include <map>

using namespace std;

int main(){
  int n,counter = 1;
  cin >> n;
  while(n -- > 0 ){
    map<int,int> table;
    int s0,s1;
    cin >> s0;
    s1 = s0;
    while(true){
      int tmp = 0;
   	  for(int i = s1 ; i > 0 ; i /= 10){ 
   	    tmp += (i % 10) * (i % 10);
   	  }
   	  if(tmp == 1){
   	    cout << "Case #" << counter <<": "<< s0 << " is a Happy number." << endl;
   	    break;
   	  }
   	  if(table.find(tmp) != table.end()){
   	    cout << "Case #" << counter <<": "<< s0 << " is an Unhappy number." << endl;
   	    break;
   	  }
   	  table[tmp] = 1;  
   	  s1 = tmp;
    }
  	counter ++;
  }
  return 0;
}
