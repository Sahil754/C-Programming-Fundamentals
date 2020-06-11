//This program prints out all numbers between 1 and 500, e.g. 153 = (1*1*1)+(5*5*5)+(3*3*3)

#include<stdio.h>

int main(){
	
	int i;

	for(i=1;i<=500;i++){
		
		//swithc(i)
		//case 

		/*if (i*i*i == i)
		{
			printf("Same: %d x %d x %d = %d \n",i,i,i,(i*i*i));
		}*/

		if(i==((i*i*i)+(i*i*i)+(i*i*i))){
			printf("Same: %d = (%d x %d x %d)+(%d x %d x %d)+(%d x %d x %d) ",i,i,i,i,i,i,i,i,i,i);

		}

		printf("Other: %d \n",i);

	}
	
}
