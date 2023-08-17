#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>


class BaseRenderer {
    
public:
    BaseRenderer(int width = 640, int height = 480, const char* title = "Default");

    virtual ~BaseRenderer();

    virtual void render() = 0;  // Pure virtual function

    GLFWwindow* m_window;
private:
};