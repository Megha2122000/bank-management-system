//header files
#include<stdio.h>
#include<conio.h>
int list();
void deposite();
void last();
void transfer();
void withdraw();
void checkdetail();
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposite=0,TotalWith=0;
int TotalTr=0;
int Acc;
char a[50];
//main function
void main()
{
//	clrscr();
printf("Enter your name: \n");
gets(a);
printf("Enter your Account Number: \n");
scanf("%d" , &Acc);
while(1)
{
	switch(list())	 
{
	case 1:
		deposite();
		TotalDeposite+=Amount;
		break;
	case 2:
		withdraw();
		if(Amo<=TotalAmount)
		TotalWith+=Amo;
		break;
	case 3:
		transfer();
			if(Tr<=TotalAmount)
			TotalTr+=Tr;
			break;
	case 4:
		checkdetail();
		break;
	case 5:
	//clrscr();
	last();
//	getch();
	//exit(0);
	default:
  	    printf("\n Invaild: id choice");
}
//	getch();
}
}
//define function
int list()
{
	int ch;
	printf("\n 1. Deposite Amount");
	printf("\n 2. Withdraw Amount");
	printf("\n 3. Transfer Amount");
	printf("\n 4. Check Details");
	printf("\n 5. Exit ");
	printf("\n  Enter your choice ");
	scanf("%d",&ch);
	return(ch);
}

void deposite()
{
	printf("\n Enter the amount you want to deposite: ");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}

void withdraw()
{
	printf("\n Enter the Amount you need to withdraw");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount)
	{
		TotalAmount-= Amo; 
	}
	else
	{
			printf("\n Less Amount withdrawal is not possible");
	}

}

void transfer()
{
	printf("\n Enter the Amount you need to Transfer");
		scanf("%d",&Tr);
		if(Tr<=TotalAmount)
		{
			TotalAmount-=Tr;
		}
		else
	{
			printf("\n Less Amount Transfer is not possible");
	}
}

void checkdetail()
{
	printf("\n Total Amount = %d" , TotalAmount);
	printf("\n Total Deposited Amount = %d", TotalDeposite);
	printf("\n Total Withdraw Amount = %d" , TotalWith);
	printf("\n Total Transferred Amount = %d" , TotalTr);
}

void last()
{
	printf("\n ************************************************************************************************************* \n" );
	printf("\n your name = %s" , a);
	printf("\n your account number = %d" , Acc);
	printf("\n Total Amount = %d" , TotalAmount);
	printf("\n Total Deposited Amount = %d", TotalDeposite);
	printf("\n Total Withdraw Amount = %d" , TotalWith);
	printf("\n Total Transferred Amount = %d" , TotalTr);
	printf("\n \n THANKS*******************************************************************************************************\n");
}

