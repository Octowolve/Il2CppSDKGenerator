#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuidePickUpAirDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuide_PickUpAirDrop"));
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
		return ((T (*)(MPNewGuidePickUpAirDrop*, uintptr_t))(Il2CppBase() + 0x316D0EC))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(MPNewGuidePickUpAirDrop*))(Il2CppBase() + 0x316D278))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(MPNewGuidePickUpAirDrop*, uintptr_t))(Il2CppBase() + 0x316D3F4))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(MPNewGuidePickUpAirDrop*, uintptr_t))(Il2CppBase() + 0x316D594))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(MPNewGuidePickUpAirDrop*))(Il2CppBase() + 0x316D598))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(MPNewGuidePickUpAirDrop*, uintptr_t))(Il2CppBase() + 0x316D59C))(this, P0);
	}

};

}
