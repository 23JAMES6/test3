#include <stdio.h>

int main()
{
	//�ж�ĳһ���Ƿ�������
	printf("���������\n");
	int year;
	scanf("%d",&year);
	if((year%100!=0&&year%4==0)||(year%100==0&&year%400==0))
	{
		printf("%d��������!\n",year);	
	}
	else
	{
		printf("%d�겻������!\n",year);	
	} 
}