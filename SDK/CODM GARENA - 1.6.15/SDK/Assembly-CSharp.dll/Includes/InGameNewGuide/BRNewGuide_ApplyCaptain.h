#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideApplyCaptain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_ApplyCaptain"));
	}

	template <typename T = bool> T& m_Switch() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Register() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x49964EC))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x49966A4))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideApplyCaptain*, uintptr_t))(Il2CppBase() + 0x49967F8))(this, Msg);
	}
	template <typename T = void> T RealStart(uintptr_t Msg) {
		return ((T (*)(BRNewGuideApplyCaptain*, uintptr_t))(Il2CppBase() + 0x49968B8))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x4996968))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideApplyCaptain*, uintptr_t))(Il2CppBase() + 0x4996ADC))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_Register() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x4996C4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegister() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x4996C54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideApplyCaptain*, uintptr_t))(Il2CppBase() + 0x4996C5C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideApplyCaptain*))(Il2CppBase() + 0x4996C64))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideApplyCaptain*, uintptr_t))(Il2CppBase() + 0x4996C6C))(this, P0);
	}

};

}
