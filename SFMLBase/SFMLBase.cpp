#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    sf::RenderWindow window2(sf::VideoMode(400, 400), "SFML works2!");
    sf::RenderWindow window3(sf::VideoMode(400, 400), "SFML works3!");
    sf::RenderWindow window4(sf::VideoMode(400, 400), "SFML works4!");
    sf::RectangleShape shape(sf::Vector2f(250.f, 250.f)); 
    sf::RectangleShape shape2(sf::Vector2f(250.f, 250.f));
    sf::RectangleShape shape3(sf::Vector2f(250.f, 250.f));
    sf::RectangleShape shape4(sf::Vector2f(250.f, 250.f));
    shape.setPosition(0,0);
    shape2.setPosition(0, 0);
    shape3.setPosition(0, 0);
    shape4.setPosition(0, 0);
    shape.setFillColor(sf::Color::Green);
    shape2.setFillColor(sf::Color::Red);
    shape3.setFillColor(sf::Color::Yellow);
    shape4.setFillColor(sf::Color::Black);
    shape.setOrigin(shape.getSize().x/2, shape.getSize().y/2);
    shape2.setOrigin(shape.getSize().x / 2, shape.getSize().y / 2);
    shape3.setOrigin(shape.getSize().x / 2, shape.getSize().y / 2);
    shape4.setOrigin(shape.getSize().x / 2, shape.getSize().y / 2);

    while (window.isOpen() || window2.isOpen() || window3.isOpen() || window4.isOpen())
    {
        window.clear(sf::Color::Blue);
        window2.clear(sf::Color::Blue);
        window3.clear(sf::Color::Blue);
        window4.clear(sf::Color::Blue);

        sf::Vector2i pos = sf::Mouse::getPosition(window);
        shape.setPosition(pos.x, pos.y);
        sf::Vector2i pos2 = sf::Mouse::getPosition(window2);
        shape2.setPosition(pos2.x, pos2.y);
        sf::Vector2i pos3 = sf::Mouse::getPosition(window3);
        shape3.setPosition(pos3.x, pos3.y);
        sf::Vector2i pos4 = sf::Mouse::getPosition(window4);
        shape4.setPosition(pos4.x, pos4.y);

        sf::Event event;
        while (window.pollEvent(event) || window2.pollEvent(event) || window3.pollEvent(event) || window4.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
            {
                window.close();
                window2.close();
                window3.close();
                window4.close();
            }  
        }

        window.draw(shape);
        window2.draw(shape2);
        window3.draw(shape3);
        window4.draw(shape4);
        window.display();
        window2.display();
        window3.display();
        window4.display();
    }

    return 0;
}