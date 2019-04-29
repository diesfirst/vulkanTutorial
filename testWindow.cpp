#include "window.hpp"

int main()
{
	Window::prepare();
	Window window(900, 800, "Test");
	while (window.shouldStayOpen()) window.listen();
	return 0;
}
