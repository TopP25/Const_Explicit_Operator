// Const_Explicit_Operator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Account {
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum) : rate{ Rate } {
		sum = Sum;
	}
	double getRate() const{
		return rate;
	}
	double getIncome() {
		return sum / rate * 100;
	}
	double getIncome() const {
		return sum / rate * 100;
	}
	double getSum() const{
		return sum;
	}
	double getSum(){
		sum += getIncome();
		return sum;
	}

};

int main()
{
	Account account1(5, 2000);
	const Account account2(8, 5000);

	account1.getRate();
	account2.getRate();

	account1.getSum();
	account2.getSum();

	account1.getIncome();
	account2.getIncome();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
