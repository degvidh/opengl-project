#include "config.h"
using namespace std;

/*

     This gonna be intresting :3

*/

int main()
{

     cout << "loading" << endl;

     ifstream file;
     string line;

     file.open("src/shaders/vertex.txt");
     while (getline(file, line)) {
          cout << line << endl;
     }

     GLFWwindow* window;

     if (!glfwInit()){
          cout << "glfw couldn't load in" << endl;
          return -1;
     }

     glfwDestroy

     window = glfwCreateWindow(640, 480, "My window", NULL, NULL);
     glfwMakeContextCurrent(window);

     if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
          glfwTerminate();
          return -1;
     }

     glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

     while (!glfwWindowShouldClose(window)) {

          glfwPollEvents();

          glClear(GL_COLOR_BUFFER_BIT);
     
          glfwSwapBuffers(window);

     }

     

     glfwTerminate();

     return 0;
}
