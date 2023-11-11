#include <iostream>
#include <cmath>//содержит множество математических функций

struct Point {
	double x;
	double y;
};

Point input_point() {
	double x, y;
	std::cout << "Введите координату х -> ";
	std::cin >> x;
	std::cout << "Введите координату y -> ";
	std::cin >> y;
	return{ x, y };
}

void print_point(const Point& P) {
	std::cout << '(' << P.x << "; " << P.y << ")\n";
}

double points_distance(const Point& P1, const Point& P2) {
	return sqrt(//square root - корень квадратный
	pow(P2.x - P1.x, 2) + 
		pow(P2.y-P1.y, 2)
	);
}

double perimeter(const Point& P1, const Point& P2, const Point& P3) {
	return points_distance(P1, P2) + points_distance(P2, P3) + points_distance(P3, P1);
}

int main() {
	system("chcp 1251>nul");
	int n, m;

	//Задание "Генерация и вывод точки"
	Point A = input_point();
	print_point(A);

	//Задание "Периметр треугольника"
	Point B = { 3, 4 };
	print_point(B);
	Point C = { -2, 1 };
	print_point(C);
	std::cout << "Периметр треугольника:" << perimeter(A, B, C) << std::endl;



	return 0;
}