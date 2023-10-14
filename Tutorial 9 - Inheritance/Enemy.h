#pragma once

class Enemy {
public:
	Enemy();
	Enemy(float Health);
	virtual ~Enemy();

	virtual float GetCurrentHealth() const;
	virtual float GetCurrentDamage() const;
	virtual int GetCurrentScore() const;

	virtual void SetNewHealth(float NewHealth);
	virtual void SetNewDamage(float Damage);
	virtual void SetScore(int Score);

	virtual void Update(float DeltaTime) = 0;

protected:
	float m_Health;
	float m_Damage;

	int* m_Score;
};
