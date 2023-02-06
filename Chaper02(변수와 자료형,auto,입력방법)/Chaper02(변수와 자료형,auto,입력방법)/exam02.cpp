////auto 키워드 : 자동변수라는 의미 --> 자료형 생략할 때 사용하는 키워드 (C++11)
////자동 타입 추론(automatic type deduction)
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//
////함수에서의 매개변수로는 auto를 사용하지 못한다.
//auto add(int x, double y)
//{
//	return x + y; //int + int = int
//}
//
//
//int main(void)
//{
//	double d = 1.0; //double(8바이트) 형 타입인 변수d에 1.0으로 초기화
//	auto ad = 1; //자동 타입 추론에 근거하여 대입되는 값에 따라서 자료형이 바뀌고 있다. 
//	auto result = 0.0;
//	result = add(10, 20.1);
//
//	cout << "변수 d의 바이트 크기 : " << sizeof(d) << endl;
//	cout << "변수 ad의 바이트 크기 : " << sizeof(ad) << endl;
//
//	cout << "함수 add()의 리턴값 : " << add(5, 6.11) << "바이트 크기 : " << sizeof(result) << endl;
//
//	return 0;
//}
