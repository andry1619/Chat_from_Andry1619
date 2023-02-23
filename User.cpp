#include "User.h"

User::User(const char* login, const char* password) : m_login(login), m_password(password) {}

std::string User::get_login() { return m_login; }
