#include <iostream>
using namespace std;
void move(int n,char a,char c){
	printf("�ѵ�%d�����Ӵ�%c���ƶ���%c����\n",n,a,c);
	
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
	/*���������if��else,if������˳�����ݹ麯���Ľ�ֹ����*/	
}
int main(){
	int n;
	printf("������������");
	scanf("%d",&n);  
	/*scanf������˫��������ò�������������ʾ�ַ���Ҫ��Ȼ������ʱ���˱���
	��Ҫ�������������е��ַ���Ҫ���ϸ�һһ��Ӧ��
	����ı���Ҫ��ȡ��ַ��&   
	�ж���������룬�ÿո�tab����س����ֿ� 
	*/          
	hannuota(n,'a','b','c');	
	/* �ַ����ַ�����һ�����ַ����õ����ţ���ʽ����%C���ַ�������˫���ţ�
	��ʽ����%S*/
	return 0;
}
