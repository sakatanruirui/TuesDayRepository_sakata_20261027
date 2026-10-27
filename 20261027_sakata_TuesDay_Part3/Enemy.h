#pragma once
class Enemy
{
private:
	int hp;
	
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="value">HP</param>
	Enemy(int value);
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();
	
	/// <summary>
	/// ダメージ関数
	/// </summary>
	/// <param name="damage">受けるダメージ</param>
	void Damage(int damage);

	/// <summary>
	/// HP取得
	/// </summary>
	/// <returns>HP</returns>
	void GetHp() const;

	/// <summary>
	/// HP表示
	/// </summary>
	void ShowHp() const;
};