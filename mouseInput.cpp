#include "mouseInput.hpp"
#include <iostream>

mouseInput::mouseInput() :
	xpos {0.0},
	ypos {0.0},
	window {nullptr}
{}

mouseInput::mouseInput(GLFWwindow* window) :
	xpos {0.0},
	ypos {0.0},
	window {window}
{}

mouseInput::~mouseInput() {
}

void mouseInput::setCursorPos() {
	glfwGetCursorPos(window, &xpos, &ypos);
}

void mouseInput::setCursorPos(double x, double y) {
	xpos = x;
	ypos = y;
}

double mouseInput::getX() {
	return xpos;
}

double mouseInput::getY() {
	return ypos;
}

void mouseInput::printPos() {
	std::cout << "X: " << getX() << " Y: " << getY() << std::endl;
}


