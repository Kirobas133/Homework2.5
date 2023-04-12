// Homework2.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

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
class Triangle:public Figure {
public:
    Triangle() {
        sides_count = 3;
    }
    int get_sides_count() {
        return sides_count;
    }
};
class Quadrilateral :public Figure {
public:
    Quadrilateral() {
        sides_count = 4;
    }
    int get_sides_count() {
        return sides_count;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle treangle;
    Quadrilateral quadrilaterial;
    std::cout << "Количество сторон:\n";
    std::cout << "Фигура: " << figure.get_sides_count() << std::endl;
    std::cout << "Треугольник: " << treangle.get_sides_count() << std::endl;
    std::cout << "Четырехугольник: " << quadrilaterial.get_sides_count() << std::endl;
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
