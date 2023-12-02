#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	FILE *file = fopen("day1input.txt", "r");
	long long int sumdigit = 0,flag2 = 0;
	char str[10001];
	while(fscanf(file,"%[^\n]\n", str)==1){
		printf("%s\n", str);
		int flag = 0;
		long long int digit1 = 0, digit2 = 0;
		for(int i = 0; i<strlen(str);i++){
			if(str[i] >= '1' && str[i] <= '9'){
				digit1 = str[i] - '0';
				flag++;
				break;
				}
			}
		strrev(str);
		for(int i = 0; i<strlen(str);i++){
			if(str[i] >= '1' && str[i] <= '9'){
				digit2 = str[i] - '0';
				flag++;
				break;
				}
			}
			
		digit1 *= 10;
		printf("%lld + %lld\n", sumdigit, digit1+digit2);
		flag2++;
		sumdigit += digit1+digit2;
	}
	printf("%lld", sumdigit);
}