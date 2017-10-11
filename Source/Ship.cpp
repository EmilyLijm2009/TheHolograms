#include "Ship.h"


Ship::Ship()
{
	m_live = 3.0f;
	m_bullet = 100.0f;
	m_score = 0.0f;
	m_rotation = Vec3();
}

Ship::Ship(float live, float bullet, float score, Vec3 rotation)
{
	m_live = live;
	m_bullet = bullet;
	m_score = score;
	m_rotation = rotation;
}

Ship::~Ship()
{
}

void Ship::Shoot(Vec3)
{
}

void Ship::Move(Vec3)
{
}

void Ship::Death(void)
{
}

float Ship::GetLive(void)
{
	return m_live;
}

float Ship::GetBullets(void)
{
	return m_bullet;
}

float Ship::GetScore(void)
{
	return m_score;
}

Vec3& Ship::GetRotation(void)
{
	return m_rotation;
}
