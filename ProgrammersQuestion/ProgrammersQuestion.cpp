// ProgrammersQuestion.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
// 
/*
	Question Title
	������ �ݾ� ����ϱ�

	���� ���� ���̱ⱸ�� �αⰡ �ſ� ���� ���� ������ �ʽ��ϴ�. 
	�� ���̱ⱸ�� ���� �̿��� price�� �ε�, 
	���̱ⱸ�� N �� ° �̿��Ѵٸ� ���� �̿���� N�踦 �ޱ�� �Ͽ����ϴ�. 
	��, ó�� �̿�ᰡ 100�̾��ٸ� 2��°���� 200, 3��°���� 300���� ����� �λ�˴ϴ�.
	���̱ⱸ�� count�� Ÿ�� �Ǹ� ���� �ڽ��� ������ �ִ� �ݾ׿��� �󸶰� ���ڶ������ return �ϵ��� solution �Լ��� �ϼ��ϼ���.
	��, �ݾ��� �������� ������ 0�� return �ϼ���.

	[���ѻ���]
	- ���̱ⱸ�� �̿�� price : 1 �� price �� 2,500, price�� �ڿ���
	- ó�� ������ �ִ� �ݾ� money : 1 �� money �� 1,000,000,000, money�� �ڿ���
	- ���̱ⱸ�� �̿� Ƚ�� count : 1 �� count �� 2,500, count�� �ڿ���

	ex)
	[price]	[money]	[count]	[result]
		3		20		4		10
	
	�̿�ݾ��� 3�� ���̱ⱸ�� 4�� Ÿ�� ���� ���� ���� ���� �ݾ��� 20�̶��, 
	�� �ʿ��� ���̱ⱸ�� �̿� �ݾ��� 30 (= 3+6+9+12) �� �Ǿ� 10��ŭ �����ϹǷ� 10�� return �մϴ�.
*/

#include "stdafx.h"
#include <iostream>

//����Ǯ�̿� �Լ�
long long solution(int nPrice, int nMoney, int nCount)
{
	long long nAnswer = 0;
	
	// nCount ��ŭ �ݺ�
	for (int i = 0 ; i < nCount ; i++) 
		nAnswer += nPrice * (i+1);

	nAnswer -= nMoney;
	
	// �ݾ��� �������� ���� ���� 0�� ����

	if (nAnswer < 0)
		nAnswer = 0;

	return nAnswer;
}

int main()
{
	solution(3, 20, 4);

    return 0;
}

