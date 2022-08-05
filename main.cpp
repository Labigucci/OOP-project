// Copyright [2021] <Krzysztof Hoszowski, Sean Adin>
// Lab 3

#include "Geometry.h"

using std::cout;

int main() {
    Point one_upl(0, 0);
    Point one_lor(3, 3);
    Point two_upl(2, 2);
    Point two_lor(4, 4);

    Rect r1(one_upl, one_lor);
    Rect r2(two_upl, two_lor);
    Rect r;

    cout << "Rectangle 1:\n";
    displayrect(r1);

    cout << "Rectangle 2:\n";
    displayrect(r2);

    cout << "Intersection:\n";
    r = return_rectangle_intersection(r1, r2);
    displayrect(r);

    cout << "Bounding box:\n";
    r = return_rectangle_boundingbox(r1, r2);
    displayrect(r);

    return 0;
}
