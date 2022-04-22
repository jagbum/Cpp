#include <iostream> // iostream 헤더파일 표준 입출력을 위한 클래스와 객체, 변수 선언 
#include <string> //string 클래스 사용위한 헤더파일 선언
#include <cstring> //strtok() 함수를 사용하기 위한 헤더 파일
using namespace std; // std 공간에 선언된 이름에 std::생략

int main() { // main()함수부터 실행 시작
	while (true) { // while문 반복 실핼
		char modi[20]; // 20개의  문자로 구성되는 문자열을 저장할 수 있는 char 배열
		string end("끝"); // 문자열 end
		int n1; // n1 정수 변수 선언
		int n2; // n2 정수 변수 선언
		int re; // re 정수 변수 선언
		char op; // op 문자 변수 선언

		cout << "? "; // ? 출력
		cin.getline(modi, 20, '\n'); // 문자열 입력

		if (modi == end) { // modi가 end(끝)일 경우
			cout << "종료합니다." << endl; // 종료합니다 출력
			return 0; // 정상 종료
		} // if문 끝
		else { // modi가 end(끝)가 아닐 경우
			n1 = atoi(strtok(modi, " ")); // strtok()함수로 공백기준으로 문자열을 구분한 후  atoi()함수로 피연산자 문자열을 정수로 변환
			op = *strtok(NULL, " "); // strtok()함수로 문자열을 구분하여 연산자 찾기
			n2 = atoi(strtok(NULL, " ")); // strtok()함수로 공백기준으로 문자열을 구분한 후  atoi()함수로 피연산자 문자열을 정수로 변환
			
			if (op == '+') { // op가 +인 경우
				re = n1 + n2; // re = n1 + n2 연산
				cout << n1 << " + " << n2 << " = " << re << endl; // n1 + n2 = re 출력
			} // if문 끝
			else if (op == '-') { // op가 -인 경우
				re = n1 - n2; // re = n1 - n2 연산
				cout << n1 << " - " << n2 << " = " << re << endl; // n1 - n2 = re 출력
			} // else if문 끝
			else if (op == '*') { // op가 *인 경우
				re = n1 * n2; // re = n1 * n2 연산
				cout << n1 << " * " << n2 << " = " << re << endl; // n1 * n2 = re 출력
			} // else if문 끝
			else if (op == '/') { // op가 /인 경우
				re = n1 / n2; // re = n1 / n2 연산
				cout << n1 << " / " << n2 << " = " << re << endl; // n1 / n2 = re 출력
			} // else if문 끝
			else if (op == '%') { // op가 %인 경우
				re = n1 % n2; // re = n1 % n2 연산
				cout << n1 << " % " << n2 << " = " << re << endl; // n1 % n2 = re 출력
			} // else if문 끝
		} // else문 끝
	} // while문 끝
} // main 함수 끝