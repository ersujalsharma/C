#include<stdio.h>
#include<conio.h>
void main()
{
int atm,pin,rup,ch,number,otp;
textbackground(RED);
clrscr();
printf("\t\t\t.....Welcome to the Bank.....\
\n\n\n\t\t\t.....Insert your card.....\n");
scanf("%d",&atm);
if(atm==1)
{
printf("\nEnter Your Pin\n");
scanf("%d",&pin);
if(pin==1234)
{

printf("\n1.Withdrawl\t\t\t\t\t2.Mini Statement\n3.Balance Enquiry\t\t\t\
\t4.Change Pin\t\t\t\t\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\n\t\t\t.....Please Enter Your Amount.....\t\t\t\t\n");
	scanf("%d",&rup);
	printf("\n\t\t\t.....Your Transaction is Processing\n\t\t\t\t.....Please Wait.....\n");
	printf("\n\t\t\t.....Thanks For Using Our Atm.....");
	break;
case 2: printf("\n\t\t\t\t.....Your Mini Statement Is #######.....\t\t\t\t");
	printf("\n\t\t\t\t.....Thanks For Using Our Atm.....\t\t\t\t");
	break;
case 3: printf("\n\t\t\t\t.....Your account balance is $$$$$$$$.....\t\t\t\t");
	printf("\n\t\t\t\t.....Thanks For Using Our Atm.....\t\t\t\t");
	break;
case 4: printf("\n1\t\t\t.....Enter Your Registered Mobile Number(RMN).....\n");
	scanf("%d",&number);
	printf("An OTP SMS Sent on your (RMN) Please Enter Your  6 digit OTP ");
	scanf("%d",&otp);
	printf("\n\t\t\t\t.....Enter your new Pin.....\n");
	scanf("%d",&pin);
	printf("\n\t\t\t\t.....Pin Changed Successfully.....");
	printf("\n\t\t\t\t.....Thanks For Using Our Atm.....");
	break;
default:
printf("\n\t\t\t\t.....Wrong Option.....");
}
}
else
printf("\n\t\t\t\t.....Wrong Pin.....");
}
else
  printf("\n\t\t\t\t.....Your Atm Is Blocked");
getch();
}