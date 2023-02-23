#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "User.h"
#include "Message.h"

class Chat {
	std::string m_chat_name = "default chat"; //�������� ����
	std::vector <User> m_user_list; //������ ���� ������
	std::map <User, Message> m_all_history; //��������� ���� ������� ���������

	bool login_match(const char* login); //�������� ������ � ������ ������ �� ����������, true - ���� ����������.

public:
	Chat(const char* chat_name = "default chat");
	void create_new_user(const char* login, const char* password);

};

