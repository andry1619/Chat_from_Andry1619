#include "Chat.h"

bool Chat::login_match(const char* login) {
	if (!m_user_list.empty()) { //�������� �� ������ ������ ������
		std::string string_login(login); //��������� ��������� �� ������� � ������.
		for (size_t i = 0; i < m_user_list.size(); i++) //���� ���������� �������
			if (m_user_list[i].get_login() == string_login)
				return true;
	}
	else 
		return false;
}

Chat::Chat(const char* chat_name) : m_chat_name(chat_name) {}

void Chat::create_new_user(const char* login, const char* password) {
	if (login_match) {
		//������, ����� ������������ ����������
	}
	else {
		User newUser(login, password);
		m_user_list.push_back(newUser);
	}
}
