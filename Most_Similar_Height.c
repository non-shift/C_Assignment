#include <stdio.h>

int main()
{
	int arr[100000];
	int num,find;
	int similar = 0;
	int answer = 1000000000000000;
	int building=0;

	printf("스마트 도시의 빌딩 수를 입력 하시오:");//빌딩 수 입력
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) //각 빌딩의 높이 입력 받는 반복문
	{
		printf("빌딩 %d:",i+1);
		scanf_s("%d", &arr[i]);
	}

	printf("찾고 싶은 빌딩 높이를 입력 하시오:");//원하는 빌딩 높이 입력
	scanf_s("%d", &find);

	for (int i = 0; i < num; i++)//빌딩 찾기 시작. (원하는 빌딩 높이)-(n번째 빌딩 높이)의 절댓값이 가장 작은 것을 변수 answer에 저장
	{
		similar = find-arr[i];
		if (similar < 0)//절댓값
		{
			similar = -similar;
		}
		if (answer > similar)//차이가 더 작을 경우 갱신
		{
			answer = similar;
			building = i + 1;
		}
	}
	if (answer == 0)//원하는 빌딩 높이와 같으므로
	{
		printf("원하는 빌딩은 빌딩 %d 입니다", building);
	}
	else
	{
		printf("원하는 빌딩은 없습니다. 가장 비슷한 높이의 빌딩은 빌딩 %d 입니다.", building);
	}
	return 0;
}