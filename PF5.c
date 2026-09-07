#include<stdio.h>
int main ()
{
	char name[50];
	int id;
	int labs;
	int clabs;
	float qmarks;
	float amarks;
	float pmarks;
	float score;
	float lcp;
	
	printf("enter name\n");
	scanf("%s",&name);
	printf("enter id\n");
	scanf("%d",&id);
	printf("enter total labs\n");
	scanf("%d",&labs);
	printf("enter completed labs\n");
	scanf("%d",&clabs);
	printf("enter quiz marks\n");
	scanf("%f",&qmarks);
	
	printf("enter assignment marks\n");
	scanf("%f",&amarks);
	
	printf("enter project marks\n");
	scanf("%f",&pmarks);
	
	score=qmarks+pmarks+amarks;
	lcp=((float)clabs/labs)*100;
	
	printf("score .....%.2f\n",score);
	printf("lab percentage .....%.2f",lcp);
	
	
	return 0;
	
}
