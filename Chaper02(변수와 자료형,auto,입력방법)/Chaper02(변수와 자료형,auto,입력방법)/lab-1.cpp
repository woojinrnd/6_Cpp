//// 종합 실습 예제 - 1
////철수가 가지고 있는 돈으로 최대한의 사탕을 사려고 한다.
//// 현재 1000원 , 사탕의 가격 300원, 최대로 살 수 있는 사탕의 개수와 나머지 돈은 얼마?
//// 나눗셈 연산자, 나머지 연산자를 사용하여
//// 아래와 같이 출력이 되도록 하자
//
//
//// 출력결과
////현재 가지고 있는 돈 : 1000
////캔디의 가격 : 300
////최대로 살 수 있는 캔디의 개수 = 3
////캔디 구입후 남은 돈 = 100
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//
//	int money = 0;
//	int candy = 0;
//	int max_candy = 0;
//	int res = 0;
//
//	cout << "현재 가지고 있는 돈 : ";
//	cin >> money;
//	cout << "캔디의 가격 : ";
//	cin >> candy;
//	max_candy = money / candy;
//	res = money % candy;
//	cout << "최대로 살 수 있는 캔디의 개수 = " << max_candy << endl;
//	cout << "캔디 구입후 남은 돈 = " << res << endl;
//	
//	return 0;
//}