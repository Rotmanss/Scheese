#include "Parser.h"

#include <iostream>
#include <regex>
#include <set>


void Parser::Parse(const std::string& text)
{
    std::regex regex_pattern("[A-Za-z]{1,30}");
    const std::string input_string = text;

    std::sregex_iterator words_begin(text.begin(), text.end(), regex_pattern);
    std::sregex_iterator words_end;

    for (std::sregex_iterator i = words_begin; i != words_end; ++i)
        m_WordsList.push_back((*i).str());

    SelectDistinct();
    Sort();
}

void Parser::SelectDistinct()
{
    std::set<std::string> distinctSet(m_WordsList.begin(), m_WordsList.end());
    
    m_WordsList.clear();
    for (const auto& word : distinctSet)
        m_WordsList.push_back(word);
}

void Parser::Sort()
{
    std::sort(m_WordsList.begin(), m_WordsList.end(), [](const std::string& a, const std::string& b) { return a.length() < b.length(); });
}

void Parser::PrintResults() const
{
    std::cout << "Result:\n";
    for (const auto& el : m_WordsList)
        std::cout << el << std::endl;
}
