#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int counter = 1;
	while(n--){
		int m , k;
		map<int,int> table;
		scanf("%d",&m);
		k = m;
		while(true){
			int sum = 0;
			while(m){
				int tmp = m % 10;
				m /= 10;
				sum += tmp*tmp;
			}
			if(1 == sum){
				printf("Case #%d: %d is a Happy number.\n",counter++,k);
				break;
			}else if(table.find(sum) != table.end()){
				printf("Case #%d: %d is an Unhappy number.\n",counter++,k);
				break;
			}
			table[sum] = 1;
			m = sum;
		}
	}
	return 0;
}
