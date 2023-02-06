////실습-1
////변수 : 변할 수 있는 값으로 프로그램에서 데이터를 저장하기 위한 메모리 공간을 의미
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	//변수명 작성
//	//int 7aaa = 0; // 변수명은 숫자로 시작하면 안됨
//	//int ab cd = 0; //변수명은 그 사이에 공백이 들어가면 안된다. 
//
//	int age = 0; //정상적인 변수를 선언한 것
//
//	//변수를 보편화 된 초기화 방법(C++ 11)
//	int i{ 100 }; //int i = 100;
//	short b = 0;
//	bool flag = true;
//
//	//bool 자료형은 true 1, false 0
//	cout << flag << endl;
//
//
//	//변수의 주소 확인
//	//변수는 메모리 스택에 비 연속적으로 빈 공간을 찾아 들어간다. 
//	//& : 주소 참조 연산자
//	cout << "변수 age의 주소 : " << &age << endl;
//	cout << "변수 i의 주소 : " << &i << endl;
//	cout << "변수 b의 주소 : " << &b << endl << endl;
//
//
//	//자료형의 크기(sizeof(데이터타입, 변수명))
//	//to_string(정수) : 정수값을 문자열 타입으로 변경시켜주는 string 헤더파일에 존재하는 메소드
//	cout << "char 형 자료형의 바이트 크기 : " + to_string(sizeof(char)) + "바이트" << endl;
//	cout << "short 형 자료형의 바이트 크기 : " + to_string(sizeof(short)) + "바이트" << endl;
//	cout << "int 형 자료형의 바이트 크기 : " + to_string(sizeof(int)) + "바이트" << endl;
//	cout << "long 형 자료형의 바이트 크기 : " + to_string(sizeof(long)) + "바이트" << endl;
//	cout << "float 형 자료형의 바이트 크기 : " + to_string(sizeof(float)) + "바이트" << endl;
//	cout << "long long 형 자료형의 바이트 크기 : " + to_string(sizeof(long long)) + "바이트" << endl;
//	cout << "double형 자료형의 바이트 크기 : " + to_string(sizeof(double)) + "바이트" << endl;
//	cout << "long double형 자료형의 바이트 크기 : " + to_string(sizeof(long double)) + "바이트" << endl;
//	cout << "bool 형 자료형의 바이트 크기 : " + to_string(sizeof(bool)) + "바이트" << endl;
//
//
//	//string 타입(문자열)
//	string s1 = "안녕하세요";
//	string s2 = "반갑습니다";
//	//문자열끼리는 + 연산자로 결합 시킬 수 있다. 
//	//정수형은 to_string으로 결합
//	string s3 = s1 + " " + s2 + "!!!";
//	cout << s3 << endl;
//
//	cout << "변수 s1의 주소 : " << &s1 << endl;
//	cout << "변수 s2의 주소 : " << &s2 << endl;
//	cout << "변수 s3의 주소 : " << &s3 << endl;
//
//	bool equal = (s1 == s2);
//	cout << "s1 == s2 : " << equal << endl;
//
//
//
//	const double TAX_RATE = 0.25; // 기호 상수 선언 및 초기화
//	//상수는 초기화를 하면, 다른 값으로 저장을 하지 못한다. 
//
//	//변수든 상수든 초기화 원칙
//	int garbage; // 초기화 원칙
//	//cout << garbage << endl;
//
//
//
//	return 0;
//}