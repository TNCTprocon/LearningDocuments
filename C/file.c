#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
	FILE* fp;
	int array[N];
	int i = 0;
	fp = fopen("test.txt",  "r");
	if(fp == NULL){
		printf("file not found");
		exit(0);
	}
	
	fscanf(fp ,"%d %d %d", &array[0], &array[1], &array[2]);
	fscanf(fp ,"%d %d", &array[3], &array[4]);
	
	for(i = 0; i < N; i++){
		printf("array[%d] = %d\n", i, array[i]);
	}
	
	fclose(fp);
	
	fp = fopen("testout.txt",  "w");
	if(fp == NULL){
		printf("file not found");
		exit(0);
	}
	
	for(i = 0; i < N; i++){
		fprintf(fp, "%d", array[i]);
	}
	
	fclose(fp);
	return 0;
}
/*
 FILEポインタの説明
fopen,fcloseの使い方
ファイルが読み込めなかった時の処理 fp == NULL exit
fscanfで読み込み
fscanfを複数使うと、読み取る行が変わること
*/