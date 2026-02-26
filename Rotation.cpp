#include "Rotation.hpp"

/**
 * @param type: The rotation type
 * @post: Initializes type_ to the provided value
 */
Rotation::Rotation(const std::string& type) : type_(type) {}

/**
 * @return: The value of type_
 * @note: marked const
 */
std::string Rotation::getType() const { return type_; }
