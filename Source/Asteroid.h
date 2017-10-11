#pragma once
#include "Actor.h"
#include "helper.h"

class Asteroid : public Actor
{
public:
	Asteroid();
	Asteroid(float size, float picture, float live, Vec3 rotation);
	~Asteroid();
	Vec3 Fly(void);
	void Hurt(float);
	void Death(void);

private:
	float m_size;
	float m_picture;
	float m_live;
	Vec3 m_rotation;

protected:
	float GetSize(void);
	float GetPicture(void);
	float GetLive(void);
	Vec3& GetRotation(void);
};

