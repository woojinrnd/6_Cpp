//// ���� �ǽ� ���� - 2
//ȭ�� �µ��� ���� �µ��� �ٲٱ�
//���� �µ� = 5/9(ȭ���µ� - 32) --> ����
//�Ҽ����� �ݵ�� ��Ÿ������ �Ѵ�.

//��°��
//ȭ���µ� 60���� �����µ��� 15.5556�Դϴ�.


#include <iostream>
#include <string>

using namespace std;

int main()
{
	float F_deg = 0.0f;
	float C_deg = 0.0f;

	cout << "ȭ�� �µ� : ";
	cin >> F_deg;
	
	C_deg = (5. / 9.)*(F_deg - 32.);

	cout << "���� �µ� : " << C_deg << endl;
	
	return 0;
}