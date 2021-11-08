#include <iostream>
using namespace std;
void move(int n,char a,char c){
	printf("把第%d个盘子从%c塔移动到%c塔。\n",n,a,c);
	
	}
void hannuota(int n,char a,char b,char c){
	if (n==1){
	move(n,a,c);
	} 
	else{
	hannuota(n-1,a,c,b);
	move(n,a,c);
	hannuota(n-1,b,a,c);
	} 
	/*这里必须用if加else,if后面的退出这个递归函数的截止条件*/	
}
int main(){
	int n;
	printf("请输入盘子数");
	scanf("%d",&n);  
	/*scanf函数的双引号内最好不用输入其它提示字符，要不然在输入时除了变量
	还要输入你在引号中的字符，要求严格一一对应。
	后面的变量要加取地址符&   
	有多个变量输入，用空格、tab键或回车来分开 
	*/          
	hannuota(n,'a','b','c');	
	/* 字符和字符串不一样，字符是用单引号，格式符是%C，字符串是用双引号，
	格式符是%S*/
	return 0;
}
