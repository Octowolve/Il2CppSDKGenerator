#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideOpenBag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_OpenBag"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideOpenBag*))(Il2CppBase() + 0x499D2F0))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideOpenBag*, uintptr_t))(Il2CppBase() + 0x499D464))(this, ID);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BRNewGuideOpenBag*))(Il2CppBase() + 0x499D604))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideOpenBag*))(Il2CppBase() + 0x499D6C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideOpenBag*, uintptr_t))(Il2CppBase() + 0x499D6CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(BRNewGuideOpenBag*))(Il2CppBase() + 0x499D6D4))(this);
	}

};

}
