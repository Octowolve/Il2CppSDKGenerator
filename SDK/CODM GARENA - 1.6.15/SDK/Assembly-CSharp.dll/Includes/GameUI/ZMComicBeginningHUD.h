#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMComicBeginningHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMComicBeginningHUD"));
	}

	template <typename T = uintptr_t> T& JumpOver() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DescPairs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& bPressingJumpOver() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& fPressingTimeSum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowComicBeginning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPressState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJumpOverPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4DFAC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4E120))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4E1DC))(this);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4E28C))(this);
	}
	template <typename T = void> T OnShowComicBeginning(uintptr_t Msg) {
		return ((T (*)(ZMComicBeginningHUD*, uintptr_t))(Il2CppBase() + 0x2A4E450))(this, Msg);
	}
	template <typename T = void> T ClearPressState() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4E7BC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4E864))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMComicBeginningHUD*, float))(Il2CppBase() + 0x2A4E86C))(this, dt);
	}
	template <typename T = void> T OnJumpOverPress(uintptr_t obj, bool bPress) {
		return ((T (*)(ZMComicBeginningHUD*, uintptr_t, bool))(Il2CppBase() + 0x2A4EAC0))(this, obj, bPress);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4EB80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4EB88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMComicBeginningHUD*))(Il2CppBase() + 0x2A4EB90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMComicBeginningHUD*, float))(Il2CppBase() + 0x2A4EB98))(this, P0);
	}

};

}
