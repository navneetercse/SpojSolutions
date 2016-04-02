/* 
 * File:   main.c
 * Author: Navneet
 *
 * Created on April 3, 2016, 12:16 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int palin(char *input);
 
int main(){

	int t;
	char input[1000002];
	scanf("%d",&t);
	while(t--){
	
		scanf("%s",input);
		palin(input);
		printf("%s\n",input);
		
	}
	return 0;

}

