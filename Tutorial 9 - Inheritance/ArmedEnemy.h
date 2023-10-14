#pragma once

#include "Enemy.h"

class ArmedEnemy : public Enemy {
public:
	ArmedEnemy(float Health, int Ammo);
	virtual ~ArmedEnemy();

	virtual void SetScore(const int Score) override;
	virtual void Shoot();

	virtual void Update(float DeltaTime) override;

protected:
	int m_AmmoLevel;
};
