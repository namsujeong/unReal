﻿// 021_Constructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 뭐든지 절대로 공짜는 없습니다.
class Player 
{
// private:
   int Hp;
   int Att;

//public:
//    Player() 
//    {        
//    }

public:
   void Damage() 
   {

   }

   //Player NewPlayerCfeate() 
   //{
   //}

public:
    // 0. 생성자의 특징
    // 1. 리턴값이 없다. (무조건 그 클래스의 객체이기 때문)
    // 2. 클래스가 객체화 될때 무조건 적으로 호출된다.
    // 3. 이름이 무조건 클래스명으로 고정된다. ()
    // 4. 일반적으로 맴버함수는 객체를 통해서 호출해야 하는데.
    //    그냥 호출이 된다.
    // 5. 맴버이니셜라이저라는 문법을 사용이 가능하다.
    //    생성자가 호출되는 순간이란 메모리가 생성되는 순간이다
    //    그 순간 생성자가 시작하기 전에 맴버변수들을 초기화할수 있는
    //    문법을 맴버이니셜라이저
    Player() : Hp(100), Att(10)
        // 자신의 맴버중 변수를 => 값을 초기화해준다.
    {
        // 이런 일들은 대입
        Hp = 100;
    }
};

int main()
{
    int    PlayerHp  = int   (10);

    // 내가 안만들었는데 이게 되요 xxxxx
    // 내가 안만들었으면 누가 만들었지?
    // 객체화가 되는 순간 자동 호출되는 겁니다.
    // 선생님은 객체가 생성될때 명시적으로 어떤 

    Player();

    Player NewPlayer = Player();

    // 클래스 내부의 함수는 아래와 같이 이렇게 
    // 호출하는 것이 기본인데.
    // 생성자라는 예외는 
    NewPlayer.Damage();
    // NewPlayer.Player();
}
