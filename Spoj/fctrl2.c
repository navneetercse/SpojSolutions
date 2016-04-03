int fctrl2(int input){

	int i;
	char output[160];
	output[0] = '1';
	output[1] = '\0';
	int multiply(int input, char  *output);
	
	for(i = 2; i <= input ;i++)
		multiply(i, output);
	printf("%s\n", output);

}

void strCopyRev(char *output, char *temp, int j);

int multiply(int input, char  *output){

	int i, len = strlen(output), sum = 0, carry = 0, j = 0;
	int sumUnit = 0,sumTens = 0, carryUnit = 0, carryTens = 0;
	char temp[160];
	temp[0] = '0';
	temp[1] = '0';
	temp[2] = '\0';
	if(input <= 9){
		for(i = len - 1; i >= 0; i--){	
			sum = ((output[i] -'0') * input) + temp[j] - '0';
			carry = sum /10;
			sum = sum % 10;
			temp[j++] = sum + '0';
			temp[j] = carry +'0';
		}
		if(carry > 0){
			temp[++j]= '\0';
		}else{
			temp[j] = '\0';
		}
	strCopyRev(output, temp, j);
	return 0;
	}else if(input == 10){
		output[len] = '0';
		output[len+1] = '\0';
	}else{
		int iUnit = input % 10, iTens = input / 10;
		j = 0;
		for(i = len - 1; i >= 0; i--){
		sumUnit = ((output[i] - '0') * input) + carryUnit;
			carryUnit = sumUnit / 10;
			temp[j++] = (sumUnit % 10) +'0';
		}
		if(carryUnit > 0){
			if(carryUnit > 9){
				temp[j++] = (carryUnit % 10) + '0';	
				temp[j++] = (carryUnit / 10) + '0';
				temp[j] = '\0';
			}else{
				temp[j++] = (carryUnit % 10) + '0';
				temp[j] = '\0';
			}	
		}else{
			temp[j] = '\0';
		}
		strCopyRev(output, temp, j);
	}
	
	return 0;
}


void strCopyRev(char *output, char *temp, int j){

	int k = 0, i;
	for(i = j-1;i>=0;i--){
		output[k++] = temp[i];
		
	}
	output[k] = '\0';
}



