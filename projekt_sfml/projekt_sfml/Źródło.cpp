#include<SFML/Graphics.hpp>
void main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "My window");
	while (window.isOpen()) {
		window.clear(sf::Color::Black);
		sf::RectangleShape rs(sf::Vector2f(100, 100));
		window.draw(rs);
		window.display();
		aaaaa;
	}
}