#include <GLFW/glfw3.h>
#include <stdexcept>

class Window
{
	private:
		int width;
		int height;
		const char* title;
		GLFWwindow* window;
		static bool glfwInitialized;

	public:
		Window(int width, int height, const char* title);

		~Window();

		bool shouldStayOpen();

		void listen();

		void report();

		static void prepare();
};

bool Window::glfwInitialized = false;

Window::Window(int width, int height, const char* title) :
	width(width),
	height(height),
	title(title)
{
	if (!glfwInitialized)
	{
		glfwInit();
		glfwInitialized = true;
	}
	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (window == NULL) throw std::runtime_error("Window failed to be created!");
}

Window::~Window()
{
	glfwDestroyWindow(window);
}

bool Window::shouldStayOpen()
{
	return !glfwWindowShouldClose(window);
}

void Window::listen()
{
	glfwWaitEvents();
}

void Window::report()
{
}

void Window::prepare()
{
}
