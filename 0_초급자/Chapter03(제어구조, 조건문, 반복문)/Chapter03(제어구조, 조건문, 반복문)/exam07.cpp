////switch���� ���� �ǽ� - 2 (������ �߿伺)
////������ ������ ���, ������ ����ۿ� �� �� ����.
//
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int score = 0;
//	char grade = ' ';
//
//	cout << "A���� : 90 ~ 100" << endl;
//	cout << "A���� : 80 ~ 90" << endl;
//	cout << "A���� : 70 ~ 80" << endl;
//	cout << "A���� : 60 ~ 70" << endl;
//	cout << "A���� : 0 ~ 60" << endl << endl;
//
//	cout << "���� ������ �Է����ּ��� : ";
//	cin >> score;
//
//	//���� ó��
//	if (cin.fail())
//	{
//		cout << "0 ~ 100 X" << endl;
//		return 0;
//	}
//
//	switch (score / 10)
//	{
//	case 10:
//	case 9:
//		grade = 'A';
//		break;
//	case 8:
//		grade = 'B';
//		break;
//	case 7:
//		grade = 'C';
//		break;
//	case 6:
//		grade = 'D';
//		break;
//	default:
//		grade = 'F';
//		break;
//	}
//
//	cout << "����� ���� : " << score << "�Դϴ�." << endl;
//	cout << "����� ���� : " << grade << "�Դϴ�." << endl;
//	
//	return 0;
//}