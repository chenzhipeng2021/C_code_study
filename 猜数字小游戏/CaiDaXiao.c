//����һ����������Ϸ���������һ��1-100��������С�´�����ʾ��ֱ���¶ԡ� 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>//��������������Ŀ� rand()\srand()
#include <time.h> //����time()�Ŀ� 
int xuanze=0;
void menu(){
	printf("*************************\n");
	printf("****1.�� �� Ϸ***********\n");
	printf("****0.�˳���Ϸ***********\n");
	printf("*************************\n");
	printf("������˵���:>");
	scanf("%d",&xuanze);
}
void youxi(){
	//srand((unsigned int)time(UNLL));
//srand()��������Ҫ��һ���������޷��ţ����������������㣬�����������Ĳ������䣬�Ǹ��̶�ֵ
//��ô����rand()���ص������Ҳ��һ���̶��ģ�����������Ĳ�������Ҫһ���仯��ֵ
//���������õ���time()�����᷵��һ�����͵�ֵ��ռ64λ������srand()�Ĳ������޷��ŵ�����
//���time() ����Ҫ ����ǿ������ת������޷��ŵ����ͣ�unsigned int�� 
//����������ĺ�����һ��������ֻ��Ҫ�ڳ�������п�ʼʱִ��һ�Σ�����Ҫ��
//rand()ǰÿ�ζ�ִ�У�����������ʱ������Ĳ������������̫�����ó���������
//����һ���������Ҫ�ŵ��������Ŀ�ʼִֻ��һ�� 
	int sjs=rand()%100+1; //�����100ȡģ��Ϊ�˰�������ķ�Χ����0-99֮�䣬���Ҫ1-100��Ҫ����1  
//rand()����0-36727֮��������ڵ���֮ǰ����Ҫ����srand()������Ҫ��Ȼ�����˳��� 
//�ٴ򿪳����������������ϴδ�ʱ��һ��������� 
	int flag=0; 
	int guss=0;
	printf("��������µ�����:>");
	scanf("%d",&guss);
	flag++;
	while(1){
	if (guss>sjs){
		printf("�´��ˣ�\n");
		printf("���ٴ�������µ�����:>");
		scanf("%d",&guss);
		flag++;
	}else if(guss<sjs){
		printf("��С�ˣ�\n");
		printf("���ٴ�������µ�����:>");
		scanf("%d",&guss);
		flag++;
	}else{
	printf("��ϲ�㣬�¶��ˣ�\n");
	break;
	}
	} 
	printf("����Ϊ%d\n",sjs);
	printf("���ܹ�����%d�Σ�\n",flag);
	system("pause");
}
int main(){
	srand((unsigned int)time(NULL)); //��DEV c++ ��Ҫ��NULl�������iostreamͷ�ļ� 
	do{
		system("cls"); //������������stdlib.h 
		menu();	
		switch(xuanze)
		{
		case 1:
			youxi();
			break;			//breakֻ�������˳�ѭ������switch��䣬��������if��� 
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("����������������룡\n");
			break;
	}		
	}while(xuanze);
	
	return 0;
}
