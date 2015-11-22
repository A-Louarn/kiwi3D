#include "Vector3D.h"

using namespace kiwi;

Vector3D::Vector3D(double x, double y, double z): m_x(x), m_y(y), m_z(z){}

Vector3D::Vector3D(Vector3D const& v): Vector3D(v.m_x, v.m_y, v.m_z){}

double Vector3D::x() const{return m_x;}
double Vector3D::y() const{return m_y;}
double Vector3D::z() const{return m_z;}

double Vector3D::norm() const
{
    return sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
}

Vector3D& Vector3D::operator+=(Vector3D const& rhs)
{
    m_x += rhs.m_x;
    m_y += rhs.m_y;
    m_z += rhs.m_z;

    return *this;
}

Vector3D& Vector3D::operator-=(Vector3D const& rhs)
{
    m_x -= rhs.m_x;
    m_y -= rhs.m_y;
    m_z -= rhs.m_z;

    return *this;
}

Vector3D& Vector3D::operator*=(double rhs)
{
    m_x *= rhs;
    m_y *= rhs;
    m_z *= rhs;

    return *this;
}

Vector3D& Vector3D::operator/=(double rhs)
{
    m_x /= rhs;
    m_y /= rhs;
    m_z /= rhs;

    return *this;
}

Vector3D Vector3D::operator-() const
{
    return Vector3D(-m_x, -m_y, -m_z);
}

Vector3D Vector3D::normalize() const
{
    double l = this->norm();
    return Vector3D(m_x/l, m_y/l, m_z/l);
}

Vector3D Vector3D::cross(Vector3D const& rhs) const
{
    return Vector3D(m_y*rhs.m_z - m_z*rhs.m_y, m_z*rhs.m_x - m_x*rhs.m_z, m_x*rhs.m_y - m_y*rhs.m_x);
}

double Vector3D::dot(Vector3D const& rhs) const
{
    return m_x*rhs.m_x + m_y*rhs.m_y + m_z*rhs.m_z;
}

Vector3D operator+(Vector3D const& lhs, Vector3D const& rhs)
{
    Vector3D tmp(rhs);
    return tmp += lhs;
}

Vector3D operator-(Vector3D const& lhs, Vector3D const& rhs)
{
    Vector3D tmp(rhs);
    return tmp -= lhs;
}

Vector3D operator*(double lhs, Vector3D const& rhs)
{
    Vector3D tmp(rhs);
    return tmp *= lhs;
}

Vector3D operator/(double lhs, Vector3D const& rhs)
{
    Vector3D tmp(rhs);
    return tmp /= lhs;
}

Vector3D operator*(Vector3D const& lhs, double rhs)
{
    Vector3D tmp(lhs);
    return tmp *= rhs;
}

Vector3D operator/(Vector3D const& lhs, double rhs)
{
    Vector3D tmp(lhs);
    return tmp /= rhs;
}
