#include <stdio.h>

int main()
{
	int arr[100000];
	int num,find;
	int similar = 0;
	int answer = 1000000000000000;
	int building=0;

	printf("����Ʈ ������ ���� ���� �Է� �Ͻÿ�:");//���� �� �Է�
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) //�� ������ ���� �Է� �޴� �ݺ���
	{
		printf("���� %d:",i+1);
		scanf_s("%d", &arr[i]);
	}

	printf("ã�� ���� ���� ���̸� �Է� �Ͻÿ�:");//���ϴ� ���� ���� �Է�
	scanf_s("%d", &find);

	for (int i = 0; i < num; i++)//���� ã�� ����. (���ϴ� ���� ����)-(n��° ���� ����)�� ������ ���� ���� ���� ���� answer�� ����
	{
		similar = find-arr[i];
		if (similar < 0)//����
		{
			similar = -similar;
		}
		if (answer > similar)//���̰� �� ���� ��� ����
		{
			answer = similar;
			building = i + 1;
		}
	}
	if (answer == 0)//���ϴ� ���� ���̿� �����Ƿ�
	{
		printf("���ϴ� ������ ���� %d �Դϴ�", building);
	}
	else
	{
		printf("���ϴ� ������ �����ϴ�. ���� ����� ������ ������ ���� %d �Դϴ�.", building);
	}
	return 0;
}