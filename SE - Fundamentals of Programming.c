#include<stdio.h>
int main()
{
	int qty,num,total=0,totalamt=0,choice;

	printf("----Choose Your Food By Entering Number----\n");
	start:
	printf("1.Pizza = 180\n2.Burger = 100\n3.Dosa = 120\n4.Idli = 50\n");//options of available food
	scanf("%d",&num);


	if(num>4)
	{
		printf("-----*INVALID NUMBER*-----\n");
		printf("----*PLEASE SELECT AGAIN*----\n");
		goto start;
	}

	switch(num)
	{
		case 1:
			printf("You Have Selected Pizza\n");
			printf("enter the qty:\n");
			scanf("%d",&qty);
			
			total=qty*180;
			printf("your order bill is: %d\n",total);
			
			break;
		case 2:
			printf("You Have Selected Burger\n");
			printf("enter the qty:\n");
			scanf("%d",&qty);
			
			total=qty*100;
			printf("your order bill is: %d\n",total);
		
			break;
		case 3:
			printf("You Have Selected Dosa\n");
			printf("enter the qty:\n");
			scanf("%d",&qty);
			
			total=qty*120;
			printf("your order bill is: %d\n",total);
		
			break;
		case 4 :
			printf("You Have Selected Idli\n");
			printf("enter the qty:\n");
			scanf("%d",&qty);
			
			total=qty*50 ;
			printf("your order bill is: %d\n",total);
			
			break;
			default:
				printf("Not Exist in Menu\n");
				
			
			
	}
	totalamt += total;
        printf("\nTotal amount is = %d", totalamt);
	
	printf("\n--*DO YOU WANT SOMETHING ELSE*---\n");
	printf("press 1 to order more\n");
	printf("press 2 to get your bill\n");
	printf("1.yes\n");
	printf("2.no\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		 goto start;
		
	}
	else
	{
		totalamt += total;
        printf("\nTotal amount is = %d\n", totalamt);
        
		printf("-----Thank You For Choosing Us-----\n");
		printf("----------HAVE A NICE DAY------------");
	}
	return 0;

}

