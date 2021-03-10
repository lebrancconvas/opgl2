#ifndef WINDOW____H
#define WINDOW____H

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
    public:
        Window();
        Window(GLint windowWidth, GLint windowHeight);
        ~Window();

        int initialise();

        GLint getBufferWidth() {return bufferWidth;}
        GLint getBufferHeight() {return bufferHeight;}

        bool getShouldClose() {return glfwWindowShouldClose(mainWindow);}

        void swapBuffers() {glfwSwapBuffers(mainWindow);}


    private:
        GLFWwindow* mainWindow;
        GLint width, height;
        GLint bufferWidth, bufferHeight;
};

#endif