#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionInfoView"));
	}

	template <typename T = uintptr_t> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GridItems() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_LabelIsWarm() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_LabelVersion() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_LabelServer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_LabelCoreUserID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_LabelDSIP() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_LabelVersionCode() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_LabelIntranetIP() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsWarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLobbyIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCoreUserID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDSIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVersionCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIntranetIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetTextColor(uintptr_t color) {
		return ((T (*)(VersionInfoView*, uintptr_t))(Il2CppBase() + 0x25439BC))(this, color);
	}
	template <typename T = void> T SetIsWarm(bool bShow) {
		return ((T (*)(VersionInfoView*, bool))(Il2CppBase() + 0x2544864))(this, bShow);
	}
	template <typename T = void> T SetLobbyIP(Il2CppString* text) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x2543F3C))(this, text);
	}
	template <typename T = void> T SetVersion(Il2CppString* text) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x2543DC8))(this, text);
	}
	template <typename T = void> T SetCoreUserID(Il2CppString* text) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x2543C54))(this, text);
	}
	template <typename T = void> T SetDSIP(Il2CppString* text) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x25440B0))(this, text);
	}
	template <typename T = void> T SetVersionCode(Il2CppString* versionCode) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x2544D1C))(this, versionCode);
	}
	template <typename T = void> T SetIntranetIP(Il2CppString* intranetIP) {
		return ((T (*)(VersionInfoView*, Il2CppString*))(Il2CppBase() + 0x2544224))(this, intranetIP);
	}

};

}
