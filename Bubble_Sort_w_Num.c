#include <stdio.h>

int main()
{
	int array[100][100]={0,};//빌딩 번호와 층 수를 묶기 위함
	int num=0;

	printf("스마트 도시의 빌딩 수를 입력 하시오:");//빌딩 수 입력
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("빌딩 %d:", i + 1);
		scanf_s("%d", &array[i][1]);
		array[i][0] = i+1;//빌딩 번호 저장
	}

	for (int i = num; i > 0; i--)//버블 정렬
	{
		int temp = 0;
		

		for (int j = 0; j < num - 1; j++)
		{
			if (array[j][1] > array[j + 1][1])//버블 정렬
			{
				temp = array[j][1];//층 수 버블 정렬
				array[j][1] = array[j + 1][1];
				array[j + 1][1] = temp;

				temp = array[j][0];//빌딩 번호 버블 정렬
				array[j][0] = array[j + 1][0];
				array[j + 1][0] = temp;
			}
		}

	}

	printf("오름차순으로 정렬된 빌딩은 다음과 같습니다.\n");
	for (int i = 0; i < num; i++)
	{
		printf("빌딩 %d:%d\n", array[i][0],array[i][1]);
	}
	return 0;
}
