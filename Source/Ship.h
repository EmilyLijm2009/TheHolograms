#pragma once
#include "Actor.h"

class Ship : public Actor
{
public:
	Ship(void);
	Ship(float live, float bullet, float score, Vec3 rotation);
	~Ship();
	void Shoot(Vec3);
	void Move(Vec3);
	void Death(void);

private:
	float m_live;
	float m_bullet;
	float m_score;
	Vec3 m_rotation;

protected:
	float GetLive(void);
	float GetBullets(void);
	float GetScore(void);
	Vec3& GetRotation(void);
};

