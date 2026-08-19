#include <iostream>
#include <vector>
#include <optional>
#include <variant>

enum class Aspect {
    Simple,
    Contin,
    Perfect,
    PerfCon,
};

enum class Time {
    Past,
    Present,
    Future,
};

struct Verb {
    std::string verb;
    Time time;
    Aspect aspect;
};

struct VerbPhrase {
    std::vector<std::string> adverbs;
    Verb verb;
    std::optional<NounPhrase> object;
};

enum class Article {
    Indef,
    VowelIndef,
    Def,
};

struct Noun {
    std::string word;
    bool plural;
};

struct NounPhrase {
    std::optional<Article> article;
    std::vector<std::string> adjectives;
    Noun noun;
};

struct Clause {
    NounPhrase subject;
    VerbPhrase predicate;
};

enum class SentenceKind {
    Declarative,
    Interrogative,
    Imperative,
    Exclamative,
};

struct Sentence {
    SentenceKind kind;
    Clause clause;
};

int main()
{
    std::cout << "Hello World!\n";
}