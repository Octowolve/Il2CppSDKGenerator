#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncLevelObjectInfoHandlerPAPMAchineBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncLevelObjectInfoHandler_PAPMAchineBox"));
	}


	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaSyncLevelObjectInfoHandlerPAPMAchineBox*, uint32_t, uint32_t))(Il2CppBase() + 0x4A99528))(this, propertyID, value);
	}

};

}
