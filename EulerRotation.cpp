#include "EulerRotation.hpp"

/**
 * @post: Initializes roll_, pitch_, and yaw_ to 0.0; sets type_ to "EULER"
 */
EulerRotation::EulerRotation() : Rotation("EULER"), roll_(0.0), pitch_(0.0), yaw_(0.0) {}

/**
 * @param roll: The roll angle
 * @param pitch: The pitch angle
 * @param yaw: The yaw angle
 * @post: Initializes roll_, pitch_, yaw_ to provided values; sets type_ to "EULER"
 */
EulerRotation::EulerRotation(double roll, double pitch, double yaw)
    : Rotation("EULER"), roll_(roll), pitch_(pitch), yaw_(yaw) {}

/** @return: The value of roll_ */
double EulerRotation::getRoll() const { return roll_; }
/** @return: The value of pitch_ */
double EulerRotation::getPitch() const { return pitch_; }
/** @return: The value of yaw_ */
double EulerRotation::getYaw() const { return yaw_; }
