#pragma once
#include "Rotation.hpp"

class QuaternionRotation : public Rotation {
private:
    double w_, x_, y_, z_;
public:
    /**
     * @post: Initializes w_, x_, y_, z_ to 0.0; sets type_ to "QUATERNION"
     */
    QuaternionRotation();

    /**
     * @param w: The w component
     * @param x: The x component
     * @param y: The y component
     * @param z: The z component
     * @post: Initializes w_, x_, y_, z_ to provided values; sets type_ to "QUATERNION"
     */
    QuaternionRotation(double w, double x, double y, double z);

    /** @return: The value of w_ @note: const */
    double getW() const;
    /** @return: The value of x_ @note: const */
    double getX() const;
    /** @return: The value of y_ @note: const */
    double getY() const;
    /** @return: The value of z_ @note: const */
    double getZ() const;
};
