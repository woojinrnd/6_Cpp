////auto Ű���� : �ڵ�������� �ǹ� --> �ڷ��� ������ �� ����ϴ� Ű���� (C++11)
////�ڵ� Ÿ�� �߷�(automatic type deduction)
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//
////�Լ������� �Ű������δ� auto�� ������� ���Ѵ�.
//auto add(int x, double y)
//{
//	return x + y; //int + int = int
//}
//
//
//int main(void)
//{
//	double d = 1.0; //double(8����Ʈ) �� Ÿ���� ����d�� 1.0���� �ʱ�ȭ
//	auto ad = 1; //�ڵ� Ÿ�� �߷п� �ٰ��Ͽ� ���ԵǴ� ���� ���� �ڷ����� �ٲ�� �ִ�. 
//	auto result = 0.0;
//	result = add(10, 20.1);
//
//	cout << "���� d�� ����Ʈ ũ�� : " << sizeof(d) << endl;
//	cout << "���� ad�� ����Ʈ ũ�� : " << sizeof(ad) << endl;
//
//	cout << "�Լ� add()�� ���ϰ� : " << add(5, 6.11) << "����Ʈ ũ�� : " << sizeof(result) << endl;
//
//	return 0;
//}
