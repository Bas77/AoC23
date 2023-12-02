#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	const char key1[1000] = "one", key2[1000] = "two", key3[1000] = "three", key4[1000]= "four", key5[1000]="five", key6[1000] = "six", key7[1000] = "seven", key8[1000] = "eight", key9[1000] = "nine";
 	long long int sumdigit = 0,flag2 = 0;
	char str[10001];
	
	printf("%s\n",key7);
	FILE *file = fopen("..\\input\\day1input.txt", "r");
	while(fscanf(file,"%[^\n]\n", str)==1){
		printf("%s\n", str);
		int flag = 0;
		long long int digit1 = 0, digit2 = 0;
		for(int i = 0; i<strlen(str);i++){
			if(str[i] == key1[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key1);j++){
					if(str[k] == key1[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key1)){
				 digit1 = 1;
				 flag++;
					break;
			}
		}
		
		if(str[i] == key2[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key2);j++){
					if(str[k] == key2[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key2)){
				 digit1 = 2;
				 flag++;
					break;
			}
		}
		
		if(str[i] == key3[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key3);j++){
					if(str[k] == key3[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key3)){
				 digit1 = 3;
				 flag++;
					break;
			}
		}
		if(str[i] == key4[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key4);j++){
					if(str[k] == key4[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key4)){
				 digit1 = 4;
				 flag++;
					break;
			}
		}
		if(str[i] == key5[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key5);j++){
					if(str[k] == key5[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key5)){
				 digit1 = 5;
				 flag++;
					break;
			}
		}
		if(str[i] == key6[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key6);j++){
					if(str[k] == key6[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key6)){
				 digit1 = 6;
				 flag++;
					break;
			}
		}
		if(str[i] == key7[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key7);j++){
					if(str[k] == key7[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key7)){
				 digit1 = 7;
				 flag++;
				break;
			}
		}
		if(str[i] == key8[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key8);j++){
					if(str[k] == key8[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key8)){
				 digit1 = 8;
				 flag++;
					break;
			}
		}
		if(str[i] == key9[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key9);j++){
					if(str[k] == key9[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key9)){
				 digit1 = 9;
				 flag++;
					break;
			}
		}
			if(str[i] >= '1' && str[i] <= '9'){
				digit1 = str[i] - '0';
				flag++;
				break;
				}
		}
			
			
			
			//2nd digit
			for(int i = 0; i<strlen(str);i++){
			if(str[i] == key1[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key1);j++){
					if(str[k] == key1[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key1)){
				 digit2 = 1;
				 flag++;
			}
		}
		
		if(str[i] == key2[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key2);j++){
					if(str[k] == key2[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key2)){
				 digit2 = 2;
				 flag++;
			}
		}
		
		if(str[i] == key3[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key3);j++){
					if(str[k] == key3[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key3)){
				 digit2 = 3;
				 flag++;
			}
		}
		if(str[i] == key4[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key4);j++){
					if(str[k] == key4[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key4)){
				 digit2 = 4;
				 flag++;
			}
		}
		if(str[i] == key5[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key5);j++){
					if(str[k] == key5[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key5)){
				 digit2 = 5;
				 flag++;
			}
		}
		if(str[i] == key6[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key6);j++){
					if(str[k] == key6[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key6)){
				 digit2 = 6;
				 flag++;
			}
		}
		if(str[i] == key7[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key7);j++){
					if(str[k] == key7[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key7)){
				 digit2 = 7;
				 flag++;
			}
		}
		if(str[i] == key8[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key8);j++){
					if(str[k] == key8[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key8)){
				 digit2 = 8;
				 flag++;
			}
		}
		if(str[i] == key9[0]){
				int count = 0;
				int k = i;
				for(int j = 0; j<strlen(key9);j++){
					if(str[k] == key9[j]){
						count++;
					}
					k++;
				}
				if(count==strlen(key9)){
				 digit2 = 9;
				 flag++;
			}
		}
			if(str[i] >= '1' && str[i] <= '9'){
				digit2 = str[i] - '0';
				flag++;
				}
			}
//		if(flag == 1) digit2 = digit1;
		digit1 *= 10;
		
		printf("%lld + %lld\n", sumdigit, digit1+digit2);
		flag2++;
		sumdigit += digit1+digit2;
	}
	printf("%lld", sumdigit);
}