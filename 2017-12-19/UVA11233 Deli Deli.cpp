#include <iostream>
#include <map>
using namespace std;
int main(){
	int l,n;
	string s;
	map<string,string> table;
	cin >> l >> n;
	while(l--){
		string a,b;
		cin >> a >> b;
		table[a] = b;
	}
	while(n--){
		cin >> s;
		char last = s[s.size()-1] , last2 = s[s.size()-2] , last3 = s[s.size()-3];
		if(table.find(s)!=table.end()){
			cout << table[s] << endl;
		}else{
			for(int i = 0 ; i < s.size()-2;i++)
				cout<<s[i];
			if(last=='y'){
				if(last2!='a'&&last2!='e'&&last2!='i'&&last2!='o'&&last2!='u')
					cout<<last2<<"ies"<<endl;
				else
					cout<<last2<<last<<'s'<<endl;
			}else if(last=='o'||last=='s'||last=='x'){
					cout <<last2<<last<<"es"<<endl;
			}else if(last=='h'&&(last2=='c'||last2=='s')){
					cout <<last2<<last<<"es"<<endl;
			}else
				cout <<last2<<last<<"s"<<endl;
		}
	}
	return 0;
}
