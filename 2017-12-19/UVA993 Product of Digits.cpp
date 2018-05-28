#include <cstdio>
#define INF 1e15
unsigned long long int a;
void f(int &N ,unsigned long long int &l){
	if(N == 1){
		if(l < a)
			a = l;
		return ;
	}
	for(int i=2;i<10;i++){
		if(N%i==0){
			N/=i;
			l*=10;
			l+=i;
			f(N,l);
			N*=i;
			l-=i;
			l/=10;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int N,Q;
		scanf("%d",&N);
		if(N < 10){
			printf("%d\n",N);
		}else{
			a = INF;
			unsigned long long int l=0;
			f(N,l);
			if(a != INF)
				printf("%llu\n",a);
			else
				printf("-1\n");
		}
	}
	return 0;
}
