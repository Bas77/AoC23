#include <stdio.h>

int main(){
	long long int sumscore = 0, winnum[10] = {}, ournum, cards=0,index=0,amount[99999];
	for(int i = 0; i<99999; i++){
		amount[i] = 1;
	}
	char buf[100];
	FILE *file = fopen("..\\input\\day4input.txt", "r");
	while(fscanf(file,"%[^:]: %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld | ",&buf, &winnum[0],&winnum[1],&winnum[2],&winnum[3],&winnum[4], &winnum[5], &winnum[6],
	&winnum[7],&winnum[8],&winnum[9])==11){
		index++;
		cards += amount[index];
		int score = 0;
		for(int i = 0; i<25; i++){
//			printf("test %d\n", amount[index]);
			fscanf(file, "%lld", &ournum);
			for(int j = 0; j<10;j++){
				if(ournum == winnum[j]){
					score++;
				}
			}
		}
		fscanf(file, "\n");
		for(int j = 1; j<=score;j++){
			amount[index+j] += amount[index];
		}

	}
	printf("%lld\n", cards);
}