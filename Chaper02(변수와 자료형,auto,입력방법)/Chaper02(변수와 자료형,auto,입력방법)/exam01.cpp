////�ǽ�-1
////���� : ���� �� �ִ� ������ ���α׷����� �����͸� �����ϱ� ���� �޸� ������ �ǹ�
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	//������ �ۼ�
//	//int 7aaa = 0; // �������� ���ڷ� �����ϸ� �ȵ�
//	//int ab cd = 0; //�������� �� ���̿� ������ ���� �ȵȴ�. 
//
//	int age = 0; //�������� ������ ������ ��
//
//	//������ ����ȭ �� �ʱ�ȭ ���(C++ 11)
//	int i{ 100 }; //int i = 100;
//	short b = 0;
//	bool flag = true;
//
//	//bool �ڷ����� true 1, false 0
//	cout << flag << endl;
//
//
//	//������ �ּ� Ȯ��
//	//������ �޸� ���ÿ� �� ���������� �� ������ ã�� ����. 
//	//& : �ּ� ���� ������
//	cout << "���� age�� �ּ� : " << &age << endl;
//	cout << "���� i�� �ּ� : " << &i << endl;
//	cout << "���� b�� �ּ� : " << &b << endl << endl;
//
//
//	//�ڷ����� ũ��(sizeof(������Ÿ��, ������))
//	//to_string(����) : �������� ���ڿ� Ÿ������ ��������ִ� string ������Ͽ� �����ϴ� �޼ҵ�
//	cout << "char �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(char)) + "����Ʈ" << endl;
//	cout << "short �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(short)) + "����Ʈ" << endl;
//	cout << "int �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(int)) + "����Ʈ" << endl;
//	cout << "long �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long)) + "����Ʈ" << endl;
//	cout << "float �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(float)) + "����Ʈ" << endl;
//	cout << "long long �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long long)) + "����Ʈ" << endl;
//	cout << "double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(double)) + "����Ʈ" << endl;
//	cout << "long double�� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(long double)) + "����Ʈ" << endl;
//	cout << "bool �� �ڷ����� ����Ʈ ũ�� : " + to_string(sizeof(bool)) + "����Ʈ" << endl;
//
//
//	//string Ÿ��(���ڿ�)
//	string s1 = "�ȳ��ϼ���";
//	string s2 = "�ݰ����ϴ�";
//	//���ڿ������� + �����ڷ� ���� ��ų �� �ִ�. 
//	//�������� to_string���� ����
//	string s3 = s1 + " " + s2 + "!!!";
//	cout << s3 << endl;
//
//	cout << "���� s1�� �ּ� : " << &s1 << endl;
//	cout << "���� s2�� �ּ� : " << &s2 << endl;
//	cout << "���� s3�� �ּ� : " << &s3 << endl;
//
//	bool equal = (s1 == s2);
//	cout << "s1 == s2 : " << equal << endl;
//
//
//
//	const double TAX_RATE = 0.25; // ��ȣ ��� ���� �� �ʱ�ȭ
//	//����� �ʱ�ȭ�� �ϸ�, �ٸ� ������ ������ ���� ���Ѵ�. 
//
//	//������ ����� �ʱ�ȭ ��Ģ
//	int garbage; // �ʱ�ȭ ��Ģ
//	//cout << garbage << endl;
//
//
//
//	return 0;
//}