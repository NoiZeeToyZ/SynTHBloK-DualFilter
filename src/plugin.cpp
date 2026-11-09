// SynTHBloK-DualFilter: registers this plugin's modules.
#include "plugin.hpp"

Plugin* pluginInstance;

extern Model* modelSynTHBloKDualFilter;

void init(Plugin* p) {
    pluginInstance = p;
    p->addModel(modelSynTHBloKDualFilter);
}
