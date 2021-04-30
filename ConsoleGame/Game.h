#pragma once
class Game{
public:
	Game();
	~Game();
	float delta_time;
	void Run();
private:
	bool _is_running = false;
	
	void Update();
	void Draw();

	
};
