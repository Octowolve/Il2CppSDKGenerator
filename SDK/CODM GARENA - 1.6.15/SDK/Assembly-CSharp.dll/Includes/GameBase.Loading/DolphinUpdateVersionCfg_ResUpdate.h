#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinUpdateVersionCfgResUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinUpdateVersionCfg_ResUpdate"));
	}

	template <typename T = Il2CppString*> T& source_version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserDateString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentSourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T GetUserDateString() {
		return ((T (*)(DolphinUpdateVersionCfgResUpdate*))(Il2CppBase() + 0x2E36EC4))(this);
	}
	template <typename T = void> T SetCurrentSourceVersion(Il2CppString* sourceVersion) {
		return ((T (*)(DolphinUpdateVersionCfgResUpdate*, Il2CppString*))(Il2CppBase() + 0x2E36F7C))(this, sourceVersion);
	}
	template <typename T = Il2CppString*> T GetCurrentSourceVersion() {
		return ((T (*)(DolphinUpdateVersionCfgResUpdate*))(Il2CppBase() + 0x2E37024))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetCurrentSourceVersion() {
		return ((T (*)(DolphinUpdateVersionCfgResUpdate*))(Il2CppBase() + 0x2E37124))(this);
	}

};

}
