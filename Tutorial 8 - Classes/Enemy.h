#pragma once

class Enemy {
public:
	Enemy();
	Enemy(float Health, float Damage);
	~Enemy();

	float GetCurrentHealth() const;
	float GetCurrentDamage() const;
	int GetCurrentScore() const;

	void SetNewHealth(float NewHealth);
	void SetNewDamage(float Damage);
	void SetScore(int Score);

protected:
	float m_Health;
	float m_Damage;

	int* m_Score;
};
