#include "plugins/include/IPlugin.hpp"
#include "game.hpp"

class XBoxJoystickPlugin : public IPlugin {
public:
    XBoxJoystickPlugin();
    ~XBoxJoystickPlugin();

    void setup(Game&);
    void frameUpdate(Game&);
    void cleanup(Game&);
    std::string getPluginName();
};

extern "C" {
    IPlugin* create();
    void destroy(IPlugin* plugin);
}