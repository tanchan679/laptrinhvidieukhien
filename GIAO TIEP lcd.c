#include <REGX52.H>

sbit LCD_RS = P2^0;
sbit LCD_E = P2^1;
#define  LCD_DATA P3;


void delay_ms(unsigned int t){
	int i, j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<123;j++);
	}
}
void init(unsigned char x){
	LCD_RS = 0;
	P3 = x;
//	P3 = 0xC0;
	LCD_E = 0;
    LCD_E = 1;
	if(x <= 0x02)
		delay_ms(2);
	else
		delay_ms(2);
}

void display_char(char a)
{
	LCD_RS = 1;
	P3 = a;
	LCD_E = 0;
    LCD_E = 1;
    delay_ms(2);
}

void displayString(char *a)
{
	unsigned int i=0;
	while(a[i]!=0)
	{
		display_char(a[i++]);
	}
}


void main(){
   LCD_RS = 0;
   LCD_E = 1;
   init(0x0e);
   displayString("TAN CU CHAN ICTU KTPM ");
   while(1)
   {
   	//Lam cai meo gi do de
   }
}

