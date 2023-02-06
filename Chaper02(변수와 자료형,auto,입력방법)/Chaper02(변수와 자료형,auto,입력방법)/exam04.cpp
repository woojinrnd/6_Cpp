//// 수식과 연산자
//
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int x = 5;
//	int y = 3;
//	//강제 캐스팅(명시적 형변환) int의 값을 float 형태로 x를 변경
//	//실수 / 정수 = 실수 
//	float result = x / (float)y;
//
//	//정수 / 정수 = 정수
//	//cout << x / y << endl;
//	cout << result << endl;
//
//	//나머지를 구하는 연산자 % 
//	//홀수, 짝수, 배수 등 구할 때 많이 사용된다.
//	x = 12;
//	y = 3;
//
//	if (x % y == 0)
//	{
//		cout << "x : 3의 배수 O " << endl << endl;
//	}
//	else
//	{
//		cout << "x : 3의 배수 X " << endl << endl;
//	}
//
//
//	//증감 연사자 ( ++ : 증가 연산자 , -- : 감소연산자)
//	int i = 10;
//	//후위 증가 연산자 : 후위 증가 연산자는 명령을 실행한 후 값을 증가 시킨다. 
//	cout << i++ << endl; //10
//	cout << i << endl << endl; // 11
//
//	//전위 증가 연산자 : 전위 증가 연산자는 명령을 실행하기 전에 선 증가를 시킨다.
//	 i = 10;
//	cout << ++i << endl; // 11 
//	cout << i << endl << endl; // 11
//	
//	//후위 감소 연산자 : 후위 증가 연산자는 명령을 실행한 후 값을 감소 시킨다. 
//	i = 10;
//	cout << i-- << endl; //10
//	cout << i << endl << endl; // 9
//
//	//전위 감소 연산자 : 전위 증가 연산자는 명령을 실행하기 전에 선 감소를 시킨다.
//	i = 10;
//	cout << --i << endl; // 9
//	cout << i << endl << endl; // 9
//	
//}