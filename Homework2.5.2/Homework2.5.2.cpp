// Homework2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;
    int A, B, C, D;
    int a, b, c, d;
    Figure() {
       sides_count = 0;
       this->A = 0;
       this->B = 0;
       this->C = 0;
       this->D = 0;
       this->a = 0;
       this->b = 0;
       this->c = 0;
       this->d = 0;
   }
public:
   
    int get_sides_count() {
        return sides_count;
    }
    void print_fig() {
        if (D == 0) {
            if (C == 90) {
                std::cout << "Прямоугольный треугольник:\n";
            }
            else if (a == c && c != b && A == C) {
                std::cout << "Равнобедренный треугольник:\n";
            }
            else if (a == b && a == c) {
                std::cout << "Равносторонний треугольник:\n";
            }
            else {
                std::cout << "Треугольник:\n";
            }
            std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
            std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
        }
        else {
            if (a == c && c != b && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
                std::cout << "Прямоугольник:\n";
            }
            else if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
                std::cout << "Квадрат:\n";
            }
            else if (a == c && c != b && b == d && A == C && C != B && B == D) {
                std::cout << "Параллелограмм:\n";
            }
            else if (a == b && b == c && c == d && A == C && C != B && B == D) {
                std::cout << "Ромб:\n";
            }
            else {
                std::cout << "Четырехугольник:\n";
            }
            std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c 
                << " d = " << d << std::endl;
            std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C
                << " D = " << D << std::endl;
        }
    }
};
class Triangle :public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C) {
        sides_count = 3;
        this->A = A;
        this->B = B;
        this->C = C;
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int get_sides_count() {
        return sides_count;
    }
};
class Triangle90 :public Triangle {
public:
    Triangle90(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90){}
};
class Triangle2SideEqual :public Triangle {
public:
    Triangle2SideEqual(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A){}
};
class TriangleAllEqual :public Triangle {
public:
    TriangleAllEqual(int a) :Triangle(a, a, a, 60, 60, 60){}
};
class Quadrilateral :public Figure {
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 4;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }
};
class Parallelogram :public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B) :Quadrilateral(a, b, a, b, A, B, A, B) {}

    void get_info() {
        std::cout << A << "\n" << B << "\n" << C << "\n" << D << "\n" << a << "\n" << b << "\n" << c << "\n" << d << "\n";
    }
};
class Rectangle :public Parallelogram {
public:
    Rectangle(int a, int b) :Parallelogram(a, b, 90, 90){}
};
class Square :public Rectangle {
public:
    Square(int a) :Rectangle(a, a){}
};
class Rhombus:public Parallelogram {
public:
    Rhombus(int a, int A, int B) :Parallelogram(a, a, A, B){}
};
void print_info(Figure& fig) {
    fig.print_fig();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle tri(10, 20, 30, 50, 60, 70);
    Triangle90 tri90(10, 20, 30, 50, 60);
    Triangle2SideEqual tri2se(10, 20, 50, 60);
    TriangleAllEqual triae(30);
    Quadrilateral qua(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rec(10, 20);
    Square squa(20);
    Parallelogram prll(20, 30, 30, 40);
    Rhombus rho(30, 30, 40);

    print_info(tri);
    std::cout << std::endl;
    print_info(tri90);
    std::cout << std::endl;
    print_info(tri2se);
    std::cout << std::endl;
    print_info(triae);
    std::cout << std::endl;
    print_info(qua);
    std::cout << std::endl;
    print_info(rec);
    std::cout << std::endl;
    print_info(squa);
    std::cout << std::endl;
    print_info(prll);
    std::cout << std::endl;
    print_info(rho);
    std::cout << std::endl;

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
