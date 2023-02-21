////중첩 if문을 실습
////학점 처리
////A+, A-, B+, B-.....으로 표시
//
//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//int main(void)
//{
//	int score = 0;
//	string grade = "";
//
//	cout << "당신의 과목 점수를 입력하시요 : ";
//	cin >> score;
//
//	if (cin.fail())
//	{
//		cout << "0~100값 X" << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//
//	//중첩 if문을 사용하여 학점을 선정하는 코드
//	if (score >= 90 && score <= 100)
//	{
//		//중첩 if문은 무제한적으로 들어갈 수 있다.
//		if (score >= 95) // 95~100 내부 조건문 (작은 조건문)
//		{
//			grade = "A+";
//		}
//		else // 90~94
//		{
//			grade = 'A-';
//		}
//	}
//
//	else if (score >= 80 && score < 90)
//	{
//		//중첩 if문은 무제한적으로 들어갈 수 있다.
//		if (score >= 85) // 95~100 내부 조건문 (작은 조건문)
//		{
//			grade = "B+";
//		}
//		else // 90~94
//		{
//			grade = 'B-';
//		}
//	}
//
//	else if (score >= 70 && score < 80)
//	{
//		//중첩 if문은 무제한적으로 들어갈 수 있다.
//		if (score >= 75) // 95~100 내부 조건문 (작은 조건문)
//		{
//			grade = "C+";
//		}
//		else // 90~94
//		{
//			grade = 'C-';
//		}
//	}
//
//	else if (score >= 60 && score < 70)
//	{
//		//중첩 if문은 무제한적으로 들어갈 수 있다.
//		if (score >= 65) // 95~100 내부 조건문 (작은 조건문)
//		{
//			grade = "D+";
//		}
//		else // 90~94
//		{
//			grade = 'D-';
//		}
//	}
//
//	else
//	{
//		grade = 'F';
//	}
//
//	cout << "입력한 점수는 " << score << "입니다." << endl;
//	cout << "점수의 학점 등급 : " << grade << "입니다." << endl;
//
//
//	return 0;
//}