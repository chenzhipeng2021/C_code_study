#include <iostream>
#include <string.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char stra[]="chen zhipeng 2021 hehe!";
	char strb[]="                       ";
	int left=0;
	int right=strlen(stra)-1; //strlen()�����ַ������ȣ�����string.hͷ�ļ� �����ַ����Ľ�β�и�\0��Ϊ��־������Ӧ�ü�1
	while(left<=right){
		strb[left]=stra[left];
		strb[right]=stra[right];
		printf("%s\n",strb);
		Sleep(1000);   //���ǵȴ�������������windows.hͷ�ļ��У�ע����������ĵ�һ����ĸҪ��д
		system("cls");//������������ 
	 	left++;
	 	right--;		
	}	
	printf("%s\n",strb); 
	return 0;
	
}
