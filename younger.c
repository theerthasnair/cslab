#include<stdio.h>
void main()
{
	int ramage,shyamage,ajayage,young ;
	printf("enter ram age");
	scanf("%d",&ramage);
	printf("enter shyam age");
	scanf("%d",&shyamage);
	printf("enter ajay age");
	scanf("%d",&ajayage);
	young=ramage;
	if(shyamage<young)
	young=shyamage;
	if(ajayage<young)
	young=ajayage;
if(young==ramage)	
printf("ram is younger");
if(young==shyamage)	
printf("shyam is younger");
if(young==ajayage)	
printf("ajay is younger");
}
