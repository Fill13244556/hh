#include <iostream>
int main() {
	//���������� ������� �� ����� ����� �� 1 �� 5. �� ������ ������ ����
		// 1 2 3 4 
	/*for (int i = 1; i <= 5; i + 1) {
		std::cout << i << std::endl;
	}*/

	//���������� ������� �� ����� ����� �� 5 �� 1. �� ������ ������ ����:
	//5 4 3 2 1
	/*for (int c = 5; c >= 1; c = c - 1) {
		std::cout << c << std::endl;
	}*/

	// ������ 3 
	/*for (int v = 0; v <= 10; v = v + 2) {
		std::cout << v * v << std::endl;
	}*/

	//  ������ 4 
	/*int sum = 0;
	for (int b = 93; b <= 99; b = b + 1) {
		sum = sum + 1;
	}
	std::cout << sum << std::endl;*/

	//For1. ���� ����� ����� K � N (N > 0). ������� N ��� ����� K.
	/*int K, N;
	std::cout << "K:";
	std::cin >> K;
	std::cout << "N:";
	std::cin >> N;
	int I;
	for (I = 0; I < N; I = I + 1) {
		std::cout << K << std::endl;
	}*/

	//���� ��� ����� ����� A � B (A < B). ������� � ������� ����������� ��� ���� �����, ������������� ����� A � B(������� ���� ����� A � B), � ���� ���������� N ���� �����.
/*	int A, B; 
	std::cout << "A:";
	std::cin >> A;
	std::cout << "B:"; 
	std::cin >> B;
	int k; 
	for (k = A; k <= B; k = k + 1) {
		std::cout << k << std::endl;
	}
	std::cout << "KOl:" << B - A + 1 << std::endl;*/

//For3. ���� ��� ����� ����� A � B (A < B). ������� � ������� �������� ���
	//����� �����, ������������� ����� A � B(�� ������� ����� A � B), �
		//����� ���������� N ���� �����.
	int A1, B1; 
	std::cout << "A1:"; 
	std::cin >> A1;
	std::cout << "B1:"; 
	std::cin >> B1; 
	int q;
	for (q = B1; q >= A1; q = q - 1) {
		std::cout << q << std::endl;
	}
	std::cout << "Col:" << B1 - A1 + 1 << std::endl;
	

//For4. ���� ������������ ����� � ���� 1 �� ������. ������� ��������� 1,
	//2, . . ., 10 �� ������.

} 