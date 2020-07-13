#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignSecondConfirmationPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignSecondConfirmationPopController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitNumberLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReClaimBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3864B74))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3864C18))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3864D24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3864EC4))(this);
	}
	template <typename T = void> T InitNumberLabel(int32_t num) {
		return ((T (*)(SignSecondConfirmationPopController*, int32_t))(Il2CppBase() + 0x3860E64))(this, num);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3865040))(this);
	}
	template <typename T = void> T OnReClaimBtnClick() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x38650F4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3865214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x386521C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x3865224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignSecondConfirmationPopController*))(Il2CppBase() + 0x386522C))(this);
	}

};

}
