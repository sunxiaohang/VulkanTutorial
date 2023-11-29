#include "LveWindow/LveWindow.h"
#include "LveWindow/LvePipline.h"

class InActionMain{
private:
    LveWindow window{800, 600, "Hello!"};
    LvePipline lvePipline{"../../shaders/simple_shader.vert.spv", "../../shaders/simple_shader.frag.spv"};
public:
    void run();
};