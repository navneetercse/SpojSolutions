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
long int addRev(long int n);
int palin(char *input);
int fctrl(long int input);
int fctrl2(int input);
void acpc10A();

int main(){

	int t;
        
        //for addRev.c
        int ncases;
        long int n1,n2;
        scanf("%d",&ncases);
        
        while(ncases--){
                scanf("%ld%ld",&n1,&n2);
                n1=addRev(n1);
                n2=addRev(n2);
                n1=n1+n2;
                printf("%d\n",addRev(n1));
        }
        
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
        
    //acpc10A.c
    acpc10A();   
        
	return 0;

}

