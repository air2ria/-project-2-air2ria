Project 2: Orientation Hierarchy - Inheritance
Project Overview
In 3D space, knowing where an object is (Vector3D) isn't enough—you must know how it is
rotated. There are different ways to represent rotation, each with pros and cons. You will use
Inheritance to create a hierarchy of rotation types.
Accept the project on GitHub Classroom through this link:
https://classroom.github.com/a/b3CCpsKj
Core Concept: Euler, Axis-Angle, and Quaternions
There are three main ways to represent 3D rotations:
1. Euler Angles: Rotations around the X, Y, and Z axes (Roll, Pitch, Yaw). They are
intuitive but suffer from "Gimbal Lock."
2. Axis-Angle: Rotating by a specific angle around a single vector axis. Provides a more
natural representation for certain rotations.
3. Quaternions: A 4D mathematical representation (w,x,y,z) that avoids gimbal lock and is
used by industry-standard engines like Unity and Unreal.
Provided Files
DO NOT MODIFY these files:
● Vector3D.hpp - Vector3D class from Project 1
● Vector3D.cpp - Vector3D implementation from Project 1
● Makefile - Compilation script for local testing
Task 1: The Base Class - Rotation
Create Rotation.hpp and Rotation.cpp with the following specifications:
Rotation Protected Member Variable:
● std::string type_: The rotation type ("EULER", "AXIS_ANGLE", or
"QUATERNION")
Note: The type_ member is protected (not private) so that derived classes can directly access it
when calling the base constructor.
Another note: By convention, we append an underscore to all private member variable names.
We will maintain this convention throughout the semester.
Rotation Constructor:
/**
* @param type: The rotation type
* @post: Initializes type_ to the provided value
*/
Rotation Accessor:
/**
* @return: The value of type_
* @note: This function should be marked const!
*/
getType
Rotation Destructor:
/**
* @brief Virtual destructor to ensure proper cleanup of derived classes.
*/
Note: Virtual destructors are important in inheritance hierarchies to ensure proper cleanup when
deleting derived class objects through base class pointers.
Task 2: Derived Class - EulerRotation
Create EulerRotation.hpp and EulerRotation.cpp. This class inherits from Rotation.
EulerRotation Private Member Variables:
● double roll_: Rotation around the x-axis
● double pitch_: Rotation around the y-axis
● double yaw_: Rotation around the z-axis
EulerRotation Constructors:
Default Constructor:
/**
* @post: Initializes roll_, pitch_, and yaw_ to 0.0
* Sets type_ to "EULER"
*/
Parameterized Constructor:
/**
* @param roll: The roll angle
* @param pitch: The pitch angle
* @param yaw: The yaw angle
* @post: Initializes roll_, pitch_, and yaw_ to the provided values
* Sets type_ to "EULER"
*/
EulerRotation Accessors (Getters):
/**
* @return: The value of roll_
* @note: This function should be marked const!
*/
getRoll
/**
* @return: The value of pitch_
* @note: This function should be marked const!
*/
getPitch
/**
* @return: The value of yaw_
* @note: This function should be marked const!
*/
getYaw
Task 3: Derived Class - AxisAngleRotation
Create AxisAngleRotation.hpp and AxisAngleRotation.cpp. This class inherits from
Rotation.
AxisAngleRotation Private Member Variables:
● Vector3D axis_: The rotation axis
● double angle_: The rotation angle
AxisAngleRotation Constructors:
Default Constructor:
/**
* @post: Initializes axis_ to Vector3D(0.0, 0.0, 0.0) and angle_ to 0.0
* Sets type_ to "AXIS_ANGLE"
*/
Parameterized Constructor:
/**
* @param axis: The rotation axis as a Vector3D
* @param angle: The rotation angle
* @post: Initializes axis_ and angle_ to the provided values
* Sets type_ to "AXIS_ANGLE"
*/
AxisAngleRotation Accessors (Getters):
/**
* @return: The value of axis_
* @note: This function should be marked const!
*/
getAxis
/**
* @return: The value of angle_
* @note: This function should be marked const!
*/
getAngle
Task 4: Derived Class - QuaternionRotation
Create QuaternionRotation.hpp and QuaternionRotation.cpp. This class inherits
from Rotation.
QuaternionRotation Private Member Variables:
● double w_: The w component
● double x_: The x component
● double y_: The y component
● double z_: The z component
QuaternionRotation Constructors:
Default Constructor:
/**
* @post: Initializes w_, x_, y_, and z_ to 0.0
* Sets type_ to "QUATERNION"
*/
Parameterized Constructor:
/**
* @param w: The w component
* @param x: The x component
* @param y: The y component
* @param z: The z component
* @post: Initializes w_, x_, y_, and z_ to the provided values
* Sets type_ to "QUATERNION"
*/
QuaternionRotation Accessors (Getters):
/**
* @return: The value of w_
* @note: This function should be marked const!
*/
getW
/**
* @return: The value of x_
* @note: This function should be marked const!
*/
getX
/**
* @return: The value of y_
* @note: This function should be marked const!
*/
getY
/**
* @return: The value of z_
* @note: This function should be marked const!
*/
getZ
Local Testing
At this point, you should test your classes locally before submitting to Gradescope.
Test Writing
Create a main.cpp file. Here, you will define the entry point to your project.
Since we'll be testing the Rotation classes, include the necessary headers:
● Vector3D.hpp
● Rotation.hpp
● EulerRotation.hpp
● AxisAngleRotation.hpp
● QuaternionRotation.hpp
Now, in your main function:
● Create an EulerRotation via parameterized constructor
○ roll = 45.0, pitch = 30.0, yaw = 60.0
● Call getType() and getRoll() on the EulerRotation object
● Create a Vector3D with x = 1.0, y = 0.0, z = 0.0
● Create an AxisAngleRotation via parameterized constructor using the Vector3D as the
axis and angle = 90.0
● Call getType()on the AxisAngleRotation object
● Create a QuaternionRotation via parameterized constructor
○ w = 1.0, x = 0.0, y = 0.0, z = 0.0
● Call getType()on the QuaternionRotation object
Compilation
For your convenience, we have provided you a Makefile to compile your project. You will need
to install Make on your local system.
In a terminal, navigate to the project directory and run:
make
This will immediately compile your project and attempt to generate an executable main.
Note: You may see errors at this point; resolve them and come back to this step. It is likely to be
syntax errors.
For your reference, the Makefile comes with the following commands:
● make: Compile the project, only recompiling modified source code
● make clean: Delete all object files (.o) and executables (main)
● make rebuild: Freshly recompile the entire project from scratch (equivalent to make clean
&& make)
At this point, you can run your executable with:
./main
Expected Output:
Type: EULER
Roll: 45
Type: AXIS_ANGLE
Type: QUATERNION
Does your output match? If so, congratulations, your rotation classes are working!
You should repeat this process to thoroughly test all rotation classes and their functions.
Submission Details
You will submit your solution to Gradescope through GitHub Classroom.
Only the following files must be submitted:
● Rotation.hpp
● Rotation.cpp
● EulerRotation.hpp
● EulerRotation.cpp
● AxisAngleRotation.hpp
● AxisAngleRotation.cpp
● QuaternionRotation.hpp
● QuaternionRotation.cpp
Although Gradescope allows multiple submissions, it is NOT a platform for testing and/or
debugging, and it should not be used for that purpose.
You MUST test and debug your program locally. This means creating your own tests and
ensuring your project behaves as expected. To help prevent over-reliance on Gradescope for
testing, only 5 submissions per day will be allowed.
Grading Rubric
● Correctness (85%): The program behaves as defined by the project specifications. Your
points are determined by Gradescope unit testing.
● Documentation (15%): Provide function preambles in .hpp AND .cpp files, in the
@param, @post, @return format.
● Extra Credit (5%): To encourage students to begin projects early, we will award extra
credit to students who get their project to compile within the first 3 days.
○ To compile quickly, you should stub your entire project. This means defining your
functions but implementing them with some dummy code to temporarily satisfy
compilers. This way, you ensure you have the right interface before
implementing. Go to TA hours for guidance with this.
Important Notes
● Inheritance: All rotation classes must properly inherit from the Rotation base class.
● Const Correctness: All accessor functions should be marked const.
● Naming Convention: Use underscore suffix for private member variables (e.g., roll_,
pitch_).
● No using namespace std;: Explicitly use std:: prefix for standard library
components.
Authors: Anna Merkulova, Prof. Wole
