#include <iostream>
#include <GLFW/glfw3.h>

using namespace std;

GLFWwindow* StartGLFW();

int main() {
    GLFWwindow* window = StartGLFW();

    while(!glfwWindowShouldClose(window)) {


        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

GLFWwindow* StartGLFW() {
    if(!glfwInit()) {

        cerr << "failed to initialize glfw << endl";
        return nullptr;
    }
    GLFWwindow* window = glfwCreateWindow(1400, 900, "Gravity Simulation", NULL, NULL);

    return window;
}