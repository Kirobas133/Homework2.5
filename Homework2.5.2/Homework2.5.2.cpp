// Homework2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count;

public:
    Figure() {
        sides_count = 0;
    }
    int get_sides_count() {
        return sides_count;
    }
};
class Triangle :public Figure {
protected:
    int A, B, C;
    int a, b, c;
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
    }int get_side_a() {
        return a;
    }
    int get_side_a() {
        return b;
    }
    int get_side_a() {
        return c;
    }
    int get_side_a() {
        return A;
    }
    int get_side_a() {
        return B;
    }
    int get_side_a() {
        return C;
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
protected:
    int A, B, C, D;
    int a, b, c, d;
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
    
    int get_sides_count() {
        return sides_count;
    }
    int get_side_a() {
        return a;
    }
    int get_side_a() {
        return b;
    }
    int get_side_a() {
        return c;
    }
    int get_side_a() {
        return d;
    }
    int get_side_a() {
        return A;
    }
    int get_side_a() {
        return B;
    }
    int get_side_a() {
        return C;
    }
    int get_side_a() {
        return D;
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

void print_info() {

}

int main()
{
    setlocale(LC_ALL, "Russian");
    Parallelogram squadron(20, 30, 29, 49);
    squadron.get_info();

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
