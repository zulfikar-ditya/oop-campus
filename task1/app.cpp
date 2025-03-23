#include <iostream>
#include <string>
#include <cmath>
class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double a, double b) : num1(a), num2(b) {}

    double add() const {
        return num1 + num2;
    }

    double subtract() const {
        return num1 - num2;
    }

    double multiply() const {
        return num1 * num2;
    }

    double divide() const {
        if (num2 == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
        return num1 / num2;
    }
};
class Student {
private:
    std::string name;
    int id;
    char grade;

public:
    Student(const std::string& studentName, int studentId, char studentGrade)
        : name(studentName), id(studentId), grade(studentGrade) {}

    std::string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    char getGrade() const {
        return grade;
    }

    void setName(const std::string& studentName) {
        name = studentName;
    }

    void setId(int studentId) {
        id = studentId;
    }

    void setGrade(char studentGrade) {
        grade = studentGrade;
    }

    void displayInfo() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Student Grade: " << grade << std::endl;
    }
};
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        }
    }

    double calculateArea() const {
        return length * width;
    }
};
class Counter {
private:
    int count;

public:
    Counter() : count(0) {}
    Counter(int initialValue) : count(initialValue) {}

    void increment() {
        count++;
    }

    void reset() {
        count = 0;
    }

    int getCount() const {
        return count;
    }
};
class Point {
private:
    double x;
    double y;

public:
    Point() : x(0), y(0) {}
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double xCoord) {
        x = xCoord;
    }

    void setY(double yCoord) {
        y = yCoord;
    }

    double distanceFromOrigin() const {
        return std::sqrt(x*x + y*y);
    }

    double distanceFrom(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return std::sqrt(dx*dx + dy*dy);
    }
};
int main() {
    Calculator calc(10, 5);
    std::cout << "Calculator Demo:" << std::endl;
    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    std::cout << "Multiplication: " << calc.multiply() << std::endl;
    std::cout << "Division: " << calc.divide() << std::endl;
    std::cout << std::endl;

    Student student("John Doe", 12345, 'A');
    std::cout << "Student Demo:" << std::endl;
    student.displayInfo();
    std::cout << std::endl;

    Rectangle rect(5, 3);
    std::cout << "Rectangle Demo:" << std::endl;
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << std::endl;

    Counter counter;
    std::cout << "Counter Demo:" << std::endl;
    std::cout << "Initial count: " << counter.getCount() << std::endl;
    counter.increment();
    counter.increment();
    std::cout << "After 2 increments: " << counter.getCount() << std::endl;
    std::cout << std::endl;

    Point p1(3, 4);
    Point p2(6, 8);
    std::cout << "Point Demo:" << std::endl;
    std::cout << "Distance of p1(3,4) from origin: " << p1.distanceFromOrigin() << std::endl;
    std::cout << "Distance between p1(3,4) and p2(6,8): " << p1.distanceFrom(p2) << std::endl;

    return 0;
}