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
        int ncases;
        long int n1,n2;
        int choice;
        char input1[1000002];
        long int input2;
        int input3;
        do{
            printf("\nEnter your choice\n\n");
            printf("1. ADDREV\n");
            printf("2. PALIN\n");
            printf("3. FCTRL\n");
            printf("4. FCTRL2\n");
            printf("5. ACPC10A\n");
            printf("6. Exit\n");
            printf("\n");
            scanf("%d", &choice);
            system("cls");
                switch(choice){

                    case 1: 
                        //for addRev.c
                        printf("Enter no of test cases, followed by test cases\n");
                        scanf("%d",&ncases);

                        while(ncases--){
                                scanf("%ld%ld",&n1,&n2);
                                n1=addRev(n1);
                                n2=addRev(n2);
                                n1=n1+n2;
                                printf("%d\n",addRev(n1));
                        }
                        break;
                    case 2:
                        // for palin.c
                        printf("Enter no of test cases, followed by test cases\n");
                        scanf("%d",&t);
                        while(t--){
                                scanf("%s",input1);
                                palin(input1);
                                printf("%s\n",input1);	
                        }
                        break;
                    case 3:
                        //for fctrl.c
                        printf("Enter no of test cases, followed by test cases\n");	
                        scanf("%d", &t);
                        while(t--){
                                scanf("%ld", &input2);
                                fctrl(input2);
                        }  
                        break;
                    case 4:
                       // for fctrl2.c
                       printf("Enter no of test cases, followed by test cases\n");
                       scanf("%d",&t);
                       while(t--){
                             scanf("%d", &input3);
                             fctrl2(input3);
                        } 
                       break;
                    case 5:
                       //acpc10A.c
                       printf("Enter 0 0 0 to terminate the series input \n");
                       acpc10A();   
                       break;
                    case 6:
                        break;
                    default:
                        printf("Wrong Input\n");
                        break;
                }
               
        }while(choice != 6);
        
        return 0;

}

