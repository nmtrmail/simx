//--------------------------------------------------------------------------
// File:    register.C
// Module:  HelloWorld
// Author:  Nicholas Valler
// Created: August 11, 2011
//
// Description: registers all user-defined objects with the system
//
// @@COPYRIGHT@@
//
//--------------------------------------------------------------------------


#include "simx/EntityManager.h"
#include "simx/InfoManager.h"
#include "simx/ServiceManager.h"
#include "simx/userIO.h"

#include "simx/userIO.h"
#include "simx/EntityManager.h"
#include "simx/ServiceManager.h"
#include "simx/InfoManager.h"

#include "HelloWorld/constants.h"
#include "HelloWorld/HelloWorld.h"
#include "HelloWorld/Person.h"
#include "HelloWorld/HelloHandlerPerson.h"

using namespace Config;
using namespace simx;
using namespace std;

/// registering of all user-defined objects
namespace HelloWorld {
    void registerEntities() {
        // register the Person entity
        theEntityManager().registerEntity<Person, PersonInput>("person");
    }

    void registerServices() {
        theServiceManager().registerService<HelloHandlerPerson, Person, HelloHandlerPersonInput>("HelloHandlerPerson");
    }

    void registerInfos() {
        // Constants for External Infos
        enum eEventType {
            HELLO_MESSAGE = 10101,
            REPLY_MESSAGE = 10102
        };

        theInfoManager().registerInfo< Hello >( HELLO_MESSAGE );
        theInfoManager().registerInfo< Reply >( REPLY_MESSAGE );
    }

    void registerServiceAddresses() {
        // Matching between ServiceAddress strings and number, used for input in operator >>
        UserIO::setPair("eAddr_HelloHandlerPerson", eAddr_HelloHandlerPerson);
    }

    void registerAll() {
        registerEntities();
        registerServices();
        registerInfos();
        registerServiceAddresses();
    }
} // namespace
