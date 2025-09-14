#include "config.h"
using namespace std;

/*

     This gonna be intresting :3

*/

float times = 0.0f;

void processInput(GLFWwindow *window);
float rainbowLoop();

int main()
{

     ifstream file;
     string line;

     file.open("/home/david/opengl project/src/shaders/vertex.txt");

     if(!file.is_open()) { 
          cout << "couldnt open file" << endl;
     }

     GLFWwindow* window;

     if (!glfwInit()) {
          cout << "glfw couldn't load in" << endl;
          return -1;
     }

     window = glfwCreateWindow(640, 480, "My window", NULL, NULL);
     glfwMakeContextCurrent(window);

     if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
          glfwTerminate();
          return -1;
     }

     while (!glfwWindowShouldClose(window)) {

          // the input proccesing funcs
          processInput(window);

          // the rendering funcs

               // the background
               glClearColor(0.5f, 0.5f, 0.5f, 1.0f);

          // updates the color on the screen 
          glClear(GL_COLOR_BUFFER_BIT); 
          // updates the keyboard inputs
          glfwPollEvents(); 
          // updates the screen basically
          glfwSwapBuffers(window); 

     }

     glfwTerminate();

     return 0;
}

void processInput(GLFWwindow *window){

     if(glfwGetKey(window, GLFW_KEY_W ) == GLFW_PRESS) {

     //cout << "w" << times << "!!" << endl;

     }

}
