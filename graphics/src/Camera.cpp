#include "Camera.h"



Camera::Camera()
{
}


Camera::~Camera()
{
}

void Camera::setPerspective(float fieldOfView, float aspectRatio, float near, float far)
{
}

void Camera::setLookAt(glm::vec3 from, glm::vec3 to, glm::vec3 up)
{
}

void Camera::setPosition(glm::vec3 position)
{
}

glm::mat4 Camera::getWorldPosition()
{
	return worldTransform;
}

glm::mat4 Camera::getView()
{
	return viewTransform;
}

glm::mat4 Camera::getProjection()
{
	return projectionTransform;
}

glm::mat4 Camera::getProjectionView()
{
	return projectionViewTransform;
}

void Camera::UpdateProjectionView()
{
	viewTransform ; // inverse world transform
	projectionViewTransform = viewTransform * projectionTransform;
}
