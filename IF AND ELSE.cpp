#include<stdio.h>
int main(){
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	printf("You have entered %d as your age\n",age);
	if(age>=18){
		printf("You are aligiable to vote ");
	}
	
	

	else{
		printf("You are not aligiable to vote");
	}
	
	
	
	
	
	
	
	
	return 0;
}