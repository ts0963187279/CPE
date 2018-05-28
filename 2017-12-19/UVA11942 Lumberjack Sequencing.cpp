#include <cstdio>
int main(){
	int N,a,b;
	scanf("%d",&N);
	printf("Lumberjacks:\n");
	while(N--){
		bool o = true , nag = false;;
		scanf("%d %d",&a,&b);
		if(a > b)
			nag = true;
		a = b;
		if(nag){
			for(int i = 2 ; i < 10 ;i++){
				scanf("%d",&b);
				if(a<b)
					o = false;
				a = b;
			}	
		}else{
			for(int i = 2 ; i < 10 ; i++){
				scanf("%d",&b);
				if(a>b)
					o = false;
				a =b;
			}
		}
		if(o)
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
	return 0;
}
