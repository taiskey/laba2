

#include <cmath>
#include <iostream>
double calculateTrapezoidArea(double b1, double b2, double h)
{
    // Формула площади трапеции: (сумма оснований * высота) / 2
    double area1 = (b1 + b2) * h / 2;
    return area1;
}
int main()
{
    
    /*Task 1*/
    // Ввод оснований и высоты трапеции с клавиатуры
    double base1, base2, height1;
    std::cout << "Enter the base 1: ";
    std::cin >> base1;
    std::cout << "Enter the base  2: ";
    std::cin >> base2;
    std::cout << "Enter the height: ";
    std::cin >> height1;


    // Вычисление площади трапеции
    double area1 = calculateTrapezoidArea(base1, base2, height1);

    // Вывод результата
    std::cout << "Area of trapezoid: " << area1 << std::endl;

   /*Task 2*/
    double radius; // переменная для радиуса
    double circumference, area2; // переменные для длины окружности и площади круга

    // Ввод радиуса с консоли
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Вычисление длины окружности
    circumference = 2 * 3,14 * radius;
    std::cout << "circumference is: " << circumference << std::endl;

    // Вычисление площади круга
    area2 = 3,14 * pow(radius, 2);
    std::cout << "Area of the circle: " << area2 << std::endl;

    /*Task 3*/
   
    double base, height ; // переменные для основания и высоты треугольника
    double area3 , hypotenuse; // переменные для площади и гипотенузы треугольника

    // Ввод данных с консоли
    std::cout << "Enter the base of triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of triangle: ";
    std::cin >> height;

    // Вычисление площади треугольника
    area3 = (base * height) / 2;
    std::cout << "The area of right triangle: " << area3 << std::endl;

    // Вычисление гипотенузы треугольника
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
    std::cout << "Hypotenuse of right triangle: " << hypotenuse << std::endl;
    
 

    /*Task 4*/

    int number; // переменная для хранения введенного числа
    int sum = 0; // переменная для хранения суммы цифр числа

    // Ввод числа с консоли
    std::cout << "Enter a four-digit number: ";
    std::cin >> number;

    // Проверка, что введено четырехзначное число
    if (number < 1000 || number > 9999) {
        std::cout << "Mistake! Enter a four-digit number." << std::endl;
        return 0;
    }

    // Вычисление суммы цифр числа
    int digit;
    digit = number % 10; // получение последней цифры
    sum += digit; // добавление цифры к сумме
    number /= 10; // удаление последней цифры

    digit = number % 10; // получение новой последней цифры
    sum += digit; // добавление цифры к сумме
    number /= 10; // удаление последней цифры

    digit = number % 10; // получение новой последней цифры
    sum += digit; // добавление цифры к сумме
    number /= 10; // удаление последней цифры

    digit = number % 10; // получение новой последней цифры
    sum += digit; // добавление цифры к сумме

    // Вывод суммы цифр числа
    std::cout << "The sum of the digits of the number: " << sum << std::endl;


    /*Task 5*/

     // Вводим значение числа с консоли
    double number5;
    std::cout << "Enter the number: ";
    std::cin >> number5;

    // Вычисляем полярные координаты
    double radius5 = std::sqrt(number5);
    double angle = std::atan2(0, number5); // Угол равен arctan(0/число)

    // Выводим результат
    std::cout << "In the polar coordinate system, the number " << number5;
    std::cout << " It is represented as (r, 0) = (" << radius5 << ", " << angle << " radian)." << std::endl;

    /*Task 6*/

    // Вводим значение радиуса и угла с консоли
    double radius6, angle6;
    std::cout << "Enter the radius: ";
    std::cin >> radius6;
    std::cout << "Enter the angle in radians: ";
    std::cin >> angle6;

    // Вычисляем декартовы координаты
    double x = radius6 * std::cos(angle6);
    double y = radius6 * std::sin(angle6);

    // Выводим результат
    std::cout << "In the Cartesian coordinate system (r, θ) = (" << radius6 << ", " << angle6 << " радиан) ";
    std::cout << "It is represented as (x, y) = (" << x << ", " << y << ")." << std::endl;

    /*Task 7*/

    double a, b, c;
    std::cout << "Enter the coefficient a: ";
    std::cin >> a;
    std::cout << "Enter the coefficient b: ";
    std::cin >> b;
    std::cout << "Enter the coefficient c: ";
    std::cin >> c;

    double discriminant = b * b - 4 * a * c; // вычисляем дискриминант

    if (discriminant > 0) { // если дискриминант больше нуля, у уравнения два корня
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The equation has two roots: " << root1 << " и " << root2 << std::endl;
    }
    else if (discriminant == 0) { // если дискриминант равен нулю, у уравнения один корень
        double root = -b / (2 * a);
        std::cout << "The equation has one root: " << root << std::endl;
    }
    else { // если дискриминант меньше нуля, у уравнения нет корней
        std::cout << "The equation has no real roots" << std::endl;
    }

    /*Task 8*/

    double a8, b8, c8;
    std::cout << "Введите сторону a: ";
    std::cin >> a8;
    std::cout << "Введите сторону b: ";
    std::cin >> b8;
    std::cout << "Введите сторону c: ";
    std::cin >> c8;

    // Находим медианы треугольника
    double medianA = 0.5 * sqrt(2 * pow(b8, 2) + 2 * pow(c8, 2) - pow(a8, 2));
    double medianB = 0.5 * sqrt(2 * pow(a8, 2) + 2 * pow(c8, 2) - pow(b8, 2));
    double medianC = 0.5 * sqrt(2 * pow(a8, 2) + 2 * pow(b8, 2) - pow(c8, 2));

    // Выводим медианы треугольника
    std::cout << "Медианы треугольника: " << medianA << ", " << medianB << ", " << medianC << std::endl;

    /*Task 9*/

    int k;
    std::cout << "Enter the number of seconds: ";
    std::cin >> k;

    int hours = k / 3600; // находим количество целых часов
    int minutes = (k % 3600) / 60; // находим количество целых минут

    // Выводим результат
    std::cout << "Passed " << hours << " whole hours and" << minutes << " whole minutes since the beginning of the day." << std::endl;


    /*Task 10*/
    double a10, b10, c10;
    std::cout << "Enter the length of side a: ";
    std::cin >> a10;
    std::cout << "Enter the length of side b: ";
    std::cin >> b10;
    std::cout << "Enter the length of side c: ";
    std::cin >> c10;

    if (a10 == b10 && b10 != c10) { 
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else if (b10 == c10 && c10 != a10) { 
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else if (c10 == a10 && a10 != b10) { 
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else {
        std::cout << "The triangle is not isosceles." << std::endl;
    }
    return 0;
   
}



    



