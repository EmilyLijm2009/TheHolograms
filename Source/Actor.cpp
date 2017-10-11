#include "Actor.h"

Actor::Actor()
{
	m_id = GetId() + 1;
}

Actor::Actor(ActorId id)
{
	m_id = id;
}

Actor::~Actor(void)
{
}
