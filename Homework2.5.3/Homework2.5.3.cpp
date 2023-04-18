// Homework2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;
    int A, B, C, D;
    int a, b, c, d;
    std::string name;
    std::string ron;
    Figure(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 0;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->ron = "Правильная";
        name = "Фигура";
    }
public:
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
        this->ron = "Правильная";
        name = "Фигура";
    }
    virtual void print_fig() {      
                std::cout << name << ":\n" << ron << std::endl
                    << "Количество сторон: " << sides_count << std::endl;           
        }
};
class Triangle :public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C):Figure(a, b, c, 0, A, B, C, 0) {
        sides_count = 3;
        name = "Треугольник";
        if ((A + B + C) != 180) {
            ron = "Неправильная";
        }
    }
    void print_fig() override {
        std::cout << name << ":\n" << ron << std::endl
            << "Количество сторон: " << sides_count << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};
class Triangle90 :public Triangle {
public:
    Triangle90(int a, int b, int c, int A, int B) :Triangle(a, b, c, A, B, 90) {
        name = "Прямоугольный треугольник";
    }
};
class Triangle2SideEqual :public Triangle {
public:
    Triangle2SideEqual(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник";
    }
};
class TriangleAllEqual :public Triangle {
public:
    TriangleAllEqual(int a) :Triangle(a, a, a, 60, 60, 60) {
        name = "Равносторонний треугольник";
    }
};
class Quadrilateral :public Figure {
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D): Figure(a, b, c, d, A, B, C, D) {
        sides_count = 4;
        name = "Четырехугольник";
        if ((A + B + C + D) != 360) {
            ron = "Неправильная";
        }
    }
    void print_fig() override {
        std::cout << name << ":\n" << ron << std::endl
            << "Количество сторон: " << sides_count << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c <<
            " d=" << d << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C <<
            " D=" << D << std::endl;
    }
};
class Parallelogram :public Quadrilateral {
public:
    Parallelogram(int a, int b, int A, int B) :Quadrilateral(a, b, a, b, A, B, A, B) {
        name = "Параллелограм";
    }
};
class Rectangle :public Parallelogram {
public:
    Rectangle(int a, int b) :Parallelogram(a, b, 90, 90) {
        name = "Прямоугольник";
    }
};
class Square :public Rectangle {
public:
    Square(int a) :Rectangle(a, a) {
        name = "Квадрат";
    }
};
class Rhombus :public Parallelogram {
public:
    Rhombus(int a, int A, int B) :Parallelogram(a, a, A, B) {
        name = "Ромб";
    }
};
void print_info(Figure& fig) {
    fig.print_fig();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figu;
    Triangle tri(10, 20, 30, 50, 60, 70);
    Triangle90 tri90(10, 20, 30, 50, 60);
    Triangle90 tri91(10, 20, 30, 50, 40);
    Triangle2SideEqual tri2se(10, 20, 50, 60);
    TriangleAllEqual triae(30);
    Quadrilateral qua(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rec(10, 20);
    Square squa(20);
    Parallelogram prll(20, 30, 30, 40);
    Rhombus rho(30, 30, 40);

    print_info(figu);
    std::cout << std::endl;
    print_info(tri);
    std::cout << std::endl;
    print_info(tri90);
    std::cout << std::endl;
    print_info(tri91);
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
