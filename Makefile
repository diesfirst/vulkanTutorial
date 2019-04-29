VULKAN_SDK_PATH = /usr

CFLAGS = -std=c++17 -g -O3
LDFLAGS = -I/usr/include/vulkan -L/usr/lib/x86_64-linux-gnu `pkg-config --static --libs glfw3` -lvulkan

VulkanTest: main.cpp helloTriangle.cpp shaders/vert.spv shaders/frag.spv
	g++-7 $(CFLAGS) -o VulkanTest main.cpp mouseInput.cpp $(LDFLAGS)

window: testWindow.cpp window.hpp
	g++-7 -std=c++17 -g -Wall -o openWindow testWindow.cpp $(LDFLAGS)

.PHONY: test clean

test: VulkanTest
	VK_LAYER_PATH=/usr/share/vulkan/explicit_layer.d ./VulkanTest

clean:
	rm -f VulkanTest


