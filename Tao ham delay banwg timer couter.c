#include <REGX52.H>


void delay(int t)
{
	do{
		//KHOI tao gia tri ban dau cho thanh ghi Timer0
		TL0 = 0X18;	 
		TH0 = 0xFC;		  //=.64536 => Thanh ghi 16 bit co gia tri toi da 65536, 1000 xung nhip thuc chip thuc hien trong 1ms

		TR0=1;//Khoi dong timer0
		while(!TF0);// co chan bo nho bang 1
		TF0=0;
		TR0=0;//dong lai timer0
		t--;
	}while(t!=0);
}


void main(){//ctr chinh
     TMOD &=0XF0;//xOA CAC BIT DIEU KHIEN T0 trong thanh ghi TMOD
	 TMOD |= 0x01//Chon mode cho timer0

	 while(1)
	 {
	 	//thuc hien cai gi do
		 delay(100);
	 }
}