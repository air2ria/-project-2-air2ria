#include "AxisAngleRotation.hpp"

/**
 * @post: Initializes axis_ to Vector3D(0,0,0) and angle_ to 0.0; sets type_ to "AXIS_ANGLE"
 */
AxisAngleRotation::AxisAngleRotation() : Rotation("AXIS_ANGLE"), axis_(0.0, 0.0, 0.0), angle_(0.0) {}

/**
 * @param axis: The rotation axis as a Vector3D
 * @param angle: The rotation angle
 * @post: Initializes axis_ and angle_ to provided values; sets type_ to "AXIS_ANGLE"
 */
AxisAngleRotation::AxisAngleRotation(const Vector3D& axis, double angle)
    : Rotation("AXIS_ANGLE"), axis_(axis), angle_(angle) {}

/** @return: The value of axis_ */
Vector3D AxisAngleRotation::getAxis() const { return axis_; }
/** @return: The value of angle_ */
double AxisAngleRotation::getAngle() const { return angle_; }
