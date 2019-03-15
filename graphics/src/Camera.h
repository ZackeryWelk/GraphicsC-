#pragma once
#include <glm/glm.hpp>
class Camera
{
public:
	Camera();
	~Camera();

	virtual void update(float deltaTime) = 0;
	virtual void setPerspective(float fieldOfView, float aspectRatio, float near, float far);
	virtual void setLookAt(glm::vec3 from, glm::vec3 to, glm::vec3 up);
	virtual void setPosition(glm::vec3 position);
	virtual glm::mat4 getWorldPosition();
	virtual glm::mat4 getView();
	virtual glm::mat4 getProjection();
	virtual glm::mat4 getProjectionView();




private:

	void UpdateProjectionView();


	glm::mat4 worldTransform;
	glm::mat4 viewTransform;
	glm::mat4 projectionTransform;
	glm::mat4 projectionViewTransform;
};

