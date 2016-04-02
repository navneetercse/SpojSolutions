int fctrl(long int input){
    
	long int sum = 0;
	int i ;
	for(i = 5; (input/i) > 0; i = i*5 ){
		sum = sum + input / i;
	}
        
	printf("%ld\n",sum);
	return 0;
}