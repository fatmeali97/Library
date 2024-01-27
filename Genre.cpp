#include "Genre.h"

Genre::Genre(string classic, string kids, string fantasy, string biography, string romantic)
{
    setClassic(classic);
    setKids(kids);
    setFantasy(fantasy);
    setBiography(biography);
    setRomantic(romantic);
}

void Genre::setClassic(string classic)
{
    this->classic = classic;
}

void Genre::setKids(string kids)
{
    this->kids = kids;

}

void Genre::setFantasy(string fantasy)
{
    this->fantasy = fantasy;

}

void Genre::setBiography(string biography)
{
    this->biography = biography;

}

void Genre::setRomantic(string romantic)
{
    this->romantic = romantic;

}

string Genre::getClassic()
{
    return this->classic;
}

string Genre::getKidse()
{
    return  this->kids;
}

string Genre::getFantasy()
{
    return  this->fantasy;
}

string Genre::getBiography()
{
    return  this->biography;
}

string Genre::getRomantic()
{
    return  this->romantic;
}
