#include <iostream>
#include <ctime>
using namespace std;
int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int rootsCount(double x, double b, double c) {
	double d = b * b - 4 * x * c;
	if (d > 0) return 2;
	if (d == 0) return 1;
	if (d < 0) return 0;

}
double Circles(double x) {
	double p = 3.14;
	double s = p * x * x;
	return s;
}
double RingS(double r1, double r2) {
	double s = Circles(r1) - Circles(r2);
	return s;
}
int main() {
	/*
Proc16. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
   −1, если X < 0; 
   0, если X = 0;
   1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.
	*/
	/*double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
	return 0;*/
	/*
	Proc17. Описать функцию RootsCount(A, B, C) целого типа, определяющую
количество корней квадратного уравнения A·x
2 + B·x + C = 0 (A, B, C — вещественные параметры, A 6= 0).
 С ее помощью найти количество корней
для каждого из трех квадратных уравнений с данными коэффициентами.
Количество корней определять по значению дискриминанта:
D = B 2 − 4·A·C.
*/
	/*double a, b, c;
	cin >> a >> b >> c;
	cout << rootsCount(a, b, c) << endl;*/
	/*Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
		найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
		2
		.В качестве значения π использовать 3.14.*/
	/*double a, b, c;
	cin >> a >> b >> c;
	cout << Circles(a) << endl << Circles(b) << endl << Circles(b) << endl;*/
	/*
	Proc19. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
    и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью
    найти площади трех колец, для которых даны внешние и внутренние радиусы. Воспользоваться формулой площади круга радиуса R: S = π·R 2 . В
качестве значения π использовать 3.14.
	*/
	/*double n, i, g, e, r, s;
	cin >> n >> i >> g >> e >> r >> s;
	cout << RingS(n, i) << endl << RingS(g, e) << endl << RingS(r, s) << endl;*/
	

}