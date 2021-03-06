#pragma once
//#include <iostream>
//#include <sstream>
#include <string>
//#include <vector>
//#include <cassert>
#include <memory>

#include "Graph.h" 
#include "GUI.h"
#include "Simple_window.h"
#include "Window.h"
#include "Graph.h"         
#include "GUI.h"


class Applicant_window : public Window
{

	Menu application_menu;
	Button quit_button;
	Button menu_button;
	Text welcome;
	//Image background;

public:
	Applicant_window(Point xy, int w, int h, const string& title);
	~Applicant_window() { }

	void menu_pressed() { menu_button.hide(); application_menu.show(); }
	void explain_pressed();
	static void game1_pressed();
	static void game2_pressed();
	static void game3_pressed();
	void quit();

	static void cb_explain(Address, Address);
	static void cb_game1(Address, Address);
	static void cb_game2(Address, Address);
	static void cb_game3(Address, Address);
	static void cb_menu(Address, Address);
	static void cb_quit(Address, Address);

};


