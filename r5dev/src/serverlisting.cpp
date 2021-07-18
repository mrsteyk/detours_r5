#include "serverlisting.h"
#include "overlay.h"
#include "httplib.h"

ServerListing::ServerListing(std::string name, std::string map, std::string ip, std::string version)
{
	this->name = name;
	this->map = map;
	this->ip = ip;
	this->version = version;
}

void ServerListing::Select()
{
	std::stringstream cmd;
	cmd << "connect " << this->ip;
	g_GameConsole->ProcessCommand(cmd.str().c_str());
}