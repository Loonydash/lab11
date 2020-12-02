#include "mainwindow.h"
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "VectorDocument.h"
#include <string>
#include <QApplication>
using namespace std;

/*VectorDocument print_menu(VectorDocument Document)
{

    for(int k=0;k<3;k++){
        Document.AddCircle(k+1);
        Document.AddRectangle(k+1);
    }

    int vibor;
    while(true){
        cout << "Что вы хотите сделать: " << endl;
        cout << "Чтобы добавить фигуру - 1"<< endl;
        cout << "Чтобы удалить фигуру - 2"<< endl;
        cout << "Чтобы работать с кругом - 3"<< endl;
        cout << "Чтобы работать с прямоугольником - 4"<< endl;
        cout << "Чтобы работать со всем документом - 5"<< endl;
        cout << "Чтобы выйти - 0"<< endl;
        cin >> vibor;
        switch (vibor) {
            case 1:
                int icase1;
                cout << "Какую фигуру вы хотите добавить?" << endl;
                cout << "Круг - 1" << endl;
                cout << "Прямоугольник - 2" << endl;
                cin >> icase1;
                    switch (icase1) {
                        case 1:
                            int icase11;
                            cout << "На какое место вы хотите его поставить?" <<endl;
                            cin >> icase11;
                            Document.AddCircle(icase11);
                            break;
                        case 2:
                            int icase12;
                            cout << "На какое место вы хотите его поставить?" << endl;
                            cin >> icase12;
                            Document.AddRectangle(icase12);
                            break;
                        default: cout << "Вы выбрали неверный вариант" << endl;
                            break;
                    }
                break;

            case 2:
                int icase2;
                cout << "Какую фигуру вы хотите удалить?" << endl;
                cout << "Круг - 1" << endl;
                cout << "Прямоугольник - 2" << endl;
                cin >> icase2;

                    switch (icase2) {
                        case 1:
                            int icase21;
                            cout << "С какого места вы хотите его удалить?" <<endl;
                            cin >> icase21;
                            Document.DeleteCircle(icase21);
                            break;
                        case 2:
                            int icase22;
                            cout << "С какого места вы хотите его удалить?" << endl;
                            cin >> icase22;
                            Document.DeleteRectangle(icase22);
                            break;

                        default: cout << "Вы выбрали неверный вариант" << endl;
                            break;
                    }
                break;
            case 3:
                int xc, yc, rc, CR, CG, CB, COpacity;
                int icase3;
                cout << "С каким кругом вы хотите работать?" << endl;
                cin >> icase3;
                for (int i =0; i !=1; ){
                    cout << "Что вы хотите сделать с кругом?" << endl;
                    cout << "Задать координаты и радиус - 1" << endl;
                    cout << "Задать цвет - 2" << endl;
                    cout << "Задать прозрачность - 3" << endl;
                    cout << "Вывести информацию - 4" << endl;
                    cout << "Выход - 0" << endl;
                    int icase31;
                    cin >>icase31;
                    switch (icase31) {
                        case 1:
                            cout << "x: ";
                            cin >> xc;
                            cout << "y: ";
                            cin >> yc;
                            cout << "r: ";
                            cin >> rc;
                            Document.SetxyrCircle(xc, yc, rc, icase3);
                            break;

                        case 2:
                            cout << "R: ";
                            cin >> CR;
                            cout << "G: ";
                            cin >> CG;
                            cout << "B: ";
                            cin >> CB;
                            Document.SetCircleColor(CR, CG, CB, icase3);
                            break;

                        case 3:
                            cout << "Прозрачность %: ";
                            cin >> COpacity;
                            Document.SetCircleOpacity(COpacity, icase3);
                            break;

                        case 4:
                            Document.PrintCircleXYR(icase3);
                            Document.PrintCircleArea(icase3);
                            Document.PrintCircleColor(icase3);
                            Document.PrintCircleOpacity(icase3);
                            Document.PrintCirclePerimeter(icase3);
                            break;

                        case 0:
                            i=1;
                            break;

                        default: cout << "Вы выбрали неверный вариант";
                            break;
                    }

                }
               break;

            case 4:
                int x1, y1, x2, y2, RR, RG, RB, ROpacity;
                               int icase4;
                               cout << "С каким прямоугольником вы хотите работать?" << endl;
                               cin >> icase4;
                               for (int i =0; i !=1; ){
                                   cout << "Что вы хотите сделать с прямоугольником?" << endl;
                                   cout << "Задать координаты точек - 1" << endl;
                                   cout << "Задать цвет - 2" << endl;
                                   cout << "Задать прозрачность - 3" << endl;
                                   cout << "Вывести информацию - 4" << endl;
                                   cout << "Выход - 0" << endl;
                                   int icase41;
                                   cin >>icase41;
                                   switch (icase41) {
                                       case 1:
                                           cout << "x1: ";
                                           cin >> x1;
                                           cout << "y1: ";
                                           cin >> y1;
                                           cout << "x2: ";
                                           cin >> x2;
                                           cout << "y2: ";
                                           cin >> y2;
                                           Document.SetxyRectangle(x1, y1, x2, y2, icase4);
                                           break;

                                       case 2:
                                           cout << "R: ";
                                           cin >> RR;
                                           cout << "G: ";
                                           cin >> RG;
                                           cout << "B: ";
                                           cin >> RB;
                                           Document.SetRectangleColor(RR, RG, RB, icase4);
                                           break;

                                       case 3:
                                           cout << "Прозрачность %: ";
                                           cin >> ROpacity;
                                           Document.SetRectangleOpacity(ROpacity, icase4);
                                           break;

                                       case 4:
                                           Document.PrintRectangleXY(icase4);
                                           Document.PrintRectangleArea(icase4);
                                           Document.PrintRectangleColor(icase4);
                                           Document.PrintRectanglePerimeter(icase4);
                                           Document.PrintRectangleOpacity(icase4);
                                           break;

                                       case 0:
                                           i=1;
                                           break;

                                       default: cout << "Вы выбрали неверный вариант" << endl;
                                           break;
                                   }

                               }
                break;

            case 5:
                int pr;
                int icase5, icase51, icase53, circle1, circle2, rectangle1, rectangle2;
                double angle;

                cout << "Что вы хотите сделать?" << endl;
                for (int i =0; i !=1;){
                    cout << "Масштабирование - 1"  << endl;
                    cout << "Вращение - 2"  << endl;
                    cout << "Поменять местами - 3"  << endl;
                    cout << "Выход - 0"  << endl;
                    cin >> icase5;
                    switch (icase5) {
                        case 1:
                            cout << "Масштабирование всех фигур" << endl;
                                           cout << "Увеличить на % - 1" << endl;
                                           cout << "Уменьшить на % - 2" << endl;
                                           cin >> icase51;
                                           switch (icase51) {
                                               case 1:
                                                   cout << "На сколько процентов хотите увеличить?"<< endl;
                                                   cin >> pr;
                                                   Document.MashtabPlus(pr);
                                                   break;
                                               case 2:
                                                   cout << "На сколько процентов хотите уменьшить?"<< endl;
                                                   cin >> pr;
                                                   Document.MashtabMinus(pr);
                                               default:
                                                   cout << "Вы ввели неверный вариант"<< endl;
                                                   break;
                                           }
                            break;

                        case 2:
                            cout << "На какой угол вы хотите вращать весь документ?" << endl;
                            cin >> angle;
                            Document.Rotating(angle);
                            break;

                        case 3:

                            cout << "Поменять местами круги - 1" << endl;
                            cout << "Поменять местами прямоугольники - 2" << endl;
                            cin >> icase53;
                            switch (icase53) {
                                case 1:
                                    cout << "Какие круги вы хотите поменять местами: " << endl;
                                    cout << "Место первого: ";
                                    cin >> circle1;
                                    cout << "Место Второго: ";
                                    cin >> circle2;
                                    Document.MoveToCircles(circle1, circle2);
                                    break;
                                case 2:
                                    cout << "Какие прямоугольники вы хотите поменять местами: " << endl;
                                    cout << "Место первого: ";
                                    cin >> rectangle1;
                                    cout << "Место Второго: ";
                                    cin >> rectangle2;
                                    Document.MoveToCircles(rectangle1, rectangle2);
                                    break;
                                default: cout << "Вы ввели неверный вариант"<< endl;
                                    break;
                            }
                            break;

                        case 0:
                            i=1;
                            break;

                        default:
                            cout << "Вы ввели неверный вариант"<< endl;
                            break;
                    }
                }

                break;

                default:
                cout << "Вы выбрали неверный вариант"<< endl;
                break;
            case 0:
                return (Document);
        }

    }
}*/
int main(int argc, char *argv[])
{

    //print_menu(Document);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
