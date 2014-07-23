#include <stdio.h>
#include <stdlib.h>

int main(){
	int* array;
	int n;
	int i;
	
	printf("length:");
	scanf("%d", &n);
	array = (int*)malloc(sizeof(int) * n);
	for(i = 0; i < n; i++){
		array[i] = n - i;
	}
	for(i = 0; i < n; i++){
		printf("%d\n", array[i]);
	}
	
	free(array);
}

/*
静的配列と動的配列の違い
stdlib.h
mallocの使い方
freeは必ず
使い方は普通の配列と同じ
*/