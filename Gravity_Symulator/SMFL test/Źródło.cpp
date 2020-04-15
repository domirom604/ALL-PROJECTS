#include<SFML\Graphics.hpp>
#include<time.h> 
#include<iostream>
#include"Menu.h"
#include"game.h"
#include"Mechanika.h"
#include"Player.h"
#include"Data.h"
#include"Player2.h"

#pragma warning(disable : 4996)

using namespace sf;
using namespace std;



int main()
{
	dalej:
	RenderWindow window(VideoMode(1024, 600), "gravity simulator");

	Menu tenu(window.getSize().x, window.getSize().y);
	game game(window.getSize().x, window.getSize().y);

	

	Texture t;
	t.loadFromFile("body.png");
	Sprite s(t);
	s.setTextureRect(IntRect(0, 0, 30, 30));

	s.setPosition(240.f, 450.f);

	Player gracz;
	gracz.mass = 110;
	
	//private mass;
	//setMass(int)

	sf::Clock delta;
	float deltaTime;
	bool whileJump = false;

	Player2 gracz2;
	gracz2.mass2 = 20;
	sf::Clock delta2;
	float deltaTime2;
	bool whileJump2 = false;

	Data dat;
	
	int select = 0;
	int a;
	int selecttwo = 0;
	
	while (window.isOpen())
		
	{
		Event e;
		
		
		while (window.pollEvent(e))
		{
			if (select == 1)
			{
				
				break;
			}
			
			switch (e.type)
			{

			case Event::KeyReleased:
				switch (e.key.code)
				{
				case Keyboard::Up:

					menu.moveUp();
					break;

				case Keyboard::Down:

					menu.moveDown();
					break;

				case Keyboard::Return:
					switch (menu.GetPressedItem())
					{
					case 0 :
						cout << "Play bottom pressed" << endl;
						if (select == 0)
						{
							select = 1;
							
						}
						else
						{
							select = 0;
						}
						
						break;
						
					

					case 1:
						window.close();
						break;

					}
					

					break;

				}
				
				
					break;
				


			case Event::Closed:
				window.close();
				break;

			}
			
			/*
			if (e.type == Event::Closed)
				window.close();

			if (e.type == Event::KeyPressed)
				if (e.key.code == Keyboard::Up) s.setPosition(240.f, 162.f);
*/
		}
		
		//window.clear(Color::White);
	
		menu.draw(window);
		
		
		if(select==1)
		{
		
			sf::RenderWindow  WindowApp(sf::VideoMode(1024, 600), "graty simulator");
			WindowApp.setVerticalSyncEnabled(true);
			while (WindowApp.isOpen())
			{
				
				deltaTime = delta.restart().asSeconds();
				deltaTime2 = delta2.restart().asSeconds();

				sf::Event event;

				while (WindowApp.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						WindowApp.close();
					

					if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space && whileJump == false)
					{
						gracz.speedValue = dat.jumpF / gracz.mass;
						whileJump = true;

					}
					if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W && whileJump2 == false)
					{
						gracz2.speedValue2 = dat.jumpF2 / gracz2.mass2;
						whileJump2 = true;

					}
					if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::BackSpace)
					{
						select = 0;
						//menu.draw(window);
						WindowApp.close();
						goto dalej;
						break;

					}
					

				}


				if (whileJump)
				{
					gracz.jump(deltaTime);
					if (gracz.playerSprite.getPosition().y > 550)
					{
						gracz.playerSprite.setPosition(gracz.playerSprite.getPosition().x, 550);
						whileJump = false;
						gracz.accelerationValue = 0;

					}

				}
				if (whileJump2)
				{
					gracz2.jump2(deltaTime2);
					if (gracz2.player2Sprite.getPosition().y > 550)
					{
						gracz2.player2Sprite.setPosition(gracz2.player2Sprite.getPosition().x, 550);
						whileJump2 = false;
						gracz2.accelerationValue2 = 0;

					}

				}

				
				
				
				
				
				gracz.playerMove(deltaTime);
				
				WindowApp.clear();
				WindowApp.draw(gracz.playerSprite);
				gracz2.playerMove2(deltaTime2);


				WindowApp.draw(gracz2.player2Sprite);
				WindowApp.display();

			
			}
					


				switch (e.key.code)
				{
				case Keyboard::BackSpace:

					//selecttwo = 0;
					window.clear();
					
					select = 0;
					//menu.draw(window);
					window.clear(Color::White);
					goto dalej;
					break;


				}
			
				
				
				
			//window.draw(s);

			
		}
		 
	

			


		
		
		

		window.display();

	}

}