#pragma once
class DatabaseIO
{
#include <stdlib.h>
#include <iostream>
#include "pch.h"

	/*
	  Include directly the different
	  headers from cppconn/ and mysql_driver.h + mysql_util.h
	  (and mysql_connection.h). This will reduce your build time!
	*/
#include <jdbc/mysql_connection.h>
#include <jdbc/mysql_driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/resultset.h>
#include <jdbc/cppconn/statement.h>

	using namespace std;

public:
	DatabaseIO();
	~DatabaseIO();

};

