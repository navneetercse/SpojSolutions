#include<math.h>
#include<stdio.h>
int prime(int m, int n){

    int sqrtNum = (int)ceil(sqrt(n));
    int sPrime[n-m];
    int prim[sqrtNum];
    int i,j;
 
    int num = sqrt(sqrt(n));
    
    prim[0] = 1;
    prim[1] = 1;
    for(i=0;i<n-m;i++)
        sPrime[i] = 0;
    for(i = 2; i <= sqrtNum; i++){
	prim[i] = 0;
    }
    for(i = 2; i*i <= sqrtNum; i++){
       if(prim[i] == 0){
           for(j = i+i; j <= sqrtNum; j=j+i){
               prim[j]= 1;
           }
       }   
        
    }
    int temp = m;
    for(i = 2 ;i <= sqrtNum; i++ ){
        if(prim[i] == 0){
            j = ((temp/i) * i);
            for(; j <= n; j = j + i){
                if(j >= temp)
                sPrime[j - temp] = 1;
            }   
        }
    }
    for(i=0;i <= n-m ;i++){
        if(sPrime[i] == 0){
            printf("%d ",i+temp);
            
        }
    }
    
    printf("\n");
    return 0;
}