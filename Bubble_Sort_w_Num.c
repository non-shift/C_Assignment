#include <stdio.h>

int main()
{
	int array[100][100];//���� ��ȣ�� �� ���� ���� ����
	int num=0;

	printf("����Ʈ ������ ���� ���� �Է� �Ͻÿ�:");//���� �� �Է�
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("���� %d:", i + 1);
		scanf_s("%d", &array[i][1]);
		array[i][0] = i+1;//���� ��ȣ ����
	}

	for (int i = num; i > 0; i--)//���� ����
	{
		int temp = 0;
		

		for (int j = 0; j < num - 1; j++)
		{
			if (array[j][1] > array[j + 1][1])//���� ����
			{
				temp = array[j][1];//�� �� ���� ����
				array[j][1] = array[j + 1][1];
				array[j + 1][1] = temp;

				temp = array[j][0];//���� ��ȣ ���� ����
				array[j][0] = array[j + 1][0];
				array[j + 1][0] = temp;
			}
		}

	}

	printf("������������ ���ĵ� ������ ������ �����ϴ�.\n");
	for (int i = 0; i < num; i++)
	{
		printf("���� %d:%d\n", array[i][0],array[i][1]);
	}
	return 0;
}
