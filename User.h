#pragma once
#include <iostream>
#include <string>

class User {
	std::string m_login; //����� ������������
	std::string m_password; //������ ������������

public:
	User(const char* login, const char* password);

	std::string get_login();
};

