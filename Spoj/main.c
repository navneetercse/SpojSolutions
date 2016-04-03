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
int fctrl(long int input);
int fctrl2(int input);

int main(){

	int t;
        
        // for palin.c
	char input1[1000002];
        scanf("%d",&t);
	while(t--){
	
		scanf("%s",input1);
		palin(input1);
		printf("%s\n",input1);	
	}
   
        //for fctrl.c
	long int input2;	
	scanf("%d", &t);
	while(t--){
                scanf("%ld", &input2);
		fctrl(input2);
	}
        
        // for fctrl2.c
        int input3;
        scanf("%d",&t);
	while(t--){
	scanf("%d", &input3);
	fctrl2(input3);
	
	
	}
        
        
        
        
	return 0;

}

