#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class Authority
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "Authority"));
	}

	template <typename T = uintptr_t> T& PermissionView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PermissionViewContent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TermOfUse() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Privacy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsPermissionViewShowed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Framework() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BootSplashObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LogoObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& bHelpGameFrameworkLateUpdate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPermissionView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUnityInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPermissionViewContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAgreeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTermOfUseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestAuthority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x3711168))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x3711544))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x37118E8))(this);
	}
	template <typename T = void> T ShowPermissionView() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x37116F8))(this);
	}
	template <typename T = void> T InitUnityInput() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x3711A0C))(this);
	}
	template <typename T = void> T ShowPermissionViewContent() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x3711AD8))(this);
	}
	template <typename T = void> T OnAgreeBtnClick(uintptr_t o) {
		return ((T (*)(Authority*, uintptr_t))(Il2CppBase() + 0x3711C18))(this, o);
	}
	template <typename T = void> T OnTermOfUseClick(uintptr_t o) {
		return ((T (*)(Authority*, uintptr_t))(Il2CppBase() + 0x3712004))(this, o);
	}
	template <typename T = void> T OnPrivacyClick(uintptr_t o) {
		return ((T (*)(Authority*, uintptr_t))(Il2CppBase() + 0x37120B4))(this, o);
	}
	template <typename T = void> T RequestAuthority() {
		return ((T (*)(Authority*))(Il2CppBase() + 0x3711E78))(this);
	}

};

}
