#include <map>
#include <set>
#include <string>


class Config {
    public:
        int load(const char *path);
        std::string client_id,
                    client_secret, 
                    scope,
                    device_endpoint,
                    token_endpoint,
                    userinfo_endpoint,
                    ldap_host,
                    ldap_basedn,
                    ldap_user,
                    ldap_passwd,
                    ldap_filter,
                    ldap_attr;
        std::map<std::string,std::set<std::string>> usermap;
};