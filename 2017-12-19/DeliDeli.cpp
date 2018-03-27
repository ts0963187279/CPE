/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  int L , N;
  cin >> L >> N;
  map<string,string> list;
  for(int i = 0 ; i < L ; i++){
    string tmp1,tmp2;
    cin >> tmp1 >> tmp2;
    list[tmp1] = tmp2;
  }
  for(int i = 0 ; i < N ; i++){
    string tmp;
    cin >> tmp;
    if(list.find(tmp) != list.end())
      cout << list[tmp] << endl;
    else if((tmp[tmp.size() - 2] == 'a' || tmp[tmp.size() - 2] == 'e' || tmp[tmp.size() - 2] == 'i' || tmp[tmp.size() - 2] == 'o' || tmp[tmp.size() - 2] == 'u') && tmp[tmp.size() - 1] == 'y')
      cout << tmp << "s" << endl;
    else if(tmp[tmp.size() - 1] == 'y')
      cout << tmp.replace(tmp.size() - 1 , 1 , "ies") << endl;
    else if(tmp[tmp.size() - 1] == 'o' || tmp[tmp.size() - 1] == 's' || tmp[tmp.size() - 1] == 'x')
      cout << tmp << "es" << endl;
    else if(tmp[tmp.size() - 2] == 'c' && tmp[tmp.size() - 1] == 'h')
      cout << tmp << "es" << endl;
    else
      cout << tmp << "s" << endl;
  }
  return 0;
}
