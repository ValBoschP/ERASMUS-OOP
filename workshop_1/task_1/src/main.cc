#include <iostream>
#include <cmath>

struct Triangle {
    float a, b, c;
};

struct RectTriangle {
    float a, b;
};

float FindArea(Triangle t) {    // Heron Formula
    float area, s;      // s = semiperimeter
    s = (t.a + t.b + t.c) / 2;
    area = sqrt(s * (s - t.a) * (s - t.b) * (s - t.c));
    return area;
}

float FindArea(RectTriangle rt) {   // (a*b)/2
    float area;
    area = (rt.a * rt.b) / 2;
    return area;
}

float LargestFace(float tr_areas[10], float rt_areas[10]) {
    float largest_face = 0;
    for (int i = 0; i < 10; ++i) {
        if (largest_face < tr_areas[i]) largest_face = tr_areas[i];
        if (largest_face < rt_areas[i]) largest_face = rt_areas[i];
    }
    return largest_face;
}


int main() {
    Triangle tr[10];
    RectTriangle rt[10];

    int count_t, count_rt;
    std::cout << "Insert the count of the traingles: ";
    std::cin >> count_t;
    for (int i = 0; i < count_t; ++i) {
        std::cout << "Triangle " << i + 1 << ":" << std::endl;
        std::cout << "Insert the first side: ";
        std::cin >> tr[i].a;
        std::cout << "Insert the second side: ";
        std::cin >> tr[i].b;
        std::cout << "Insert the third side: ";
        std::cin >> tr[i].c;
    }
    
    std::cout << std::endl;

    std::cout << "Insert the count of rect. triangles: ";
    std::cin >> count_rt;
    for (int i = 0; i < count_rt; ++i) {
        std::cout << "Rect. Triangle " << i + 1 << ":" << std::endl;
        std::cout << "Insert the first side: ";
        std::cin >> rt[i].a;
        std::cout << "Insert the second side: ";
        std::cin >> rt[i].b;
    }

    float tr_areas[10], rt_areas[10];
    std::cout << std::endl;

    std::cout << "Areas of triangles: " << std::endl;
    for (int i = 0; i < count_t; ++i) {
        std::cout << "Triangle " << i + 1 << ": " << FindArea(tr[i]) << std::endl;
        tr_areas[i] = FindArea(tr[i]);
    }

    std::cout << std::endl;

    std::cout << "Areas of rect. triangles: " << std::endl;
    for (int i = 0; i < count_rt; ++i) {
        std::cout << "Rect.Triangle " << i + 1 << ": " << FindArea(rt[i]) << std::endl;
        rt_areas[i] = FindArea(rt[i]);
    }

    std::cout << std::endl;
    float largest_face;
    largest_face = LargestFace(tr_areas, rt_areas);
    for (int i = 0; i < count_t; ++i) {
        if (largest_face == tr_areas[i]) {
            std::cout << "Triangle " << i + 1 << " has the largest face with " << largest_face;
            return 0;
        }
        if (largest_face == rt_areas[i]) {
            std::cout << "Rect.Triangle " << i + 1 << " has the largest face with " << largest_face;
            return 0;
        }
    }

    return 0;
}