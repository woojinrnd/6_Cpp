////switch문의 대한 실습 - 2 (조건의 중요성)
////조건은 정수형 상수, 문자형 상수밖에 올 수 없다.
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
//	cout << "A학점 : 90 ~ 100" << endl;
//	cout << "A학점 : 80 ~ 90" << endl;
//	cout << "A학점 : 70 ~ 80" << endl;
//	cout << "A학점 : 60 ~ 70" << endl;
//	cout << "A학점 : 0 ~ 60" << endl << endl;
//
//	cout << "과목 점수를 입력해주세요 : ";
//	cin >> score;
//
//	//예외 처리
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
//	cout << "당신의 점수 : " << score << "입니다." << endl;
//	cout << "당신의 학점 : " << grade << "입니다." << endl;
//	
//	return 0;
//}