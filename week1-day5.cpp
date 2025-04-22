#include <stdio.h>
int main (){ // Declare variables 'char name[50]', 'float monthlyincome', 'totalexpenses';
	
	char name[10];
	printf("Please enter your name:");
	scanf("%s", &name);


	float monthlyincome;
	printf("Please enter your monthly income:");
	scanf("%f", &monthlyincome);


	float totalexpenses;
	printf("Please enter your totalexpenses:");
	scanf("%f", &totalexpenses);


printf("\n\n\n....................Monthly financial Summary................. \n");
 float savings = monthlyincome-totalexpenses;
 	printf("Name:%s\n", name);
 	printf("Monthly Income :%f\n", monthlyincome);
 	printf("Total Expenses: %f\n", totalexpenses);
 	("Remaining Savings:%f\n", savings);
 	
 	if(savings==0){
 		printf("You have no savings this month!");
	 }
	 else if(savings<0){
	 	printf("You are oveer spending this month!");
	 }
	 else{
	 		printf("You  savings money this month !");
	 }
	
	
	return 0;
}
