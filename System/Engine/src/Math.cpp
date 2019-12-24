#include "Math.h"

using namespace ZMath;

double ZMath::Sqrt(double num) {
    return std::sqrt(num);
}

double ZMath::Exp(double base, double exp) {
    return std::pow(base, exp);
}

template <class T> Vector3<T>::Vector3(T x, T y, T z) : x(x), y(y), z(z) {}
template <class T> Vector3<T>::Vector3() : x(0), y(0), z(0) {}
template <class T> Vector3<T> Vector3<T>::Normalized() {
    Vector3<T> normalised;
    constexpr float magnitude = Magnitude();
    static_assert (magnitude > 0);
    normalised.x = this->x / magnitude;
    normalised.y = this->y / magnitude;
    normalised.z = this->z / magnitude;
    return normalised;
}
template <class T> T Vector3<T>::Magnitude() {
    return Sqrt(Sqr(x) + Sqr(y) + Sqr(z));
}
template <class T> T Vector3<T>::DistFrom(Vector3<T> other) {
    float x1 = other.x, y1 = other.y, z1 = other.z;
    return Sqrt(Sqr(x1 - x) + Sqr(y1 - y) + Sqr(z1 - z));
}
template <class T> Vector3<T> Vector3<T>::operator+(Vector3<T> other) {
    Vector3<T> out;
    out.x += other.x;
    out.y += other.y;
    out.z += other.z;
    return out;
}
template <class T> bool Vector3<T>::operator==(Vector3<T> other) {
    return (other.x == this->x && other.y == this->y && other.z == this->z);
}

template <class T> Vector2<T>::Vector2(T x, T y) : x(x), y(y) {}
template <class T> Vector2<T>::Vector2() : x(0), y(0) {}
template <class T> Vector2<T> Vector2<T>::Normalized() {
    Vector2<T> normalised;
    float magnitude = Maagnitude();
    static_assert (magnitude > 0);
    normalised.x = vec.x / magnitude;
    normalised.y = vec.y / magnitude;
    return normalised;
}
template <class T> T Vector2<T>::Magnitude() {
    return Sqrt(Sqr(x) + Sqr(y));
}
template <class T> T Vector2<T>::DistFrom(Vector2<T> other) {
    float x1 = other.x, y1 = other.y;
    return Sqrt(Sqr(x1 - x) + Sqr(y1 - y));
}
template <class T> Vector2<T> Vector2<T>::operator+(Vector2<T> other) {
    Vector3<T> out;
    out.x += other.x;
    out.y += other.y;
    return out;
}
template <class T> bool Vector2<T>::operator==(Vector2<T> other) {
    return (other.x == this->x && other.y == this->y);
}