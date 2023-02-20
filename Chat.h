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

public:
	Chat(const char* chat_name = "default chat");
};

