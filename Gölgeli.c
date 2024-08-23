#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define pi 22/7


void Pencere(int X,int Y,int uzunluk,int yukseklik,char tip[],int Renk,int Crights,int shadow)
{
	int i,j;
    HANDLE  hConsole;
    
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, Renk);
	
	COORD c; 
    
	
	for(i=X;i<X+uzunluk;i++)
		for(j=Y;j<Y+yukseklik;j++)
		{
			c.X = i; //x coordinate as 50
		    c.Y = j; // y coordinate as 12
		    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
		    printf("%c",32);    				
		}
	char solustk,yataykenar,sagustk,duseykenar,solaltk,sagaltk;
	if(tip=="Cift")
	{
		solustk=201,yataykenar=205,sagustk=187,duseykenar=186,solaltk=200,sagaltk=188;
	}else
	{
		solustk=218,yataykenar=196,sagustk=191,duseykenar=179,solaltk=192,sagaltk=217;	

	}
	 
    c.X = X; //x coordinate as 50
    c.Y = Y; // y coordinate as 12
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    printf("%c",solustk);
    
	c.X = X+uzunluk;
    c.Y = Y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    printf("%c",sagustk);
    
    c.X=X;
    c.Y=Y+yukseklik;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    printf("%c",solaltk);
    
	c.X = X+uzunluk;
    c.Y = Y+yukseklik;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    printf("%c",sagaltk);
    
	  for(i=X+1;i<X+uzunluk;i++){
	  	c.X=i;
	  	c.Y=Y;
	  	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    	SetConsoleTextAttribute(hConsole, Renk);
		printf("%c",yataykenar);
    
		c.Y=Y+yukseklik;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    	printf("%c",yataykenar);
    	
	  }
	  for(i=Y+1;i<Y+yukseklik;i++){
	  	c.X=X;
	  	c.Y=i;
	  	SetConsoleTextAttribute(hConsole, Renk);
		
		  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    	printf("%c",duseykenar);
    
    	c.X=X+uzunluk;
    	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    	printf("%c",duseykenar);
    	
    	
	  }
	  c.X=X+1;
	  c.Y=Y;
	  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	  
	  printf("%c",177); 

	  c.X=X+1;
	  c.Y=Y+yukseklik;
	  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	if(Crights==1){
	
	  printf(" AHK Software--All rights reserved. "); 

}
	

	if(shadow==1)
	{
		SetConsoleTextAttribute(hConsole, 1);
		for(i=X+1;i<X+1+uzunluk;i++)
		{
			c.X=i;
			c.Y=Y+yukseklik+1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf(" "); 
		}
		for(i=Y+1;i<Y+2+yukseklik;i++)
		{
			c.Y=i;
			c.X=X+uzunluk+1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf(" "); 
		}
	}
}



void yaz(int X, int Y,char text[40],int Renk){
	COORD c;
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,Renk);
	c.X=X;
	c.Y=Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    printf("%s",text);
    c.X=0;
	c.Y=0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 

    
}	


int enbuyukbul(char dizi[5][40]){
	int i,j,uzunluk[5],enbuyuk;
		for(i=0;i<5;i++){
			uzunluk[i]=strlen(dizi[i]);
		}	
	enbuyuk=uzunluk[0];
	for(i=0;i<5;i++){
		if(enbuyuk<uzunluk[i]){
			enbuyuk=uzunluk[i];
		}
	}
	return enbuyuk;
}
int toplamuzunluk(char dizi[5][40]){
	int i,j,uzunluk[5],top=0;
		for(i=0;i<5;i++){
			uzunluk[i]=strlen(dizi[i]);
		}
		for(i=0;i<5;i++){
			top=top+uzunluk[i];
		}
		return top;
}
void length(int uzunluk[5],char dizi[5][40]){
	int i,j;
		for(i=0;i<5;i++){
			uzunluk[i]=strlen(dizi[i]);
		}
}

int menu(char list[5][40],int Renk,int X,int Y){
	int i;
	char t;
	
	
 	HANDLE  hConsole;
    
	COORD c; 
	int s = enbuyukbul(list);
	Pencere(X,Y,s+2,6,"no",Renk,0,1);
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 31);
	
	c.X = X+1;
    c.Y = Y+1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
	printf("%s\n\n\n\n",list[0]);
	
	SetConsoleTextAttribute(hConsole, Renk);
	for(i=1;i<5;i++){
	
	c.X = X+1;
    c.Y = Y+1+i;
    
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
    
	printf("%s \n\n\n\n",list[i]);
	
}

    char input;
	int satir=0;
while (!(input==13))
{
    input = getch();
    if(input!=-32)
		yaz(X+1,Y+1+satir,list[satir],112);
			
    switch(input)
    {
    case -32: //This value is returned by all arrow key. So, we don't want to do something.
        break;
    case 72:
//        printf("up");
		if(satir>0)
			satir--;
        break;
    case 75:
//        printf("left");
        break;
    case 77:
//        printf("right");
        break;
    case 80:
    	if(satir<4)
    		satir++;
//        printf("down");
		break;
    default:
//        printf("INVALID INPUT!");
        break;
    }
	if(input!=-32)			
		yaz(X+1,Y+1+satir,list[satir],30);
	
	}
	if(input==13){	
		return satir;
	}
}
void degiskenlerogreten(){
	COORD c;
	int numara = 5698741;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Numaranin degeri %d \n",numara);
float numara2 = 12.46;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Numaranin degeri %.2f \n",numara2);
char ad[] = "Ahmet Harun KAYA -ahmetharun.kaya";
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Adýnýz ve Instagram kullanýcý adýnýz %s \n",ad);
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("ismin ilk harfi %c \n",ad[0]);
}
void notlar(){
	COORD c;
	
	int not1 = 96;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Genel Matematik 1 notunuz %d \n",not1);
	int not2 = 100;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Türk dili notunuz %d \n",not2);
	int not3 = 78;
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Genel kimya 1 notunuz %d \n",not3);
	int not4 = 100;
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Genel Fizik 1 notunuz %d \n",not4);
	int not5 = 65;
	c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Introduction to Computer Engineering notunuz %d \n",not5);
	int not6 = 71;
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Programlama Dilleri 1 notunuz %d \n",not6);
}

void superlig(){
	COORD c;
	int G = 9,   B= 2,    M= 13 - B - G,   P= 3*G + B;
	c.X=21;
	c.Y=10;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Takým Adý             G     B     M     P    \n");
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("1) Fenerbahce         %d     %d     %d     %d\n", G, B, M, P);
	int G2 = 8,  B2 = 3,  M2 = 13 - B2 - G2,  P2 = 3*G2 + B2;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("2) Galatasaray        %d     %d     %d     %d \n", G2, B2, M2, P2);
	int G3 = 6,  B3 = 6,  M3 = 13 - B3 - G3,  P3 = 3*G3 + B3;
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("3) Adana Demirspor    %d     %d     %d     %d \n", G3, B3, M3, P3);
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("4) Konyaspor          %d     %d     %d     %d \n", G3, B3, M3, P3);
	int G4 = 7,  B4 = 3,  M4 = 13 - B4 - G4,  P4 = 3*G4 + B4;
	c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("5) Medipol Basaksehir %d     %d     %d     %d \n", G4, B4, M4, P4);
	int G5 = 7,  B5 = 2,  M5 = 13 - B5 - G5,  P5 = 3*G5 + B5;
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("6) Kayserispor        %d     %d     %d     %d \n", G5, B5, M5, P5);
	int G6 = 6,  B6 = 5,  M6 = 13 - B6 - G6,  P6 = 3*G6 + B6;
	c.X=21;
	c.Y=17;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("7) Trabzonspor        %d     %d     %d     %d \n", G6, B6, M6, P6);
	int G7 = 6,  B7 = 4,  M7 = 13 - B7 - G7,  P7 = 3*G7 + B7;
	c.X=21;
	c.Y=18;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("8) Besiktas           %d     %d     %d     %d \n", G7, B7, M7, P7);
	int G8 = 4,  B8 = 5,  M8 = 13 - B8 - G8,  P8 = 3*G8 + B8;
		c.X=21;
	c.Y=19;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("9) Alanyaspor         %d     %d     %d     %d \n", G8, B8, M8, P8);
	int G9 = 4,  B9 = 4,  M9 = 13 - B9 - G9,  P9 = 3*G9 + B9;
		c.X=21;
	c.Y=20;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("10) Gaziantep FK      %d     %d     %d     %d \n", G9, B9, M9, P9);
	int G10 = 5,  B10 = 1,  M10 = 13 - B10 - G10,  P10 = 3*G10 + B10;	
		c.X=21;
	c.Y=21;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("11) Antalyaspor       %d     %d     %d     %d \n", G10, B10, M10, P10);
	int G11 = 4,  B11 = 3,  M11 = 13 - B11 - G11,  P11 = 3*G11 + B11;
		c.X=21;
	c.Y=22;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("12) Giresunspor       %d     %d     %d     %d \n", G11, B11, M11, P11);
    int G12 = 4,  B12 = 3,  M12 = 13 - B12 - G12,  P12 = 3*G12 + B12;
    	c.X=21;
	c.Y=23;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("13) Kasimpasa         %d     %d     %d     %d \n", G12, B12, M12, P12);
    int G13 = 4,  B13 = 2,  M13 = 13 - B13 - G13,  P13 = 3*G13 + B13;
    	c.X=21;
	c.Y=24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("14) Hatayspor         %d     %d     %d     %d \n", G13, B13, M13, P13);
	int G14 = 3,  B14 = 4,  M14 = 13 - B14 - G14,  P14 = 3*G14 + B14;
		c.X=21;
	c.Y=25;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("15) Karagumruk        %d     %d     %d     %d \n", G14, B14, M14, P14);
		c.X=21;
	c.Y=26;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("16) Ankaragucu        %d     %d     %d     %d \n", G14, B14, M14, P14);
	int G15 = 2,  B15 = 5,  M15 = 13 - B15 - G15,  P15 = 3*G15 + B15;
		c.X=21;
	c.Y=27;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("17) Sivasspor         %d     %d     %d     %d \n", G15, B15, M15, P15);
	int G16 = 2,  B16 = 2,  M16 = 13 - B16 - G16,  P16 = 3*G16 + B16;
		c.X=21;
	c.Y=28;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("18) Istanbulspor      %d     %d     %d     %d \n", G16, B16, M16, P16);
	int G17 = 1,  B17 = 4,  M17 = 13 - B17 - G17,  P17 = 3*G17 + B17;
		c.X=21;
	c.Y=29;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("19) Umraniyespor      %d     %d     %d     %d \n", G17, B17, M17, P17);
}

void dongulerbizisoyler(){
		int N,i,j;
		COORD c;
		c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&N);
	int T = 0;
	for( i=1;i<N;i++)
		for( j=1;j<N;j++){
		
			T = T + i + j;
		}c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d", T);
		
	
}

void ucgenolustur(){
		COORD c;
		c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
int i,n;
	int toplam=0;
	printf("Kaca kadar olan ardisik sayilari toplayayim?");
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&n);
	for(i=1;i<=n;i+=1){
		toplam=i+toplam;
		
	}
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d",toplam);
}

void Hesapmakinesi(){
	int a;
	int b,d;
	COORD c;
		c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Islem seciniz(Toplama:1 Cikarma:2 Bolme:3 Carpma:4): ")	;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&d);
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Ýki Sayi giriniz:");
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d  ",&a);
	c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&b);
	int toplam = a + b,fark=a-b, bolum=a/b,carpim=a*b ;
if(d==1){
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Sayilarin toplami: %d",toplam);
}
if(d==2){
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Sayilarin farki: %d",fark);
}
if(d==3){
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Sayilarin orani: %d",bolum);
}
if(d==4){
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Sayilarin carpimi: %d",carpim);
}
}

void Ucgenalani(){
	COORD c;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	float a;
	float b;
	printf("Taban ve yukseklik degerlerini giriniz:");
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%f",&a);
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%f",&b);
	float alan = (a*b)/2;
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Ucgenin alani: %.2f",alan);
}

void paranvami(){
	int para,a,b,x,d,e,f,g; 
	COORD c;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Bir para miktari giriniz");
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&para);
	a=para/200;
	b=(para%200)/100;
	x=((para%200)%100)/50;
	d=(((para%200)%100)%50)/20;
	e=((((para%200)%100)%50)%20)/10;
	f=(((((para%200)%100)%50)%20)%10)/5;
	g=(((((para%200)%100)%50)%20)%10)%5;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Paranizin bozdurulmasi icin en az banknot kullanilarak");
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 200 luk",a);
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 100 luk",b);
	c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 50 lik",x);
	c.X=21;
	c.Y=16;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 20 lik",d);
	c.X=21;
	c.Y=17;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 10 luk",e);
	c.X=21;
	c.Y=18;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane 5 lik",e);
	c.X=21;
	c.Y=19;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d tane bir lik gereklidir.",g);
}

void daire(){
	COORD c;
	c.X=21;
	c.Y=10;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Yapilacak islemi seciniz\n\n\n");
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Dairenin alanini hesaplamak icin 1 ve cevresi icin 2 yaziniz: ");
	int a,r;
	float alan,cevre;
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	scanf("%d",&a);
	if(a==1){
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dairenin yaricapini (r) giriniz: ");
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		scanf("%d",&r);
		alan=(float)pi*r*r;
		c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dairenin alani %f olur.",alan);
		}
	if(a==2){
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dairenin yaricapini (r) giriniz: ");
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		scanf("%d",&r);
		cevre=(float)2*pi*r;
	c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dairenin cevresi %f olur.",cevre);
		}
	else{
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Boyle bir islem bulunmamaktadir.");
	}
}

void ruskoyundecarpmayapioz(){
	COORD c;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	int i,bolumler[50],carpimlar[50],a,b,toplam=0,carpim;
printf("Carpilacak 2 sayiyi girin: ");
	c.X=21;
	c.Y=12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
scanf("%d",&a);
	c.X=21;
	c.Y=13;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
scanf("%d",&b);

for(i=1;bolumler[i-1]!=1;i++){
	if(a>=b){
	
		bolumler[0]=a;
		bolumler[i]=bolumler[i-1]/2;
		carpimlar[0]=b;
		carpimlar[i]=carpimlar[i-1]*2;
	}
	else if(a<b){
	
		bolumler[0]=b;
		bolumler[i]=bolumler[i-1]/2;
		carpimlar[0]=a;
		carpimlar[i]=carpimlar[i-1]*2;
	}
		if(bolumler[i]%2==1){
			toplam = carpimlar[i] + toplam ;
		}
		}
				
		carpim = a*b;
	c.X=21;
	c.Y=14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Iki sayinin gercek carpimi %d dir.\n",carpim);
c.X=21;
	c.Y=15;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
printf("Ve Rus koyluleri bu sayilari carptiginda %d sonucuna ulasiyorlar.",toplam);
}

void tekrarsayi(){
	
	int dizi [5],i,j;
	for(i=0;i<5;i++){
		COORD c;
	c.X=21;
	c.Y=11+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d. elemaný giriniz: ",i+1);
	scanf("%d",&dizi[i]);}
//	printf("\n\n");
	int toplam = 0, enbuyuk= dizi[0];
	for(j=0;j<5;j++){
		COORD c;
		c.X=21+j*5;
	c.Y=12+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("%d - ", dizi[j]);
		toplam +=dizi[j];
		if(enbuyuk<dizi[j]){
			enbuyuk=dizi[j];
		}
		
	}
	COORD c;
	c.X=21;
	c.Y=13+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Dizinin toplami = %d",toplam);
	
	c.Y=14+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dizinin ortalamasi = %d",toplam/5);
		
//	c.Y=15+i;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//		printf("Dizinin en büyük elemaný = %d",enbuyuk);
	
}

void enbuyukdizielemani(){
	int dizi [5],i,j;
	for(i=0;i<5;i++){
		COORD c;
	c.X=21;
	c.Y=11+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d. elemani giriniz: ",i+1);
	scanf("%d",&dizi[i]);}
//	printf("\n\n");
	int toplam = 0, enbuyuk= dizi[0];
	for(j=0;j<5;j++){
		COORD c;
		c.X=21+j*5;
	c.Y=12+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("%d - ", dizi[j]);
		toplam +=dizi[j];
		if(enbuyuk<dizi[j]){
			enbuyuk=dizi[j];
		}
		
	}
	COORD c;
	c.X=21;
	c.Y=13+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Dizinin en buyuk elemaný = %d",enbuyuk);

//	printf("Dizinin toplamý = %d",toplam);
	
//	c.Y=14+i;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//		printf("Dizinin ortalamasý = %d",toplam/5);
		
//	c.Y=15+i;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	}
	

void terscevir(){
	int i,j,gecici,karisik[6]={3,45,3,98,75,12},bakambi[6];

	for(i=0;i<6;i++){
			COORD c;
	c.X=21;
	c.Y=11+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("Karisik dizinin %d. elemanini gir: ",i+1);
		scanf("%d",&karisik[i]);
	}
	for(j=0;j<6;j++){
	for(i=0;i<5-j;i++){
		if(karisik[i]>karisik[i+1]){
			gecici=karisik[i];
			karisik[i]=karisik[i+1];
			karisik[i+1]=gecici;
				}
			}
		}
	for(i=0;i<6;i++){	
	COORD c;
	c.X=21;
	c.Y=17+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("%d)%d",i+1,karisik[i]);
	}
}

void rastgeledizi(){
	int dizi[5],rastgele,i,j;
srand(time(NULL)); 
for(i=0;i<=5;i++){
	dizi[i]=rand()%100;
}
for(i=0;i<5;i++){
	COORD c;
	c.X=21+3*i;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("%d ",dizi[i]);
}


}

void carpimatris(){
	COORD c;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	int matris1[2][2],matris2[2][2],cmatris[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c.X=21;
	c.Y=11+i+j*2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("1. matrisin %d. satir %d. sutunundaki sayi: ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c.X=21;
	c.Y=15+i+j*2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("2. matrisin %d. satir %d. sutunundaki sayi: ",i+1,j+1);
			scanf("%d",&matris2[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cmatris[i][j]=matris1[i][j]*matris2[i][j];
		}
		
	}
	c.X=21;
	c.Y=19;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Carpim matrisi: ");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c.X=37+j*4;
			c.Y=19+i;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",cmatris[i][j]);
			
		}
	}
}

void transpoze(){
	int duzdizi[5][5],transpoze[5][5],i,j,d,f;
	srand(time(NULL)); 
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			duzdizi[i][j]=rand()%100;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			transpoze[i][j]=duzdizi[j][i];
		}
	}
	COORD c;
	c.X=21;
	c.Y=11;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Rastgele girilimis ilk iki boyutlu dizimiz: \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			c.X=21+j*3;
			c.Y=12+i;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",duzdizi[i][j]);		
		}
	
	}
//	printf("\n\n\n\n\n");
			c.X=21;
			c.Y=21;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Ilk dizinin transpozesi: \n");
	for(d=0;d<5;d++){
		for(f=0;f<5;f++){
			c.X=21+f*3;
			c.Y=22+d;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",transpoze[d][f]);		
		}
		
	}
}

void matrisenbyk(){
	COORD c;
	int duzdizi[5][5],i,j,enbuyuk,enkucuk;
	srand(time(NULL)); 
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			duzdizi[i][j]=rand()%100;
		}
	}
		enbuyuk=duzdizi[0][0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(enbuyuk<duzdizi[i][j]){
				enbuyuk=duzdizi[i][j];
			}
		}
	}
	enkucuk=duzdizi[0][0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(enkucuk>duzdizi[i][j]){
				enkucuk=duzdizi[i][j];
			}
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			c.X=21+j*3;
			c.Y=11+i;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",duzdizi[i][j]);
			printf("%d ",duzdizi[i][j]);		
		}
		
	}
	
			c.X=21;
			c.Y=16;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Dizinin en buyuk elemani %d olur.\n\n",enbuyuk);
	c.X=21;
			c.Y=17;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Dizinin en kucuk elemani %d olur.\n\n",enkucuk);
}

void satirtoplam(){
	int duzdizi[5][5], yenidizi[5][6], i, j;
	  srand(time(NULL));

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      duzdizi[i][j] = rand() % 100;
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      yenidizi[i][j] = duzdizi[i][j];
    }
  }

  for (i = 0; i < 5; i++) {
    yenidizi[i][5] = 0;
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      yenidizi[i][5] += duzdizi[i][j];
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 6; j++) {
    	COORD c;
    	c.X=21+j*3;
			c.Y=11+i;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
      printf("%d ", yenidizi[i][j]);
    }
    
  }
  COORD c;
    	c.X=21;
			c.Y=20;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("Bu programda son sutun ondan oncaki bes sutunun toplamina esittir.");
}

void farklimatris(){
	COORD c;
		int matris[5][5],i,j,fark[5][4],enbfark,enkfark;
	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matris[i][j]=rand()%100;
		}
	}
	c.X=21;
			c.Y=11;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Bilgisayarin sectigi random matris: \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			c.X=21+3*j;
			c.Y=12+i;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",matris[i][j]);
		}

	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			fark[j][i]=matris[j][i]-matris[j+1][i];
	}
	}
	c.X=21;
			c.Y=20;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("Fark matrisi \n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			c.X=21+4*j;
			c.Y=21+i;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("%d ",fark[i][j]);
		}
}
enbfark=fark[0][0];
for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(enbfark<fark[i][j]){
			enbfark=fark[i][j];
			}
		}
}
enkfark=fark[0][0];
for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(enkfark>fark[i][j]){
			enkfark=fark[i][j];
			}
		}
}
c.X=21;
			c.Y=27;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	printf("En buyuk fark %d ve en kucuk fark %d olur.",enbfark,enkfark);
	
}

int Bar(int X,int Y,int Renk,char uBar[5][40],char sifir[5][40],char bir[5][40],char iki[5][40],char uc[5][40]){
	
	
	
	int i=0,b=0,r=0;
	char g=0;
	yeniden:
	b=enbuyukbul(uBar);
	r=toplamuzunluk(uBar);
	Pencere(0,0,r,30,"Cift",159,1,0);
	
	HANDLE  hConsole;
	COORD c;
	Pencere(X,Y,r,0,"no",119,0,0);
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 31);
	
	c.X = X;
    c.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
	printf("%s",uBar[0]);
	
	SetConsoleTextAttribute(hConsole, Renk);
	for(i=1;i<5;i++){
	printf("%s",uBar[i]);
	
}
	int uzunluk[5],sutun=0;
	length(uzunluk,uBar);
	char input=0;

	while (input!=13)
	
{
    
    input = getch();
	if(input!=-32)
		yaz(X,Y,uBar[sutun],112);
		
		
		
    switch(input)
    {
	
    case 75:
    	if(X>0){
		
    	sutun--;
    	X=X-b;
    }
//        printf("left");
        break;
    case 77:
    	if(X<r){
		
    	sutun++;
    	X=X+b;
    	
    }
//        printf("right");
        break;
    
    }

    if(input!=-32)
			yaz(X,Y,uBar[sutun],30);
}
	X=0;
	Y=0;
	int satir;
	
 if(g!=13){
		if(sutun==0){
			satir = menu(sifir,112,X,Y+1);
			switch(satir){
		case 0:	
		satir = menu(sifir,112,X,Y+1);
		Pencere(0,0,r,30,"Cift",159,0,0);//menuyu kapat
		Pencere(20,10,50,5,"no",143,0,1);//Program output
		yaz(21,11,"Hello World",143);
		return 0;
		
		case 1:
			satir = menu(sifir,112,X,Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,7,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			degiskenlerogreten();
			return 0;
		
		case 2:
			satir=menu(sifir,112,X,Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,8,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			notlar();
			return 0;
			
		case 3:
			satir=menu(sifir,112,X,Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			SetConsoleTextAttribute(hConsole, 143);
			Pencere(20,9,73,20,"no",143,0,1);
			superlig();
			return 0;
		case 4:
		satir = menu(sifir,112,X,Y+1);
		Pencere(0,0,r,30,"Cift",159,0,0);
		Pencere(20,10,50,5,"no",143,0,1);
		SetConsoleTextAttribute(hConsole, 143);
		dongulerbizisoyler();
		return 0;	
}
}
	if(sutun==1){
			satir = menu(bir,112,uzunluk[0],Y+1);
		switch(satir){
		case 0:	
			satir=menu(bir,112,uzunluk[0],Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,8,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			ucgenolustur();
			return 0;
		case 1:
			satir=menu(bir,112,uzunluk[0],Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,8,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			Hesapmakinesi();
			return 0;
		case 2:
			satir=menu(bir,112,uzunluk[0],Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,8,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			Ucgenalani();
			return 0;
		case 3:
			satir=menu(bir,112,uzunluk[0],Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,10,73,12,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			paranvami();
			return 0;
		case 4:
			satir=menu(bir,112,uzunluk[0],Y+1);
			Pencere(0,0,r,30,"Cift",159,0,0);
			Pencere(20,9,73,12,"no",143,0,1);
			SetConsoleTextAttribute(hConsole, 143);
			daire();
			return 0;
	}
	}
	if(sutun==2){
		satir=menu(iki,112,uzunluk[0]+uzunluk[1],Y+1);
		switch(satir){
			case 0:
				satir=menu(bir,112,uzunluk[0],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,8,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				ruskoyundecarpmayapioz();
				return 0;
			case 1:
				satir=menu(bir,112,uzunluk[0],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,14,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				tekrarsayi();
				return 0;
			case 2:	
				satir=menu(bir,112,uzunluk[0],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,14,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				enbuyukdizielemani();
				return 0;
			case 3:	
				satir=menu(bir,112,uzunluk[0],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,14,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				terscevir();
				return 0;
			case 4:
				satir=menu(bir,112,uzunluk[0],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,5,"no",143,0,1);	
				SetConsoleTextAttribute(hConsole, 143);
				rastgeledizi();
				return 0;
	}		
	
	}
	if(sutun==3){
		satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
		switch(satir){
			case 0:
				satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,16,"no",143,0,1);	
				SetConsoleTextAttribute(hConsole, 143);
				carpimatris();
				return 0;
			case 1:
				satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,18,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				transpoze();
				return 0;
			case 2:
				satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,18,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				matrisenbyk();
				return 0;
			case 3:
				satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,18,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				satirtoplam();
				return 0;
			case 4:
				satir=menu(uc,112,uzunluk[0]+uzunluk[1]+uzunluk[2],Y+1);
				Pencere(0,0,r,30,"Cift",159,0,0);
				Pencere(20,10,73,18,"no",143,0,1);
				SetConsoleTextAttribute(hConsole, 143);
				farklimatris();
				return 0;
		}
 }
 	if(sutun==4){
		return 0;
 }
	
}
}	
void main()
{
	char Ustbar[5][40]=
	{"  Ilk programlar       "
	,"  Hesap programlari    "
	,"  Tek boyutlu dizililer" 
	,"  Cok boyutlu dizililer"
	,"  Cikis     "};
	char Ilkprogramlar[5][40]=
	{"  Hello World    "
	,"  Degiskenler  "
	,"  Notlarim   "
	,"  FB liderkenki super lig     "
	,"  For dongusule ilgili    "};
	char Hesap[5][40]=
	{" Ardisik sayilari toplama"
	," Hesap makinesi  "
	," Ucgen alani    "
	," Para Hesaplama     "
	," Daire Cevre Alan   "};
	char dizi[5][40]=
	{" Rus Koylusu metodu ile carpma "//Tek boyutlu dizi alýþtýrma 4
	," 5 elemanli dizinin özellikleri  "//Tek boyutlu dizi alýþtýrma 3
	," 5 elemanli dizinin en buyuk elemani"//alýþtýrma 2
	," 6 ellemanli diziyi siralama     "//1
	," Rastgele 5 elemanli dizi olustur   "};//rastgele
	char matris[5][40]=
	{" Matris Carpimi (Siraya dikkat)"//1
	," Matris Transpozesi"//2
	," Random matrisin en buyuk kucukleri"//3
	," Matrislerin satir toplami"//4
	," Matrislerin farki"};
	Bar(0,0,112,Ustbar,Ilkprogramlar,Hesap,dizi,matris);
	char kal[20];
	int i;
	for(i=0;i<20;i++){
	kal[i]=getch();
	if(kal[i]==27){
		Bar(0,0,112,Ustbar,Ilkprogramlar,Hesap,dizi,matris);
	}
}
}
