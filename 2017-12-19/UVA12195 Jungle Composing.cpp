#include <cstdio>
#define N 200+5
int main(){
	char *s = new char[N];
	while(gets(s) && s[0] != '*'){
		int counter = 0 , sum;
		for(char *c = s ; *c != '\0' ; c++){
			if(*c == '/'){
				if(sum == 64)
					counter++;
				sum = 0;
			}
			if(*c == 'W')
				sum += 64;
			if(*c == 'H')
				sum += 32;
			if(*c == 'Q')
				sum += 16;
			if(*c == 'E')
				sum += 8;
			if(*c == 'S')
				sum += 4;
			if(*c == 'T')
				sum += 2;
			if(*c == 'X')
				sum += 1;
		}
		printf("%d\n",counter);
	}
	return 0;
}
