﻿// dz2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//объявление переменных
	double L,S ;
	double pi = 3.14;
	cout << "==============================================="<<endl;
	cout << "Программа вычисления длины и площади окружности"<<endl;
	cout << "==============================================="<<endl;
	//запрос на ввод
	cout << "Введите радиус окружности R= ";
	double R;
	cin >> R;
	//расчет парамметров по формулам
	L=2*pi*R;
	S = pi * pow(R,2);
	//вывод полученных результатов
	cout << "\nДлина окружности L= " << L << "\n";
	cout << "\nПлощадь круга S= " << S << "\n";
	
	
	
	//9 закомментированных задач полученных ранее в майстате
	//задание 1
	/*
	cout << "==============AC/DC==================\n";
	cout << "I'm a rolling thunder, a pouring rain\n";
	cout << "I'm comin' on like a hurricane\n";
	cout << "My lightning's flashing across the sky\n";
	cout << "You're only young but you're gonna die\n";
	*/
	
	//задание 2
	/*
	cout << "Every\n";
	cout << "\thunter\n";
	cout << "\t\twants\n";
	cout << "\t\t\tto\n";
	cout << "\t\t\t\tknow\n";
	cout << "\t\t\t\t\twhere\n";
	cout << "\t\t\t\t\t\tthe\n";
	cout << "\t\t\t\t\t\t\tpheasant\n";
	cout << "\t\t\t\t\t\t\t\t\tis\n";
	*/
	
	//задание 3
	/*cout << "           продам ноутбук\n"<<endl;
	cout << "не бит, не крашен,майнингом не занимался\n" << endl;
	cout << "краткие характеристики:" << endl;
	cout << "процессор: Intel Core i7-5700HQ" << endl;
	cout << "      ОЗУ: 16Гб" << endl;
	cout << "      ПЗУ: 120Гб ssd + 1Тб HDD" << endl;
	cout << "    Экран: 15.6 FullHD" << endl;
	cout << "телефон: 0509981988 Никита" << endl;
	*/
	
	//задание 4
	
	/*float r1, r2, r3, r0;
	r1 = 2;
	r2 = 4;
	r3 = 8;
	r0 = 1/(1 / r1 + 1 / r2 + 1 / r3);
	cout << "сопротивление R0= "<<r0<<"\n";
	*/

	
	//задание 5
	
	/*float L ;
	cout << "Введите длину окружности L= ";
	cin >> L;
	double R = L / (2 * 3.14);
	double S = 3.14 * sqrt(R);
	cout << "\nПлощадь круга S= " << S << "\n";
	*/

	//задание 6
	/*
	float S, V, a, t;
	cout << "Введите скорость V= ";
	cin >> V;
	cout << "\nВведите время t= ";
	cin >> t;
	cout << "\nВведите ускорение a= ";
	cin >> a;
	S = V * t + (a * sqrt(t)) / 2;
	cout << "\nРасстояние =" << S; 
	*/
	
	//задание 7
	/*
	float v, s, t;
	cout << "Введите расстояние до аэропорта s= ";
	cin >> s;
	cout << "\nВведите время за которое надо доехать t= ";
	cin >> t;
	v = s / t;
	cout << "\nтребуемая скорость = " << v;
	*/

	//задание 8 не смог разобраться как ввести с клавиатуры
	/*
	const char *timestart = "20:15:06";
	const char *timefinish = "23:26:19";
	int time1, time2;
	time1 = (atoi(timestart) * 60 + atoi(timestart + 3)) * 60 + atoi(timestart + 6);
	time2 = (atoi(timefinish) * 60 + atoi(timefinish + 3)) * 60 + atoi(timefinish + 6);
	cout << (time2 - time1) / (double)60 <<" min"<< endl;
	double cost = (time2 - time1) / (double)60 * 0.3;
	cout << "Стоимость разговора = " << cost << " грн";
	*/

	//задание 9
	/*
	double s, cons;
	cout << "Введите расстояние = ";
	cin >> s;
	cout << "\nВведите расход топлива = ";
	cin >> cons;
	double arr[3];
	cout << "\nВведите стоимость 1л топлива А-95 = ";
	cin >> arr[0];
	cout << "\nВведите стоимость 1л топлива Газ = ";
	cin >> arr[1];
	cout << "\nВведите стоимость 1л топлива ДТ= ";
	cin >> arr[2];
	cout << "А-95       Газ        ДТ\n";

	for (int i = 0;i<3; i++) 
	{
		double scost = s / 100 * cons * arr[i];
		cout << scost << "        ";
		
	}
	*/


	
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
