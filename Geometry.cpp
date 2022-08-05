// Copyright [2021] <Krzysztof Hoszowski, Sean Adin>
// Lab 3

#include "Geometry.h"

using std::cout;

bool is_rectangle_proper(const Rect &r) {
    if ((r.getcornerupl().get_x() < r.getcornerlor().get_x())
         && (r.getcornerupl().get_y() < r.getcornerlor().get_y()))
        return true;
    else
        return false;
}
void displayrect(const Rect &r) {
    cout << "Upper-left corner: ";
    r.getcornerupl().get_point();
    cout << " Lower-right corner: ";
    r.getcornerlor().get_point();
    cout << "\n\n";
}
Rect return_rectangle_intersection(const Rect &r1, const Rect &r2) {
    int upl_x, upl_y, lor_x, lor_y;

    // Upper-left corner
    if (r1.getcornerupl().get_x() > r2.getcornerupl().get_x())
        upl_x =  r1.getcornerupl().get_x();
    else
        upl_x =  r2.getcornerupl().get_x();

    if (r1.getcornerupl().get_y() > r2.getcornerupl().get_y())
        upl_y =  r1.getcornerupl().get_y();
    else
        upl_y =  r2.getcornerupl().get_y();

    // Lower-right corner
    if (r1.getcornerlor().get_x() < r2.getcornerlor().get_x())
        lor_x =  r1.getcornerlor().get_x();
    else
        lor_x =  r2.getcornerlor().get_x();

    if (r1.getcornerlor().get_y() < r2.getcornerlor().get_y())
        lor_y =  r1.getcornerlor().get_y();
    else
        lor_y =  r2.getcornerlor().get_y();

    Point upl(upl_x, upl_y);
    Point lor(lor_x, lor_y);

    Rect r(upl, lor);

    if (!(is_rectangle_proper(r))) {
        cout << "Warning: The rectangles do not intersect.\n";
        cout << "The returned rectangle has a different geometric meaning.\n\n";
    }


    return r;
}
Rect return_rectangle_boundingbox(const Rect &r1, const Rect &r2) {
    int upl_x, upl_y, lor_x, lor_y;

    // Upper-left corner
    if (r1.getcornerupl().get_x() < r2.getcornerupl().get_x())
        upl_x =  r1.getcornerupl().get_x();
    else
        upl_x =  r2.getcornerupl().get_x();

    if (r1.getcornerupl().get_y() < r2.getcornerupl().get_y())
        upl_y =  r1.getcornerupl().get_y();
    else
        upl_y =  r2.getcornerupl().get_y();

    // Lower-right corner
    if (r1.getcornerlor().get_x() > r2.getcornerlor().get_x())
        lor_x =  r1.getcornerlor().get_x();
    else
        lor_x =  r2.getcornerlor().get_x();

    if (r1.getcornerlor().get_y() > r2.getcornerlor().get_y())
        lor_y =  r1.getcornerlor().get_y();
    else
        lor_y =  r2.getcornerlor().get_y();

    Point upl(upl_x, upl_y);
    Point lor(lor_x, lor_y);

    Rect r(upl, lor);

    return r;
}
