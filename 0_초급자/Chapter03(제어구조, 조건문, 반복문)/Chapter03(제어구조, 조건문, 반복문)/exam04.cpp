////if~ else if....else문의 실습과 한계점
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//성적 처리 프로그램
//	int score = 0;
//	char grade = ' ';
//
//
//	cout << "점수를 입력하세요(0~100) : ";
//	cin >> score;
//
//	//한계점 : 예외처리 ( 입력으로 숫자가 아닌 다른 값이 들어왔을 때)
//	//한계점 해결방법 - 1번째
//	if ((score < 0 || score > 100))
//	{
//		cout << "입력하신 값은 0~100사이 값이 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//	
//	//fail()은 cin객체의 매소드로써 선언한 타입과 일치하지 않으면 true을 리턴한다. 
//	if (cin.fail())
//	{
//		cout << "입력하신 값은 숫자가 아닙니다." << endl;
//		cout << "프로그램을 종료합니다." << endl;
//		return 0;
//	}
//
//	else
//	{
//		if (score >= 90 && score )
//		{
//			grade = 'A';
//		}
//		else if (score >= 80)
//		{
//			grade = 'B';
//		}
//		else if (score >= 70)
//		{
//			grade = 'C';
//		}
//		else if (score >= 60)
//		{
//			grade = 'D';
//		}
//		else
//		{
//			grade = 'F';
//		}
//	}
//
//	cout << "입력한 정수 : " << score << endl;
//	cout << "등급 : " << grade << endl;
//
//
//	//디버깅 방법 : 먼저 어디서부터 시작할 껀지 브레이크 포인트(중단점, 토글 포인트)
//	//그리고 F5번을 눌러서 디버그 모드
//	//F11번 키를 이용하여 한 단계식 프로그램의 실행과정을 살펴본다. (변수, 배열, 객체,
//	// 메모리주소, CPU관여도 등)
//	//Ctrl + F5번을 이용하면 브레이크 포인트 무시
//
//
//	return 0;
//}