#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideTransferCaptain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_TransferCaptain"));
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
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x3165170))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x316554C))(this);
	}
	template <typename T = void> T OnEvent(uintptr_t Msg) {
		return ((T (*)(BRNewGuideTransferCaptain*, uintptr_t))(Il2CppBase() + 0x316585C))(this, Msg);
	}
	template <typename T = void> T RealStart(uintptr_t Msg) {
		return ((T (*)(BRNewGuideTransferCaptain*, uintptr_t))(Il2CppBase() + 0x3165AEC))(this, Msg);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x3165B9C))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideTransferCaptain*, uintptr_t))(Il2CppBase() + 0x3165D10))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_Register() {
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x3165E80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegister() {
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x3165E84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(BRNewGuideTransferCaptain*, uintptr_t))(Il2CppBase() + 0x3165E88))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideTransferCaptain*))(Il2CppBase() + 0x3165E8C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideTransferCaptain*, uintptr_t))(Il2CppBase() + 0x3165F30))(this, P0);
	}

};

}
