//// 조건문 : if문과 switch문으로 제시한 조건 (condition)에 따라서 명령을 다르게 수행하기 
//// 위한 문장이다. 
//
////if 문 종류 : 단순 if문, if~ else구문(50%확률), if ~else if....else(옵션), 중첩 if문이
////존재한다.
//
//
////단순 if문 실습
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//정수를 입력 받아서 양수인지 확인하는 프로그램을 작성
//	//0은 양수에 포함이 안되는 것으로 간주
//
//	int input_num = 0;
//
//	cout << "하나의 정수를 입력하세요 : ";
//	cin >> input_num;
//
//	if (input_num > 0)
//	{
//		cout << "양수입니다" << endl;
//	}
//	else
//	{
//		cout << "음수입니다." << endl;
//	}
//
//	return 0;
//}
