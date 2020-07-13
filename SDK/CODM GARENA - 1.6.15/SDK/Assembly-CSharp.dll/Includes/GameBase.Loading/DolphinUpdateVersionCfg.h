#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class DolphinUpdateVersionCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "DolphinUpdateVersionCfg"));
	}

	template <typename T = bool> T& IsNeedExtract() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateTempPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateSourceSavePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateApolloPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSourceVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentProgramVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinUpdateVersionCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> T GetUpdateTempPath() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E364C8))(this);
	}
	template <typename T = Il2CppString*> T GetUpdateSourceSavePath() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E36620))(this);
	}
	template <typename T = Il2CppString*> T GetUpdateApolloPath() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E36710))(this);
	}
	template <typename T = Il2CppString*> T GetUserDateString() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentSourceVersion() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E36868))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentProgramVersion() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E36908))(this);
	}
	template <typename T = bool> T get_IsNeedExtract() {
		return ((T (*)(DolphinUpdateVersionCfg*))(Il2CppBase() + 0x2E369A8))(this);
	}
	template <typename T = void> T set_IsNeedExtract(bool value) {
		return ((T (*)(DolphinUpdateVersionCfg*, bool))(Il2CppBase() + 0x2E369B0))(this, value);
	}
	template <typename T = uintptr_t> static T GetDolphinUpdateVersionCfg(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2E34048))(0, type);
	}

};

}
