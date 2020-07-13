#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuideHelicopter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuide_Helicopter"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316C348))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(MPNewGuideHelicopter*, uintptr_t))(Il2CppBase() + 0x316C4D4))(this, ID);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(MPNewGuideHelicopter*, uintptr_t))(Il2CppBase() + 0x316C678))(this, Msg);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316C728))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316C984))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316CB4C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(MPNewGuideHelicopter*, uintptr_t))(Il2CppBase() + 0x316CB50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(MPNewGuideHelicopter*, uintptr_t))(Il2CppBase() + 0x316CB54))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316CB58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(MPNewGuideHelicopter*))(Il2CppBase() + 0x316CB5C))(this);
	}

};

}
