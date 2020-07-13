#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideOpenMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_OpenMap"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Enter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499D7D0))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideOpenMap*, uintptr_t))(Il2CppBase() + 0x499D9D4))(this, ID);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499DBC0))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499DC68))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499DD28))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideOpenMap*, uintptr_t))(Il2CppBase() + 0x499DD30))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Enter() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499DD38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(BRNewGuideOpenMap*))(Il2CppBase() + 0x499DD40))(this);
	}

};

}
