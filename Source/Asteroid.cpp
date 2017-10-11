#pragma once
#include "Asteroid.h"

Asteroid::Asteroid()
{
	m_size = 3.0f;
	m_picture = 0.0f;
	m_live = 3.0f;
	m_rotation = Vec3();
}

Asteroid::Asteroid(float size, float picture, float live, Vec3 rotation)
{
	m_size = size;
	m_picture = picture;
	m_live = live;
	m_rotation = rotation;
}

Asteroid::~Asteroid()
{
}

Vec3 Asteroid::Fly(void)
{
	return Vec3();
}

void Asteroid::Hurt(float)
{
	m_live--;
}

void Asteroid::Death(void)
{
}

float Asteroid::GetSize(void)
{
	return m_size;
}

float Asteroid::GetPicture(void)
{
	return m_picture;
}

float Asteroid::GetLive(void)
{
	return m_live;
}

Vec3 & Asteroid::GetRotation(void)
{
	return m_rotation;
}
