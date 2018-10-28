#include<stdio.h>
#include<conio.h>
main(){
	float socu, somoi, tieuthu, dongia; 
	printf("nhap so dien cu: "); 
	  scanf("%f",&socu);
	printf("nhap so dien moi: "); 
	  scanf("%f",&somoi);
	tieuthu=somoi-socu;
	if(tieuthu>=50)
	   if(tieuthu<=100)
	      dongia=tieuthu*2000;
	    else dongia=tieuthu*3000;
	else dongia=tieuthu*1500;
	printf("tien dien la %f",dongia);
}
