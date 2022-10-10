#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//GLOBAL DEFINITION
#define COUPON 0.1 //10 percent for coupon holder
#define SENIOR 0.5 //50 percent for 60+
#define CHILD 0.3 //30 percent for 7 below
#define VAT 0.06//6% tax

// Defining Structure
struct destination  //destination structure - Arif
{
	float price;
	float total_price;
    float total_price1;
};
struct customer  //customer structure  - Arif
{
    char email[100];
	char name [100]; //use if and else statement
    char phone_number[20];
};

//Function declaration
void Add_user();        //void w/o parameter
void Get_printticket();
void Get_Exit();
void details();
void Get_bookpackage();
void calculate();
float DISC(float price);//non-void with parameter
void fare(int AB);
int inter();            //non-void w/o parameter
int Domestic();
int Get_list();

//Global variables
char place[90];
float price;
float Tax;
float discount;
int countc;
int counts;
int counta;
struct destination login;
struct customer ADD;

int main()
{
    int choice;
    int A[3];
    int i;
    int *ptr;
    ptr=A;
    //ptr=A[0]

    printf("For security purpose,please enter all numbers below\n\n");
    printf("\t432\t983\t4831\n");


    for(i=0;i<3;i++)//loop 3 times for user key in 3 numbers
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&*(ptr+i));   //pointer based notation
    }

     if(A[0]==432 && A[1]==983 && A[2]==4831)//if user key in correctly
        {
            printf("\n");
            printf("%d\t%d\t%d\n",A[0],A[1],A[2]);//Array based notation
            printf("You enter the correct numbers\n\n");
            system("PAUSE");
            system("CLS");

            printf("\t\t\t\t\t===============================\n");
            printf("\t\t\t\t\tWELCOME TO TRAVEL SENSE AGENCY \n");
            printf("\t\t\t\t\t===============================\n");

            printf ("\t\t\t\t\tBook Package - 1\n");
            printf ("\t\t\t\t\tExit         - 2\n");
            printf ("\n\t\t\t\t\tEnter Here: ");
            scanf  ("%d",&choice);

            printf("\n");

            switch(choice)
            {
                case 1: Add_user();//function call
                        system ("CLS");//clear screen
                        Get_bookpackage();
                        printf("\n");
                        Get_printticket();
                        printf("\n\n");
                        Get_Exit();
                        break;
                case 2: Get_Exit();
                        break;
                default:printf("\t\t\t\t\tPlease enter the correct number\n\n");
                        main();
                        break;
            }
        }
        else
        {
            printf("You are a robot\n");
            Get_Exit();
        }
    return(0);
}
void Add_user()
{
    FILE *fwrite,*fread;
    fwrite=fopen("ADD_USER.txt","w");

    if(fwrite ==NULL)//if the file doesn't exist
    {
        printf ("File is not found.\n");
        exit(1); //0 to terminate 1 is sucessful
    }
    else
    {
        fflush(stdin);

        printf("Enter your name :");
        gets(ADD.name);

        fflush(stdin);

        printf("Enter your phone number (without(-)) :");
        scanf("%s",ADD.phone_number);

        printf("Enter your Email address :");
        scanf("%s",ADD.email);

        fflush(stdin);
        fprintf(fwrite,"%s\t%s\t%s",ADD.name,ADD.phone_number,ADD.email);
    }
    fclose(fwrite);
}
void Get_bookpackage()
{
    int AB;

    AB=Get_list(); //function call expected to return something

    fare(AB);//function call send int AB
    printf("\n");
    system("PAUSE");//to pause the system before continue running the program

    details();//function call
    printf("\n");
    system("PAUSE");
}
int Get_list()
{
    int x,choice;

    printf("\t\t\t\t1.International Tour Package\n");
    printf("\t\t\t\t2.Domestic Tour Package \n\n");
    printf("\t\t\t\tEnter Your Choice : ");
    scanf("%d",&x);

    switch(x)
    {
        case 1: choice=inter();//function call
                break;
        case 2: choice=Domestic();
                break;
        default:printf("\n\t\t\t\tPlease enter the correct number\n\n");
                Get_bookpackage();
                break;
    }
    return(choice);
}
int inter()
{
    int x;

    system("CLS");//Clearing Screen

    printf("1.Korea Tour  Package\n"); //1 ticket is 2500 ringgit
    printf("\tDuration: 8 Days 7 Nights"); //8 days 7 Nights
    printf("\n\tPlaces to visit:\n");

    printf("\ti. Incheon \n");
    printf("\t\ta. Seoul Central Masjid \n");
    printf("\t\tb. Incheon Grand Park\n");
    printf("\t\tc. Incheon Jayu Park\n");

    printf("\tii.  Gangwon-do \n");
    printf("\t\ta. Nami Island\n");

    printf("\tiii. Seoul\n");
    printf("\t\ta. N Seeoul Tower\n");
    printf("\t\tb. National Folk Museum of Korea\n");
    printf("\t\tc. Gyeongbokgung\n");
    printf("\t\td. Bukchon Hanok Village \n\n");

    printf("\t+Include flight ticket from KLIA to Korea International Airport and return ticket\n");
    printf("\t+Include Bus Tour +flights to Jeju Island\n");

    printf("\n2.Japan Tour package\n"); //1 ticket is 3000 ringgit
    printf("\tDuration:9 Days 8 Nights");
    printf("\n\tPlaces to visit:\n");

    printf("\ti. Kyoto\n");
    printf("\t\ta.Nijo Castle\n");
    printf("\t\tb.Fushimi-Inari\n");
    printf("\t\tc.Kinkau-ji\n");
    printf("\t\td.Sanjusangen\n");
    printf("\t\te.Shinkansen Ride o Fukuoka Ohori Park\n");

    printf("\tii.Osaka\n");
    printf("\t\ta.Osaka castle\n");
    printf("\t\tb.Tempozan ferris\n");
    printf("\t\tc.Osaka Aquarium\n");

    printf("\tiii.Kobe\n");
    printf("\t\ta.The Kobe Port Tower\n");
    printf("\t\tb.Takenaka Museum\n");
    printf("\t\tc.kalikyo bridge\n");
    printf("\t\td.Climb mount rokko\n");
    printf("\t\te.Oji zoo\n\n");

    printf("\t+Include flight ticket from KLIA to Osaka International Airport and return ticket\n");
    printf("\t+Include Bus Tour\n");
    printf("\t+Shopping Voucher \n");

    printf("\n3.Thiland Tour  Package \n"); //1 ticket is 3400 ringgit
    printf("\tDuration: 12 Days 11 Nights");
    printf("\n\tPlaces to visit:\n");

    printf("\ti.Hat-Yai\n");
    printf("\t\ta.Trimongkol\n");
    printf("\t\tb.Pirates Park\n");
    printf("\t\tc.Songkhla Central Mosque\n");
    printf("\t\td.Greenway night market\n");

    printf("\tii.Trang\n");
    printf("\t\ta.Ko Kradan\n");
    printf("\t\tb.Ko Muk\n");
    printf("\t\tc.Ko Rok Noi\n");
    printf("\t\td.Pak meng beach\n");

    printf("\tiii.Krabi\n");
    printf("\t\ta.Railay beach\n");
    printf("\t\tb.Thung Teao Forest Park\n");
    printf("\t\tc.Wat Tham Sua\n");
    printf("\t\td.Phi Phi Island\n\n");

    printf("\t+Include flight ticket from KLIA to Hat Yai International Airport and return ticket\n");
    printf("\t+Include Bus Tour + bike ride\n");
    printf("\t+Public Transportation Pass\n");
    printf("\t+Travel Kit\n\n");


    printf("Enter your choice: ");
    scanf("%d",&x);

    printf("\n");
    //price might change int non-array
    if(x==1)
    {
        strcpy(place,"Korea  Tour Package");
        login.price=4300.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else if(x==2)
    {
        strcpy(place,"Japan Tours Package");
        login.price=4500.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else if(x==3)
    {
        strcpy(place,"Thailand tour package");
        login.price=3500.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else
    {
        printf("Please Enter Correct Choice...\n");
        system("PAUSE");
        system("CLS");
        Domestic();
    }
    return(x);
}
int Domestic()
{
    int x;

    //use different number such as 4,5,6 to differentiate between places

    system("CLS");//Clearing Screen

    printf("4.Pulau Langkawi Grand Tour Package\n"); //1 ticket is 999 ringgit
    printf("\tDuration: 5 Days 4 Nights"); //5 days 4 Nights
    printf("\n\tPlaces to visit:\n\t1. Langkawi Sky Bridge\n\t2. Dataran Lang(Eagle Square)\n\t3. Makam Mahsuri\n\t4. Langkawi Cable Car\n");
    /* Output should be like this
    Places to visit:
        1. Langkawi Sky Bridge
        2. Dataran Lang (Eagle Square)
        3. Makam Mahsuri
        4. Langkawi Cable Car*/
    printf("\t+Include direct flight ticket from KLIA to Langkawi International Airport Kedah and return ticket\n");
    printf("\t+Include Bus Tour + Ferry transportation\n");

    printf("\n5.Melaka Heritage Tours Package\n"); //1 ticket is 599 ringgit
    printf("\tDuration: 3 Days 2 Nights");
    printf("\n\tPlaces to visit:\n\t1. Zoo Melaka\n\t2. Stadthuys Building and A Famosa fort\n\t3. Jonker Walk + Melaka River Cruise\n\t4. Muzium Melaka\n");
     /* Output should be like this
    Places to visit:
        1. Zoo Melaka
        2. Stadthuys Building and A Famosa fort
        3. Jonker Walk + Melaka River Cruise
        4. Muzium Melaka*/
    printf("\t+Include Bus Tour\n");
    printf("\t+Dataran Pahlawan Shopping Voucher \n");

    printf("\n6.Kuala Lumpur History Lane Package \n"); //1 ticket is 449 ringgit
    printf("\tDuration: 4 Days 3 Nights");
    printf("\n\tPlaces to visit:\n\t1. Tugu Negara (National Monument)\n\t2. KLCC Skybridge\n\t3. KL Tower + Dataran Merdeka (Merdeka Square)\n\t4. Zoo Negara \n\t5.Petaling Street(Formerly known as Chinatown\n");
     /* Output should be like this
    Places to visit:
        1. Tugu Negara (National MMonument)
        2. KLCC Skybridge
        3. KL Tower + Dataran Merdeka (Merdeka Square)
        4. Zoo Negara
        5.Petaling Street(Formerly known as Chinatown)*/
    printf("\tInclude Bus Tour + Go KL Double Decker Bus\n");
    printf("\t+Public Transportation Prepaid Card (TNG) worth of 50 ringit\n");
    printf("\t+Kuala Lumpur Handmade Travel Kit\n\n");
    printf("Enter your choice: ");
    scanf("%d",&x);

    printf("\n");
    //price might change int non-array
    if(x==4)
    {
        strcpy(place,"Pulau Langkawi Grand Tour Package");
        login.price=999.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else if(x==5)
    {
        strcpy(place,"Melaka Heritage Tours Package");
        login.price=599.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else if(x==6)
    {
        strcpy(place,"Kuala Lumpur History Lane Package");
        login.price=449.00;
        printf("The price for one adult is RM%.2f",login.price);
        printf("\n\n");
        system("PAUSE");
    }
    else
    {
        printf("Please Enter Correct Choice...\n");
        system("PAUSE");
        system("CLS");
        Domestic();
    }
    return(x);
}
void fare(int AB)
{
    system("CLS");//clear the screen

    if(AB==1)
    {
        calculate();
    }
    else if(AB==2)
    {
        calculate();
    }
    else if(AB==3)
    {
        calculate();
    }
    else if(AB==4)
    {
        calculate();
    }
    else if(AB==5)
    {
        calculate();
    }
    else if(AB==6)
    {
        calculate();
    }

}
void calculate()//to add members
{
    char answer,YN;
    int age,x=0,p=0;
    login.total_price=0.0;
    login.total_price1=0.0;
    counta=0;
    countc=0;
    counts=0;

    //do-while loop to ask the user to key in age before adding another members
    do{
        printf("\nEnter age for person %d :",p+1);
        scanf("%d",&age);
        	if(age<7)
            {
                price=login.price-(CHILD*login.price);
                x=1;
                countc=countc+x;
            }
        	else if (age>54)
            {
                price=login.price-(SENIOR*login.price);
                x=1;
                counts=counts+x;
            }
        	else
            {
                price=login.price;
                x=1;
                counta=counta+x;
            }

        printf("Fare is RM%.2f\n\n",price);

        login.total_price=login.total_price+price;

        p++;

        fflush(stdin);

        printf("Add group member [Y/N]: ");
        scanf("%c",&answer);

    }while(answer=='Y'||answer=='y');

    fflush(stdin);
    printf("Do you have any coupon?[Y/N]:");
    scanf("%c",&YN);
    fflush(stdin);
    if(YN=='Y' || YN=='y')
    {
        discount=DISC(login.total_price);
    }

    Tax=(login.total_price-discount)*VAT;
    login.total_price1=login.total_price+Tax-discount;

    printf("\n");
    printf("Fare       : RM%.2f\n",login.total_price);
    printf("Discount   ; RM%.2f\n",discount);
    printf("Tax        : RM%.2f\n",Tax);
    printf("Total fare : RM%.2f\n",login.total_price1);
}
float DISC(float price)
{
    FILE *rcoupon;
    rcoupon=fopen("Coupon.txt","r");
    rcoupon=fopen("Coupon.txt","r");

    char coupon[90],coupon1[90];
    float percentage;
    discount=0.0;

    if(rcoupon ==NULL)//if the file doesn't exist
    {
        printf ("File is not found.\n");
        exit(1); //0 to terminate 1 is sucessful
    }
    else
    {
        while(fscanf(rcoupon,"%s%f",coupon,&percentage)==1);
        {
            printf("\n");
            printf("Enter your coupon : ");
            scanf("%s",coupon1);
            if(strcmp(coupon,coupon1)==0)
            {
                discount=price*percentage;
            }
            else//problem, discount is not updated
            {
                printf("You enter an invalid coupon\n");
                system("PAUSE");
                printf("\n");
                DISC(price);
            }
        }
    }
    return(discount);
}
void details()
{
    //display all the information regarding the user
    //display the tour information
    int i;
    system("CLS");

    printf("\t\t\t\tYour Email    :%s\n",ADD.email);
    printf("\t\t\t\tYour Full Name:%s\n",ADD.name);
    printf("\t\t\t\tYour Phone No.: %s\n\n",ADD.phone_number);
    printf("\t\t\t\tTrip package to %s\n",place);
    printf("\t\t\t\tAdult : %d\n",counta);
    printf("\t\t\t\tChild : %d\n",countc);
    printf("\t\t\t\tSenior: %d\n\n",counts);

    printf("\t\t\t\tFare               : RM%.2f\n",login.total_price);
    printf("\t\t\t\tDiscount           : RM%.2f\n",discount);
    printf("\t\t\t\tTax                : RM%.2f\n",Tax);
    printf("\t\t\t\tYour Total Price is: RM%.2f\n\n", login.total_price1);

    printf("\t\t\t\tDo you wish to \n");
    printf("\t\t\t\t1.Continue\n");
    printf("\t\t\t\t2.Edit numbers of person\n");//to edit members
    printf("\t\t\t\t3.Cancel the booking\n");//to cancel the booking
    printf("\t\t\t\tEnter here :");
    scanf("%d",&i);

    //for edit and delete
    if(i==1)
    {
        printf("\t\t\t\tContinue to print the receipt");
    }
    else if(i==2)
    {
        system("CLS");
        calculate();//to enter the no. of members again
        details();
    }
    else if(i==3)
    {
        Get_Exit();
        exit(0);//will exitting the program
    }

}
void Get_printticket()
{
    FILE *fwrite,*fread; //declaration of pointer for file

    fread = fopen("ADD_USER.txt","r");//to open the file
    fwrite = fopen ("Receipt.txt", "w");

    int i;

    printf("Your ticket is printing please check at the download folder");

    if(fwrite ==NULL)//if the file doesn't exist
    {
        printf ("File is not found.\n");
        exit(1); //0 to terminate 1 is sucessful
    }
    else
    {
       while(fscanf(fread,"%s%s%s",ADD.name,ADD.phone_number,ADD.email)==4);
        {
            fprintf(fwrite,"Your email    :%s\n",ADD.email);
            fprintf(fwrite,"Your Full Name:%s\n",ADD.name);
            fprintf(fwrite,"Your Phone No.: %s\n\n",ADD.phone_number);

            fprintf(fwrite,"Trip package to %s\n",place);
            fprintf(fwrite,"Adult : %d\n",counta);
            fprintf(fwrite,"Child : %d\n",countc);
            fprintf(fwrite,"Senior: %d\n\n",counts);

            fprintf(fwrite,"Fare               : RM%.2f\n",login.total_price);
            fprintf(fwrite,"Discount           : RM%.2f\n",discount);
            fprintf(fwrite,"Tax                : RM%.2f\n",Tax);
            fprintf(fwrite,"Your Total Price is: RM%.2f\n\n", login.total_price1);

            fprintf(fwrite,"Thank You. \nFor further inquiries, you can email us at travelsense@mmu.edu.my\n");
            fprintf(fwrite,"Thank you choosing Travel Sense");
        }
    }
    fclose(fwrite); //close the file
    fclose(fread);
}
void Get_Exit()
{
    printf("Exiting the program...\n\n");
    printf("Developed By Group 11,DCP5101\n");
    printf("Brought To You By Travel Sense\n");
}
