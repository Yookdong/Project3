#pragma once
class AActor
{
public:
	int X;
	int Y;
	char Shape;

	AActor();
	virtual ~AActor();

	void Render();
	virtual void Tick() = 0; // 순수 가상 함수 -> 추상화 시킨것
	// 이 클래스를 상속받는 모든 클래스는 이 함수를 무조건 재정의 해야 한다는 의미이다.
	// 이렇게 추상화 시킨 함수가 있는 클래스를 추상 클래스라고 하고
	// 껍데기 용으로 사용하는 것이다. 그래서 정적 할당을 할 수 없고  동적 할당으로만 불러와 포인터로 업다운 캐스팅용으로만 사용한다.
	void Input();
};

