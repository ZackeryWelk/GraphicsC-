#pragma once
#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Gizmos.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
class Application
{
public:
	Application();
	~Application();

	void startup();
	void update();
	void draw();
	void shutdown();


};

