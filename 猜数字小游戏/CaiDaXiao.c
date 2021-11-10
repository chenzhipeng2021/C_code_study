//这是一个猜数字游戏，随机产生一个1-100的数，猜小猜大有提示，直到猜对。 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>//这是随机数函数的库 rand()\srand()
#include <time.h> //这是time()的库 
int xuanze=0;
void menu(){
	printf("*************************\n");
	printf("****1.玩 游 戏***********\n");
	printf("****0.退出游戏***********\n");
	printf("*************************\n");
	printf("请输入菜单号:>");
	scanf("%d",&xuanze);
}
void youxi(){
	//srand((unsigned int)time(UNLL));
//srand()函数里面要有一个参数（无符号），设置随机数的起点，但是如果这里的参数不变，是个固定值
//那么后面rand()返回的随机数也是一个固定的，所以这里面的参数必须要一个变化的值
//因此这里就用到了time()，它会返回一个整型的值（占64位），但srand()的参数是无符号的整型
//因此time() 必须要 进行强制类型转换变成无符号的整型（unsigned int） 
//这个设置起点的函数在一个程序中只需要在程序的运行开始时执行一次，不需要在
//rand()前每次都执行，由于它是由时间戳给的参数，如果两次太近，得出的数相差近
//甚至一样，因此它要放到主函数的开始只执行一次 
	int sjs=rand()%100+1; //这里对100取模是为了把随机数的范围定在0-99之间，如果要1-100，要加上1  
//rand()返回0-36727之间的数，在调它之前必须要调用srand()函数，要不然当关了程序 
//再打开程序，这个随机数还和上次打开时的一样，不会变 
	int flag=0; 
	int guss=0;
	printf("请输入你猜的数字:>");
	scanf("%d",&guss);
	flag++;
	while(1){
	if (guss>sjs){
		printf("猜大了！\n");
		printf("请再次输入你猜的数字:>");
		scanf("%d",&guss);
		flag++;
	}else if(guss<sjs){
		printf("猜小了！\n");
		printf("请再次输入你猜的数字:>");
		scanf("%d",&guss);
		flag++;
	}else{
	printf("恭喜你，猜对了！\n");
	break;
	}
	} 
	printf("数字为%d\n",sjs);
	printf("你总共猜了%d次！\n",flag);
	system("pause");
}
int main(){
	srand((unsigned int)time(NULL)); //在DEV c++ 中要用NULl必须包括iostream头文件 
	do{
		system("cls"); //清屏，包含在stdlib.h 
		menu();	
		switch(xuanze)
		{
		case 1:
			youxi();
			break;			//break只能用于退出循环语句和switch语句，不能用于if语句 
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
	}		
	}while(xuanze);
	
	return 0;
}
