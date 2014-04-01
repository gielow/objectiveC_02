//
//  Transporte.cpp
//  N1Apresentacao
//
//  Created by Rafael Semann on 3/31/14.
//  Copyright (c) 2014 Rafael Semann. All rights reserved.
//

#include "Transporte.h"


/**
 *  Classe para controle do meio de transporte
 */
class MeioTrasporte
{
public:
    /**
     * DocumentaÁ„o de um enum
     */
    enum TEnum {
        Carro, /**< Valor 1. */
        Moto, /**< Valor 2. */
        Barco  /**< Valor 3. */
    }
    *enumPtr, /**< Ponteiro do eNum. */
    enumVar;  /**< enum variable. */
    
    /**
     * Construtor da classe.
     */
    MeioTrasporte();
    /**
     * Destrutor da classe.
     */
    ~MeioTrasporte();
    
    /**
     * MetÛdo que recebe um inteiro e retorna o meio de transporte.
     * @param a recebe um inteiro.
     * @see MeioTrasporte()
     * @see ~MeioTrasporte()
     * @see publicMeio()
     * @return O meio de transporte
     */
    int retornaMeioTransporte(int a);
    
    /**
     * Vari·vel p˙blica.
     * Armazena o meio global.
     */
    int publicMeio;
};

/**
 *  Classe para controle do meio de transporte
 */
class Carro
{
public:
    
    
    /**
     * Construtor da classe.
     */
    Carro()
    {
      	
        
    }
    /**
     * Destrutor da classe...
     */
    ~Carro();
    
    /**
     * Metodo que recebe um inteiro e retorna o meio de transporte.
     * @param carro recebe um inteiro.
     * @see MeioTrasporte()
     * @see ~MeioTrasporte()
     * @see publicMeio()
     * @return O meio de transporte
     */
    void IncluiCarro(char carro,int meio)
    {
        MeioTrasporte* teste = new MeioTrasporte(); /// > Objeto de transporte
        teste->retornaMeioTransporte(meio);
    }
    
    
    /**
     * Vari·vel p˙blica.
     * Armazena o meio global.
     */
    int publicMeio;
	
};


