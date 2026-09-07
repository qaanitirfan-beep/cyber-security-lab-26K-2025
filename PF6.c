#include<stdio.h>
int main()
{
	int id;
	char name[50];
	int system;
	float price;
	float downtime;
	float cost;
	printf("enter id\n");
	scanf("%d",&id);
	printf("enter analyst name\n");
	scanf("%s", name);
	printf("enter number of affected systens\n");
	scanf("%d",&system);
	printf("enter estimated pricce\n");
	scanf("%f",&price);
	printf("enter downtime\n");
	scanf("%f",&downtime);
	cost=system*price;
	printf("==================================\n");
	printf("\t REPORT\n");
	printf("====================================\n");
	printf("incident id....%d\n",id);
	printf("analyst....%s\n",name);
	printf("affected systems...%d\n",system);
	printf("recovery cost.....%,2f\n",price);
	printf("total cost ....%.2f\n",cost);
	printf("downtime .....%.2ff hours\n",downtime);
	printf("======================================\n");
	return 0;
}
