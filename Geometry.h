// Copyright [2021] <Krzysztof Hoszowski Album number:259771, Sean Adin Album number:259081>
// Lab 3

#ifndef GEOMETRY_H_
#define GEOMETRY_H_

#include <windows.h>
#include <iostream>

using std::cout;

class Point {
 private:
    int x, y;
 public:
    Point(int vx, int vy) {x = vx; y = vy;}
    Point() {x = 0; y = 0;}
    void set_x(int vx) {x = vx;}
    void set_y(int vy) {y = vy;}
    void set_point(int vx, int vy) {this->set_x(vx); this->set_y(vy);}
    int  get_x() {return x;}
    int  get_y() {return y;}
    void get_point() {cout << '[' << get_x() << ',' << get_y() << ']';}
};

class Rect {
 private:
    Point corner_upl;
    Point corner_lor;
 public:
    Rect(const Point &upl, const Point &lor):corner_upl(upl), corner_lor(lor) {}
    Rect() {corner_upl.set_point(0, 0); corner_lor.set_point(0, 0);}
    Point getcornerupl( ) const { return corner_upl; }
    Point getcornerlor( ) const { return corner_lor; }
};
#endif  // GEOMETRY_H_
