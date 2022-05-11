#include <REGX52.H>

void UART_TRUYEN_DU_LIEU(unsigned char x)
{
	SBUF = b;	 //Gan du lieu truyen bang x
	while(TI == 0);	   //Vong lap kiem tra cho den khi bit TI dat muc 0
	p3_1=0;
	p3_1 = 1;
}

void main(){//ctr chinh
     SM0 = SM1 = 0;//uart MODE 0
	 while(){
	 //Goi ham UART_TRUYEN_DU_LIEU thuc hien cong viec
	 }
}