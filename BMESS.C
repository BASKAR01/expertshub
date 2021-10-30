#include<stdio.h>
#include<conio.h>
void main()
{
float poori,ragul,sanjay,kamali;
float reat,seat,keat;
clrscr();
printf("\n\n Total poori are:");
scanf("%f",&poori);
printf("\nenter ragul's poori percentage;\n");
scanf("%f",&ragul);
printf("\nenter sanjay's poori percentage;\n");
scanf("%f",&sanjay);
reat=poori*ragul/100;
seat=poori*sanjay/100;
poori=poori-reat-seat;
printf("ragul's poori:%f\n",reat);
printf("sanjay's poori:%f\n",seat);
printf("balanced poori after ragul and sanjay ate:%f\n",poori);
printf("\nenter kamali's poori percentage:\n");
scanf("%f",&kamali);
keat=poori*kamali/100;
poori=poori-keat;
printf("kamali's poori:%f\n",keat);
printf("totalbalance after three members ate:%f",poori);
getch();
}

