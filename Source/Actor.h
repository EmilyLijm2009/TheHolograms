#pragma once
#include "helper.h"

class Actor
{
public:
	explicit Actor(void);
	explicit Actor(ActorId id);
	~Actor(void);
	const Vec3& GetPosition(void) const {
		return m_position;
	}
	const ActorId GetId(void) const {
		return m_id;
	}
private:
	ActorId m_id;

protected:
	Vec3 m_position;
};
