#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideSignPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_SignPosition"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Register() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A14B8))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A1670))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideSignPosition*, uintptr_t))(Il2CppBase() + 0x49A17C4))(this, Msg);
	}
	template <typename T = void> T OpenSwitch(uintptr_t Msg) {
		return ((T (*)(BRNewGuideSignPosition*, uintptr_t))(Il2CppBase() + 0x49A1884))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A1934))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideSignPosition*, uintptr_t))(Il2CppBase() + 0x49A1AB8))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_Register() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A1C40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegister() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A1C48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideSignPosition*, uintptr_t))(Il2CppBase() + 0x49A1C50))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideSignPosition*))(Il2CppBase() + 0x49A1C58))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideSignPosition*, uintptr_t))(Il2CppBase() + 0x49A1C60))(this, P0);
	}

};

}
