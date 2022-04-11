#include "RenderWindow.h"

RenderWindow::RenderWindow(int width, int height, const char* title) {
    if (!glfwInit())
        return;

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return;
    }
    glfwMakeContextCurrent(window);
}

RenderWindow::~RenderWindow() {
    glfwTerminate();
    delete this;
}

bool RenderWindow::isOpen() {
    if(glfwWindowShouldClose(window))
        return false;
    return true;
}

void RenderWindow::clear() {
    glClear(GL_COLOR_BUFFER_BIT);
}

void RenderWindow::display() {
    glfwSwapBuffers(window);
}

void RenderWindow::dispatchEvents() {
    glfwPollEvents();
}
