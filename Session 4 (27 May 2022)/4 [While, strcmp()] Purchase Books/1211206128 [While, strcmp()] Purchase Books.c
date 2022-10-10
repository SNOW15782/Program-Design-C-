//Name: Muhamad Arif Bin Sallehuddin
//ID no:
//Lab 4 Question 4
#include <stdio.h>
#include <string.h>

int main (void)
{
    char bookCode [5]; // declare character
    int book_quantity;
    int choices;
    int bookCode1;
    int bookCode2;
    int bookCode3;
    int total_book1;
    int total_book2=0;
    int total_book3;
    float price;
    float totalBill =0.0;
    float bill; //declare float

        printf ("Would you like to purchase books [Type 1 to continue]: ");
        scanf ("%d",& choices);

        if (choices == 1)
    {

        while (choices == 1)
    {
        printf ("Enter book code : ");
        scanf ("%s", &bookCode);

        bill = 0.0;

        if (strcmp(bookCode,"B1001")==0)
    {
            printf("Enter quantity : ");
		    scanf("%d", &bookCode1);
			price=34.50;
			bill=bookCode1*price;
			total_book1=total_book1+bookCode1;
    }

        else if (strcmp(bookCode,"B1002")==0)
    {
   			printf("Enter quantity : ");
		    scanf("%d", &bookCode2);
	    	price=77.30;
	    	bill=bookCode2*price;

	    	total_book2=total_book2+bookCode2;
	}

        else if (strcmp(bookCode,"B1003")==0)
    {
            printf("Enter quantity : ");
		    scanf("%d", &bookCode3);
	    	price=54.90;
	    	bill=bookCode3*price;
	    	total_book3=total_book3+bookCode3;
    }
        else
        {
        printf("Your Book code is invalid. Current purchase cancelled.\n");
        }

        if (bill != 0.0)
        printf("Bill: RM %.2f\n", bill);
        totalBill = totalBill + bill;

        printf("\nWould you like to continue [Type 1 to continue] :");
	    scanf("%d", &choices);
    }
        printf("\nTotal Collection: %.2f\n", totalBill);
        printf("Total Book 1 sold : %d\n",total_book1);
        printf("Total Book 2 sold : %d\n",total_book2);
        printf("Total Book 3 sold : %d\n",total_book3);
    }
	else
    {
    	printf("No purchase made.\n");
    }
//finished
return (0);
}

