#include <stdio.h>

int main(){
	long long int sumscore = 0, winnum[10] = {}, ournum;
	char buf[100];
	FILE *file = fopen("..\\input\\day4input.txt", "r");
	while(fscanf(file,"%[^:]: %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld | ",&buf, &winnum[0],&winnum[1],&winnum[2],&winnum[3],&winnum[4], &winnum[5], &winnum[6],
	&winnum[7],&winnum[8],&winnum[9])==11){
//		printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld\n", winnum[0],winnum[1],winnum[2],winnum[3],winnum[4],winnum[5],winnum[6],winnum[7],winnum[8],winnum[9]);
		int score = 0;
		for(int i = 0; i<25; i++){
			
			fscanf(file, "%lld", &ournum);
			for(int j = 0; j<10;j++){
				if(ournum == winnum[j]){
					if(score == 0){
						score = 1;
					} else{
						score*= 2;
					}
				}
			}
		}
		sumscore += score;
		fscanf(file, "\n");
	}
	printf("%d\n", sumscore);
}