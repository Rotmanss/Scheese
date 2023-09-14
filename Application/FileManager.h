#pragma once

#include <string>


class FileManager
{
public:
	FileManager()
		: m_Text("")
	{
	}

	void ReadFromFile();
	inline std::string GetText() const { return m_Text; }

private:
	std::string m_Text;
};
