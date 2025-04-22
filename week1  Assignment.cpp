# include <stdio.h>
int main (){
	char Name[50];
	printf("Please enter your name\n: ");
	scanf("%s", &Name);
//	printf("%s\n", Name);
	
	float Monthlyincome;
	printf("Please enter your monthlyincome\n: ");
	scanf("%f", &Monthlyincome);
//	printf("%f\n", Monthlyincome);
	
	float Totalexpenses;
	printf("Please enter your totalexpenses\n: ");
	scanf("%f", &Totalexpenses);
	
	int income = 500;
	int expenses = 300;
	int remainingsavings = income - expenses;
//	printf("%i", remainingsavings);

    
	printf("\nEnter your remainingsavings: ");
	scanf("%i", &remainingsavings);
	
	if(remainingsavings > 0){
//		printf("You are saving money this month");
	}
	else if(remainingsavings < 0){
		printf("You have overspent this month");
	}
	else{
		printf("You have no savings this month");
	}

	
	printf("\n...Monthlyincome...\n");
		printf("Your name is: %s\n", Name);
		printf("Your totalexpenses is: %f\n", Totalexpenses);
			printf("Your remainingsavings is: %i\n", remainingsavings);
			printf("You are saving money this month");
			
	return 0;
	
	
}

