#pragma once
#include "Rotation.hpp"
#include "Vector3D.hpp"

class AxisAngleRotation : public Rotation {
private:
    Vector3D axis_;
    double angle_;
public:
    /**
     * @post: Initializes axis_ to Vector3D(0,0,0) and angle_ to 0.0; sets type_ to "AXIS_ANGLE"
     */
    AxisAngleRotation();

    /**
     * @param axis: The rotation axis as a Vector3D
     * @param angle: The rotation angle
     * @post: Initializes axis_ and angle_ to provided values; sets type_ to "AXIS_ANGLE"
     */
    AxisAngleRotation(const Vector3D& axis, double angle);

    /** @return: The value of axis_ @note: const */
    Vector3D getAxis() const;
    /** @return: The value of angle_ @note: const */
    double getAngle() const;
};
