#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadCloseIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFCFB4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFD058))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFD164))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFD384))(this);
	}
	template <typename T = bool> T OnGamepadOpenIndividuation() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFD53C))(this);
	}
	template <typename T = void> T OnGamepadCloseIndividuation(uintptr_t Msg) {
		return ((T (*)(IndividuationBtnController*, uintptr_t))(Il2CppBase() + 0x1EFDA1C))(this, Msg);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFDBB4))(this);
	}
	template <typename T = void> T ToggleButtonState(bool bClose) {
		return ((T (*)(IndividuationBtnController*, bool))(Il2CppBase() + 0x1EFE148))(this, bClose);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFE364))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFE36C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFE374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(IndividuationBtnController*))(Il2CppBase() + 0x1EFE37C))(this);
	}

};

}
