#include <iostream>
#include <string.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char stra[]="chen zhipeng 2021 hehe!";
	char strb[]="                       ";
	int left=0;
	int right=strlen(stra)-1; //strlen()是求字符串长度，它用string.h头文件 由于字符串的结尾有个\0作为标志，所以应该减1
	while(left<=right){
		strb[left]=stra[left];
		strb[right]=stra[right];
		printf("%s\n",strb);
		Sleep(1000);   //这是等待函数，它存在windows.h头文件中，注意这个函数的第一个字母要大写
		system("cls");//这是清屏函数 
	 	left++;
	 	right--;		
	}	
	printf("%s\n",strb); 
	return 0;
	
}
