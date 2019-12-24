#pragma once
#include <math.h>

#define Vec3T template <class T> Vector3<T>
#define Vec2T template <class T> Vector2<T>
#define Sqr(a) Exp(a, 2);

namespace ZMath {
    template <class T> class Vector3 {
    public:
        Vector3(T, T, T);
        Vector3();
        Vector3<T> Normalized();
        T DistFrom(Vector3<T>);
        T Magnitude();

        Vector3<T> operator +(const Vector3<T>);
        bool operator ==(const Vector3<T>);
        
        static Vector3<T> Zero = {0, 0, 0};
        T x;
        T y;
        T z;
    };

    template <class T> class Vector2 {
    public:
        Vector2(T, T);
        Vector2();
        Vector2<T> Normalized();
        T DistFrom(Vector2<T>);
        T Magnitude();

        Vector2<T> operator +(const Vector2<T>);
        bool operator ==(const Vector2<T>);

        static Vector2<T> Zero = {0, 0};
        T x;
        T y;
    };

    typedef Vector3<float> Vec3f;
    typedef Vector2<float> Vec2f;

    double Sqrt(double);
    double Exp(double, double);

}