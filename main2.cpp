//#include "glad/glad.h"
//#include "GLFW/glfw3.h"
//#include<iostream>
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int length);
//void processInput(GLFWwindow* window) { if (glfwGetKey(window, GLFW_KEY_ESCAPE)) glfwSetWindowShouldClose(window, true); }
//
//int main()
//{
//	//ʵ����GLFW
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	
//	GLFWwindow* window = glfwCreateWindow(600, 600, "MyWindow", NULL, NULL);
//
//	if (window == nullptr)
//	{
//		std::cout << "Failed to Create GLFW Window!" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//
//	glfwMakeContextCurrent(window);
//	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//	
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "Failed to Initialize GLAD!" << std::endl;
//		glfwTerminate();
//		return 0;
//	}
//
//	while (!glfwWindowShouldClose(window))
//	{
//		processInput(window);
//		
//		//ˢ�»���
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//	return 0;
//}
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int length)
//{
//	glViewport(0, 0, width, length);
//}
