#pragma once
#include "Camera.h"
#include <GLFW/glfw3.h>
class FlyCamera
{
public:
	FlyCamera();
	~FlyCamera();

	virtual void update(float deltaTime);
	virtual void setSpeed(float speed);
	

private:

	float speed;
	glm::vec3 up;


};

