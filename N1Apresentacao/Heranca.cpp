//
//  Heranca.cpp
//  N1Apresentacao
//
//  Created by Rafael Semann on 3/31/14.
//  Copyright (c) 2014 Rafael Semann. All rights reserved.
//

#include "Heranca.h"

class Animal
{
public:
    void morre();
    std::string nome;
    int idade;
};

class Cachorro : public Animal
{
public:
    void late();
};

class Gato : public Animal
{
public:
    void miau();
};