#include<stdio.h>
#define BANANA 1.8
#define ORANGE 2.6

float getbanana(float w_b);
float getorange(float w_o);
float getpayment(float p_b,float p_o);
void display(float w_b,float w_o,float p_b,float p_o,float t_p);

int main()
{
	
	float weight_banana,weight_orange,price_banana,price_orange,total_price;
	
	printf("======================================\n");
	printf("              FRUIT STALL             \n");
	printf("======================================\n");
	printf("Enter the weight of Banana : ");
	scanf("%f",&weight_banana);
	printf("Enter the weight of Orange : ");
	scanf("%f",&weight_orange);
    printf("\n======================================\n");
    
    price_banana = getbanana(weight_banana);
    price_orange = getorange(weight_orange);
    total_price = getpayment(price_banana,price_orange);
    display(weight_banana,weight_orange,price_banana,price_orange,total_price);
    
    return 0;
}

float getbanana(float w_b)
{
	float price;
	price = w_b * BANANA;
	return price;
}
float getorange(float w_o)
{
	float price;
	price = w_o * ORANGE;
	return price;
}
float getpayment(float p_b,float p_o)
{
	float price;
	price = p_b + p_o;
	return price;
}
void display(float w_b,float w_o,float p_b,float p_o,float t_p)
{
	printf("\nPrice for 1kg of Banana : RM 1.80\n");
	printf("Price for 1kg of Orange : RM 2.60\n");
	printf("\nPrice for %.2f kg of Banana : RM%.2f",w_b,p_b);
	printf("\nPrice for %.2f kg of Orange : RM%.2f\n",w_o,p_o);
	printf("\nTotal price : RM%.2f\n",t_p);
	printf("\nThank you.");
}
