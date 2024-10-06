#include "Logger.h"
void openconnection() {
	//Logger lg;
	Logger& lg = Logger::Instance();
	lg.WriteLog("application is attempting to open a connection");
}
int main() {
	//Logger lg;
	Logger &lg = Logger::Instance();// if & is not used,object will be initialized by a efault copy constructor,which we have not implemented here
	//and will create problem and crash the project
	//without & two objects will share the same stream, and after the scope one object,destructor will be called and the other object will be a pointer to a stream that has already been destroyed, so avoid multiple 
	//copies to object we are usig referece object
	lg.SetTag("192.168.1.101");
	lg.WriteLog("Application has started");
	openconnection();
	lg.WriteLog("aplication is shutting down");
}