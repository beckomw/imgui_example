#include <iostream> 
#include <memory> 
#include <fstream> 

#include <SMFL/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"



int main(int argc, char* argv[])
{

	// create a new window of size w*h pixels
	// top-left of the window is (0,0) and the bottom-right is (w,h)
	// you will have to read these from the config file 

	const int wWidth = 1280; 
	const int wHeight = 720;

	sf::RenderWindow window(sf::VideoMode(wWidth, wHeight), "SFML works!"); 
	window.setFramerateLimit(60); // set the frame rate limit to 60 FPS 

	// initialize IMGUI and create a clock used for its internal timing 
	ImGui::SFML::Init(window)
















}