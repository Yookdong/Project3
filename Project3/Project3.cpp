﻿// Project3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Image.h"

using namespace std;

int main()
{
	int size;

	cout << "이미지 크기는? ";
	cin >> size;

	Image* img = new Image[size];

	delete[size] img;
}