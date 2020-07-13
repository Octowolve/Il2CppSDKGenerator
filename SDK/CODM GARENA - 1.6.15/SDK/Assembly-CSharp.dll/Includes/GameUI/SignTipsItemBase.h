#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignTipsItemBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignTipsItemBase"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SignCom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsInIdle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tickable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignCom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignTipsItemBase*))(Il2CppBase() + 0x3C9A5CC))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignTipsItemBase*, bool))(Il2CppBase() + 0x3C9A728))(this, isShow);
	}
	template <typename T = bool> T IsShowing() {
		return ((T (*)(SignTipsItemBase*))(Il2CppBase() + 0x3C9A81C))(this);
	}
	template <typename T = bool> T IsIdle() {
		return ((T (*)(SignTipsItemBase*))(Il2CppBase() + 0x3C9A968))(this);
	}
	template <typename T = void> T SetIdle(bool isInIdle) {
		return ((T (*)(SignTipsItemBase*, bool))(Il2CppBase() + 0x3C9AA10))(this, isInIdle);
	}
	template <typename T = bool> T Tickable() {
		return ((T (*)(SignTipsItemBase*))(Il2CppBase() + 0x3C9AAD0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SignTipsItemBase*, float))(Il2CppBase() + 0x3C9AB80))(this, DeltaTime);
	}
	template <typename T = uintptr_t> T GetSignCom() {
		return ((T (*)(SignTipsItemBase*))(Il2CppBase() + 0x3C9929C))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t InSignCom) {
		return ((T (*)(SignTipsItemBase*, uintptr_t))(Il2CppBase() + 0x3C9AC3C))(this, InSignCom);
	}
	template <typename T = void> T UpdateView(bool IsFirstTime) {
		return ((T (*)(SignTipsItemBase*, bool))(Il2CppBase() + 0x3C9AD38))(this, IsFirstTime);
	}
	template <typename T = void> T AdjustUIPos(Il2CppVector2 PosInScreen) {
		return ((T (*)(SignTipsItemBase*, Il2CppVector2))(Il2CppBase() + 0x3C9AF74))(this, PosInScreen);
	}
	template <typename T = bool> T IsLocalPlayer(uint32_t PlayerID) {
		return ((T (*)(SignTipsItemBase*, uint32_t))(Il2CppBase() + 0x3C9B210))(this, PlayerID);
	}

};

}
