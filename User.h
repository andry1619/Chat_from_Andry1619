#pragma once
#include <iostream>
#include <string>

class User {
	std::string m_login; //Логин пользователя
	std::string m_password; //Пароль пользователя

public:
	User(const char* login, const char* password);

	std::string get_login();
};

