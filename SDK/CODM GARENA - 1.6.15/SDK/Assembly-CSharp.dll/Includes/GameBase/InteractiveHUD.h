#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InteractiveHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InteractiveHUD"));
	}

	template <typename T = uintptr_t> T& LabelCostPoint() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelCommonDesc() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelCostItemCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BtnCommon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BtnSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_CostPoint() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& CostItemId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& clickEventHandler() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& targetUID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& targetAction() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ZMProgressHud() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& defaultIconOffset() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPickUpProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0D3E0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0D4D4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0D4DC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0D4EC))(this);
	}
	template <typename T = bool> T ShouldShow() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0D7A8))(this);
	}
	template <typename T = void> T OnCheckContext(uintptr_t msg) {
		return ((T (*)(InteractiveHUD*, uintptr_t))(Il2CppBase() + 0x1F0D954))(this, msg);
	}
	template <typename T = void> T OnWeaponPickUpProgress(uintptr_t msg) {
		return ((T (*)(InteractiveHUD*, uintptr_t))(Il2CppBase() + 0x1F0DC60))(this, msg);
	}
	template <typename T = void> T OnStartProgress(uintptr_t msg) {
		return ((T (*)(InteractiveHUD*, uintptr_t))(Il2CppBase() + 0x1F0DD00))(this, msg);
	}
	template <typename T = void> T ShowInteractive(uintptr_t param) {
		return ((T (*)(InteractiveHUD*, uintptr_t))(Il2CppBase() + 0x1F0DE90))(this, param);
	}
	template <typename T = void> T OnIteractiveHUD(uintptr_t msg) {
		return ((T (*)(InteractiveHUD*, uintptr_t))(Il2CppBase() + 0x1F0E350))(this, msg);
	}
	template <typename T = void> T OnCommonButtonClick() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0E5B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0E750))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InteractiveHUD*))(Il2CppBase() + 0x1F0E758))(this);
	}

};

}
