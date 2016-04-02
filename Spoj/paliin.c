void copyLeftToRight(char *input, int len){

	int i , j, mid = len /2;
	i = mid - 1;
	j = mid + (len%2);
	while(i >=0  && j < len){
		input[j] = input[i];
		j++;
		i--;
	}

	return;
}

	

void incrementOne(char *input, int len){
	int lenTemp = len;
	if(input[len] <= '8'){
		input[len] = input[len] + 1;		
	}else{
		input[lenTemp--] = '0';
		if(input[lenTemp] <= '8'){
			input[lenTemp]	= input[lenTemp] + 1;
		}else{
			while(lenTemp >= 0){
				input[lenTemp--] = '0';
				if(input[lenTemp] <='8'){
					input[lenTemp] = input[lenTemp] + 1;
					break;
				}
			}
		}
	}
	return;
}


int checkIfAllNine(char *input){
	int i = 0;
	while(input[i] == '9' && input[i] !='\0'){
		i++;
	}
	if(input[i] != '\0'){
		return 0;
	}
	return i;

}
int palin(char *input){

	int status, nine, i, len, mid, k ,j;
	
	len = strlen(input);
	mid = len / 2;	

	if((input[0] >='0' && input[0] <= '9') && input[1] =='\0'){
		if(input[0] == '9'){
			input[0] = '1';
			input[1] = '1';
			input[2] = '\0';
			return 0;
		}
		input[0] = input[0] + 1;
		return 0;
	}else {	
		nine = checkIfAllNine(input);
		if(nine > 0){
			i = 1;
			input[0] = '1';
			input[nine] = '1';
			input[nine + 1] ='\0';
			while(i < nine){
				input[i] = '0';
				i++;
			}
		}else{	
			i = mid - 1;
			j = mid + (len%2);
			while(i >=0 && j < len && input[i] == input[j]){
				i--;
				j++;
			} 
			if((i < 0 && j == len) || ((i>=0 && j < len) && (input[i] < input[j]))) {		
				k  = (len % 2) ? mid : (mid - 1);
				incrementOne(input, k);
				copyLeftToRight(input, len);
		
			}else{
				copyLeftToRight(input, len);	
			}


			}
				
		}
	return 0;

	}

