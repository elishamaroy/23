#include <iostream>

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1;
	int angle2;
    std::cout << "Enter the first angle: ";
    std::cin >> angle1;
    std::cout << "Enter the second angle: ";
    std::cin >> angle2;
    std::cout << "The third angle is: " << findThirdAngle(angle1, angle2) << std::endl;
    int thirdAngle = findThirdAngle(angle1, angle2);
    return 0;
}

