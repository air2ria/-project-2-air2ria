#pragma once
#include <string>

class Rotation {
protected:
    std::string type_;
public:
    /**
     * @param type: The rotation type
     * @post: Initializes type_ to the provided value
     */
    Rotation(const std::string& type);

    /**
     * @return: The value of type_
     * @note: marked const
     */
    std::string getType() const;

    /**
     * @brief Virtual destructor to ensure proper cleanup of derived classes.
     */
    virtual ~Rotation() = default;
};
