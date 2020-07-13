#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncLevelObjectInfoHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncLevelObjectInfoHandler"));
	}

	template <typename T = uintptr_t> T& m_LevelObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindLevelObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetBindLevelObject(uintptr_t obj) {
		return ((T (*)(LuaSyncLevelObjectInfoHandler*, uintptr_t))(Il2CppBase() + 0x4A980E4))(this, obj);
	}
	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaSyncLevelObjectInfoHandler*, uint32_t, uint32_t))(Il2CppBase() + 0x4A987B8))(this, propertyID, value);
	}

};

}
