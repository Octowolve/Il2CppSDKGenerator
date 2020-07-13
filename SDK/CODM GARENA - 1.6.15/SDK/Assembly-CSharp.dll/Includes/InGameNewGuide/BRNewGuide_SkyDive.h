#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideSkyDive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_SkyDive"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideSkyDive*, uintptr_t))(Il2CppBase() + 0x49A1D5C))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideSkyDive*))(Il2CppBase() + 0x49A1EE8))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideSkyDive*, uintptr_t))(Il2CppBase() + 0x49A205C))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideSkyDive*, uintptr_t))(Il2CppBase() + 0x49A2298))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideSkyDive*))(Il2CppBase() + 0x49A22A0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideSkyDive*, uintptr_t))(Il2CppBase() + 0x49A22A8))(this, P0);
	}

};

}
