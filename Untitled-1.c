#include <REGX52.H>
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
int x=0;
void delay(int t)
{	
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<123;j++);
	}
}

void delay(void) //d?nh nghia hàm delay
{
TMOD=0x01; //ch?n timer0 ch? d? 1 16Bit
TL0=0x00; //n?p giá tr? cho TL0
TH0=0xEE; //n?p giá tr? cho TH0
TR0=1; //kh?i d?ng timer0
	while(!TF0){} //vòng l?p ki?m tra c? 	
TR0=0; //ng?ng timer0
TF0=0; //xóa c? TF0
}


void NGAT_EX0(void) interrupt 0{
	x++;
	if(x>9)
		x=0;
}
void NGAT_EX1(void) interrupt 2{
	x--;
	if(x<0)
		x=9;
}
sbit led=P0^1; //Khai bao chan gan led


void INT_Timer1()interrupt 3 {
          //ctr phuc vu ngat
          led=!led; //Dao bit
}
void main(){//ctr chinh
          TMOD=0x20;//Sd Timer1 che do 8bit tu nap lai (ngat timer)
          TH1=TL1=0x00;//Nap gia tri bat dau 8bit
          TR1=1;//Khoi dong timer1
          ET1=1;//Ngat timer1
          EA=1;//Cho phep ngat
          while(1){//vong lap vo tan
                    //code ctr
          }
}