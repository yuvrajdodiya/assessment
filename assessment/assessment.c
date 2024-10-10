#include<stdio.h>
#include<math.h>
int main()
{
	int choice,q,a,a1,total,ans;
	while(ans='y')
	{
	printf("---Menu------");
	printf("\n1.pizza		price = 180rs/pcs");
	printf("\n2.burger        price = 100rs/pcs");
	printf("\n3.dosa		price = 120rs");
	printf("\n4.idli		price = 50rs");
	printf("\nEnter Your choice.........:- ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nYou have selected to pizza");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*180;
			printf("\nAmount is %d",a1);
			total= total+(q*180);
			printf("\nTotal amount is %d",total);	
			break;
		case 2:
			printf("\nYou have selected burger");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*100;
			printf("\nAmount is %d",a1);
			total= total+(q*100);
			printf("\nTotal amount is %d",total);
			break;
		case 3:
			printf("\nYou have selected dosa");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*120;
			printf("\nAmount is %d",a1);
			total= total+(q*120);
			printf("\nTotal amount is %d",total);
			break;
		case 4:
			printf("\nYou have selected idli");
			printf("\nEnter the quantatiy :-");
			scanf("%d",&q);
			a1=q*50;
			printf("\nAmount is %d",a1);
			total= total+(q*50);
			printf("\nTotal amount is %d",total);
			break;
			printf("Invalid");
			break;
	}
	printf("\n\n Do You Want to Continue y/n ? : ");
		scanf(" %c",&ans);
		if(ans != 'y')
		{
			goto end;
		}
		else{
			printf("\n");
		}
}
	end:
		printf("\nTotal amount bill= %d",total);
		printf("\nThank you for visiting");
	return 0;
}
