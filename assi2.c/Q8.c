/*Q8.Write a program thantt will calculate the price for a quantity entered from the keyboard, given
  that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
  percent discount for quantities over 50.
 */
#include<stdio.h>
int main()
{
	int quantity;
	float unit_price = 5.0f;
	float total_price,discount = 0.0f;
	printf("Enter the quntity of item:");
	scanf("%d",&quantity);

	total_price = quantity * unit_price;
	if(quantity > 50)
	{
		discount = 0.15f;//15% discount
	}
	else if(quantity>30 )
	{
		discount = 0.10f;// 10% discount
	}
	//apply discount if applicable
	if(discount>0.0f)
	{
		total_price *= (1.0f - discount);
	}

	printf("total price is %.2f\n",total_price);


}
