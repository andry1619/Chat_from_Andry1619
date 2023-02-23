#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "User.h"
#include "Message.h"

class Chat {
	std::string m_chat_name = "default chat"; //Название чата
	std::vector <User> m_user_list; //Список всех Юзеров
	std::map <User, Message> m_all_history; //Контейнер всей истории переписки

	bool login_match(const char* login); //Проверка логина в списке юзеров на повторение, true - есть совпадение.

public:
	Chat(const char* chat_name = "default chat");
	void create_new_user(const char* login, const char* password);

};

