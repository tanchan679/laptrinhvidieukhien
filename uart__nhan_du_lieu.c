#include <REGX52.H>



void main(){//ctr chinh
     SM0 = SM1 = 0;//uart MODE 0
	 REN = 0;//Cho phep nhan du lieu

	 while(1){
	 	P3_3 = 0;
		P3_3 = 1;

		RI=0;	//cHN ri = 0 CAP XUNG DICH DU LIEU
		while(RI == 0); //vong lap cho toi khi bit RI dat muc 0
		P2 = SUBF; //gAN bye P2 trong vdk bang voi SBBF
	 }
}