#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class PrivacyController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "PrivacyController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSubView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeclineBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinueDeclinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressForPrivacy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252D498))(this);
	}
	template <typename T = void> T SwitchSubView(bool IsShowPrivacyConfirmSubView) {
		return ((T (*)(PrivacyController*, bool))(Il2CppBase() + 0x252D5A4))(this, IsShowPrivacyConfirmSubView);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252D6D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252D774))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252DFC4))(this);
	}
	template <typename T = void> T OnDeclineBtnClick() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252E7B4))(this);
	}
	template <typename T = void> T OnAgreeBtnClick() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252E85C))(this);
	}
	template <typename T = void> T OnContinueDeclinBtnClick() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252E970))(this);
	}
	template <typename T = void> T OnGoBackBtnClick() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EA3C))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EAE4))(this);
	}
	template <typename T = void> T OnReturnKeyPressForPrivacy(uintptr_t _) {
		return ((T (*)(PrivacyController*, uintptr_t))(Il2CppBase() + 0x252EBB0))(this, _);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EC84))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EC8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PrivacyController*))(Il2CppBase() + 0x252EC9C))(this);
	}

};

}
