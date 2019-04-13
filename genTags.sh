#!/bin/bash

ctags -R . /usr/include/vulkan /usr/include/glm /usr/local/include/GLFW
echo "Generated tags from main.cpp and /usr/include/vulkan /usr/local/include/GLFW"
