#include <iostream>
using namespace std;

template<class V>
class Vector {
private:
    V v;
public:
    Vector(V v1) : v(v1) {}

    double calculateDotProduct(const Vector<V>& vobject) const {
        return v.calculateDotProduct(vobject.v);
    }
};

class My2DVector {
private:
    double x, y;
public:
    My2DVector(double x1 = 0, double y1 = 0) : x(x1), y(y1) {}

    double calculateDotProduct(const My2DVector& vobj) const {
        return x * vobj.x + y * vobj.y;
    }

    friend ostream& operator<<(ostream& c, const My2DVector& v) {
        c << "(" << v.x << ", " << v.y << ")";
        return c;
    }

    friend istream& operator>>(istream& in, My2DVector& v) {
        in >> v.x >> v.y;
        return in;
    }
};

class My3DVector {
private:
    double x, y, z;
public:
    My3DVector(double x1 = 0, double y1 = 0, double z1 = 0) : x(x1), y(y1), z(z1) {}

    double calculateDotProduct(const My3DVector& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    friend ostream& operator<<(ostream& c, const My3DVector& v) {
        c << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return c;
    }

    friend istream& operator>>(istream& in, My3DVector& v) {
        in >> v.x >> v.y >> v.z;
        return in;
    }
};

int main() {
    My2DVector v12D(2, 3), v2_2d(4, 6);
    My3DVector v13D(2, 3, 6), v2_3d(4, 6, 2);

    Vector<My2DVector> vec12D(v12D), vec2_2d(v2_2d);
    Vector<My3DVector> vec13D(v13D), vec2_3d(v2_3d);

    cout << "2D Vectors: " << v12D << " and " << v2_2d << "\n";
    cout << "Dot product of 2D vectors: " << vec12D.calculateDotProduct(vec2_2d) << "\n\n";

    cout << "3D Vectors: " << v13D << " and " << v2_3d << "\n";
    cout << "Dot product of 3D vectors: " << vec13D.calculateDotProduct(vec2_3d) << "\n";

    return 0;
}
