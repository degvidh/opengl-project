#include "config.h"
using namespace std;

/*

     This gonna be intresting :3

*/

int main()
{

     cout << "loading" << endl;

     GLFWwindow* window;

     if (!glfwInit()){
          cout << "glfw couldn't load in" << endl;
          return -1;
     }

     window = glfwCreateWindow(640, 480, "My window", NULL, NULL);

     return 0;
}
