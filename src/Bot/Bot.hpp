#ifndef BOT_HPP
# define BOT_HPP

#include <curl/curl.h>
#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>


class Bot {
	private:
		const std::string _server;
		const int _port;
		std::string _channel;
		std::string _nick;
		std::string _userCmd;
		std::string _password;
		std::string _apikey;
		int _sock;

	public:
		Bot(const std::string &, const int &, const std::string &, const std::string &, const std::string &, const std::string &, const std::string &);
		~Bot();

		void setSocket(const int &);

		const std::string getServer() const;
		int getPort() const;
		const std::string getChannel() const;
		const std::string getNick() const;
		const std::string getUserCmd() const;
		const std::string getPassword() const;
		const std::string getAPIKEY() const;
		int getSocket() const;

};

int checkArgs(const int &);
void sendConfigOpenAIMessage(const std::string apikey);
Bot sendConfigServer(char *argv[]);
std::string extractContent(const std::string &);
size_t WriteCallback(void *data, size_t size, size_t nmemb, std::string *response_data);
// size_t WriteCallback(void *, const size_t &, const size_t &, std::string *response_data);
std::string isJoinCommand(const std::string &, const std::string &);
std::string responseToJoinCommand(std::string buffer);


std::string sendMessageToChatbot(std::string userMessage, const std::string apikey, bool isFirstMsg);

#endif
