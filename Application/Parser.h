#pragma once

#include <vector>
#include <string>


class Parser
{
public:
	Parser()
	{
	}

	void Parse(const std::string& text);
	void PrintResults() const;

private:
	void SelectDistinct();
	inline void Sort();

private:
	std::vector<std::string> m_WordsList;
};
