#include<stdio.h>
int main ()
{

char add ;

int choice,quantity , total; 

int burger , burgerq , burgert ;
int shawrma , shawrmaq , shawrmat ;
int pizza , pizzaq , pizzat ;
int cheesecake ,cheesecakeq ,cheesecaket ;
int chocolatecake ,chocolatecakeq ,chocolatecaket ;
int pepsi , pepsiq , pepsit ; 
int water , waterq , watert ;
int coffee , coffeeq , coffeet ;
int tea , teaq , teat ;


burger= 5000; 

shawrma=6000;

pizza = 15000;

cheesecake = 10000 ;

chocolatecake = 12000 ;

pepsi = 2000 ;

water = 1500;

coffee = 2000 ;

tea = 1500 ;


printf("menu :\n");
printf("1/ Burger: 5000 \n2/ Shawrma: 6000\n3/ Pizza: 15000\n");
printf("4/ cheesecake: 10000\n5/ chocolate cake: 12000\n");
printf("6/ Pepsi:2000\n7/ water :1500\n");
printf("8/ coffee:2000\n9/ Tea:1500\n");

add= 'y';

burgerq=0;
shawrmaq=0;
pizzaq=0 ;
cheesecakeq = 0 ;
chocolatecakeq = 0;
pepsiq = 0;
waterq = 0;
coffeeq = 0;
teaq = 0;


while (add=='y')
{

printf("enter your choice: ");
scanf("%d",&choice);

printf("enter your quantity: ");
scanf("%d",& quantity);

switch ( choice )

{

case 1:
burgerq=burgerq+quantity;
break;

case 2 : 
shawrmaq= shawrmaq + quantity;
break ;

case 3 :
pizzaq = pizzaq + quantity;
break ;

case 4 :
cheesecakeq = cheesecakeq + quantity;
break ;

case 5 : 
chocolatecakeq = chocolatecakeq + quantity ;
break ;

case 6 :
pepsiq = pepsiq + quantity; 
break ;

case 7 : 
waterq = waterq + quantity;
break ;

case 8:
coffeeq =coffeeq + quantity;
break ;

case 9 : 
teaq =teaq + quantity;
break ;

default:
printf("wrong choice\n");

}


printf("to add an order send -y- or any character to end\n");
scanf(" %c",&add);


}

printf("--------BILL--------\n");
burgert=burger*burgerq;
if(burgert>0)
{
printf("%d burger: %d \n",burgerq ,burgert);
}

shawrmat = shawrma * shawrmaq ;
if(shawrmat>0)
{
printf("%d shawrma : %d\n",shawrmaq ,shawrmat);
}

pizzat = pizza * pizzaq ;
if(pizzat>0)
{
printf("%d pizza : %d\n",pizzaq,pizzat);
}

cheesecaket =cheesecake * cheesecakeq ;
if(cheesecaket>0)
{
printf("%d cheesecake : %d\n",cheesecakeq ,cheesecaket );
}

chocolatecaket = chocolatecake * chocolatecakeq ;
if(chocolatecaket>0)
{
printf("%d chocolatecake : %d\n",chocolatecakeq ,chocolatecaket);
}

pepsit = pepsi * pepsiq ;
if(pepsit>0)
{
printf("%d pepsi : %d\n",pepsiq ,pepsit );
}

watert = water * waterq ;
if(watert>0)
{
printf("%d water : %d\n", waterq ,watert);
}

coffeet = coffee * coffeeq;
if(coffeet>0)
{
printf("%d coffee : %d\n",coffeeq, coffeet);
}

teat = tea * teaq ; 
if(teat>0)
{
printf("%d tea : %d\n",teaq, teat ) ;
}

total = shawrmat + burgert + pizzat + cheesecaket + chocolatecaket + pepsit + watert + coffeet + teat ;
printf("total : %d\n",total);


return 0;

}