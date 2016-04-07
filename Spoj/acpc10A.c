void acpc10A(){
	int a1,a2,a3;
	scanf("%d%d%d",&a1,&a2,&a3);
	while(a1!=a2 && a2!=a3 & &a3!=0){
		if((a2-a1)==(a3-a2)){
			printf("AP %d\n",((a2-a1)+a3));
	           
	    }else if( (a2/a1)==(a3/a2)){
	        printf("GP %d\n",((a2/a1)*a3));
	             
	    }else{
			break;
	    }   
		scanf("%d%d%d",&a1,&a2,&a3);
	             
	  }
}

