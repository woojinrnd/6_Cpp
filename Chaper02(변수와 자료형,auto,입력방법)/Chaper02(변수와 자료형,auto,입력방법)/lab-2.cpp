//// 종합 실습 예제 - 2
//화씨 온도를 섭씨 온도로 바꾸기
//섭씨 온도 = 5/9(화씨온도 - 32) --> 공식
//소수점을 반드시 나타내도록 한다.

//출력결과
//화씨온도 60도는 섭씨온도는 15.5556입니다.


#include <iostream>
#include <string>

using namespace std;

int main()
{
	float F_deg = 0.0f;
	float C_deg = 0.0f;

	cout << "화씨 온도 : ";
	cin >> F_deg;
	
	C_deg = (5. / 9.)*(F_deg - 32.);

	cout << "섭씨 온도 : " << C_deg << endl;
	
	return 0;
}