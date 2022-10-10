#include <stdio.h>
#include <string.h>
int main (void)
{
int name[50], number_of_days, room_type;
char room_code;
float room_price, bill;

printf("---------------------------------------------------------------\n");
printf ("WELCOME TO LEGEND HOTEL\n");
printf ("---------------------------------------------------------------\n");
printf ("Rooms : Deluxe(1 or D)\t Twin Sharing(2 or T)\t Single(3 or S)\n");

printf ("Enter your name: ");
scanf ("%s", name);

printf ("\nEnter room code: ");
scanf (" %c", &room_code);

printf ("\nEnter number days: ");
scanf ("%d", &number_of_days);


switch (room_code)
{
case '1':
case 'D':
        strcpy (room_type, "Deluxe");
        room_price = 200.00;
        break;

case '2':
case 'T':
        strcpy (room_type, "Twin Deluxe");
        room_price = 170.00;
        break;

case '3':
case 'S':
        strcpy (room_type, "Single");
        room_price = 120.00;
        break;
}

printf ("Customer name : %s\n", name);
printf ("Room type : %d\n", room_type);
printf ("Room Price: %.2f", room_price);
printf ("Number of days: %d\n", number_of_days);
printf ("Bill: %.2f\n", bill = room_price * number_of_days);

return (0);
}
