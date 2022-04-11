#ifndef LORRAX_RENDERWINDOW_H
#define LORRAX_RENDERWINDOW_H

#include <string>
#include "GLFW/glfw3.h"

class RenderWindow {
private:
    GLFWwindow* window;
public:
    RenderWindow(int width, int height, const char* title);
    ~RenderWindow();

    bool isOpen();
    static void clear();
    void display();
    void dispatchEvents();

};


#endif //LORRAX_RENDERWINDOW_H
