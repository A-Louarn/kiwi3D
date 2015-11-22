#pragma once

#include <cmath>

namespace kiwi
{
    class Vector3D
    {
        public:
            Vector3D(double x, double y, double z);
            Vector3D(Vector3D const& v);

            double x() const;
            double y() const;
            double z() const;

            double norm() const;

            Vector3D& operator+=(Vector3D const& rhs);
            Vector3D& operator-=(Vector3D const& rhs);

            Vector3D& operator*=(double rhs);
            Vector3D& operator/=(double rhs);

            Vector3D operator-() const;

            Vector3D normalize() const;
            Vector3D cross(Vector3D const& rhs) const;
            double dot(Vector3D const& rhs) const;

        private:
            double m_x;
            double m_y;
            double m_z;
    };

    Vector3D operator+(Vector3D const& lhs, Vector3D const& rhs);
    Vector3D operator-(Vector3D const& lhs, Vector3D const& rhs);

    Vector3D operator*(double lhs, Vector3D const& rhs);
    Vector3D operator/(double lhs, Vector3D const& rhs);

    Vector3D operator*(Vector3D const& lhs, double rhs);
    Vector3D operator/(Vector3D const& lhs, double rhs);
}
