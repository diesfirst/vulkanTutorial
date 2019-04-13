#include <GLFW/glfw3.h>

class mouseInput {
	private:
		double xpos, ypos;
		GLFWwindow* window;

	public:
		mouseInput();
		mouseInput(GLFWwindow* window);
		~mouseInput();

		void setCursorPos(); 

		void setCursorPos(double x, double y);

		double getX();

		double getY();

		void printPos();
};
