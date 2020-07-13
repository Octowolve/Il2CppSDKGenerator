#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIKeyNavigation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIKeyNavigation"));
	}

	template <typename T = void*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& constraint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& onUp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onDown() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onLeft() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onRight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& onClick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onTab() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& startsSelected() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = int32_t> static T& mLastFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_current() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F528D8))(0);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F52A14))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F52B50))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F52C94))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F52DE0))(this);
	}
	template <typename T = bool> static T IsActive(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F52F10))(0, go);
	}
	template <typename T = uintptr_t> T GetLeft() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F530E8))(this);
	}
	template <typename T = uintptr_t> T GetRight() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F537B4))(this);
	}
	template <typename T = uintptr_t> T GetUp() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F5390C))(this);
	}
	template <typename T = uintptr_t> T GetDown() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F53A64))(this);
	}
	template <typename T = uintptr_t> T Get(Il2CppVector3 myDir, float x, float y) {
		return ((T (*)(UIKeyNavigation*, Il2CppVector3, float, float))(Il2CppBase() + 0x2F53240))(this, myDir, x, y);
	}
	template <typename T = Il2CppVector3> static T GetCenter(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F53BBC))(0, go);
	}
	template <typename T = void> T OnNavigate(uintptr_t key) {
		return ((T (*)(UIKeyNavigation*, uintptr_t))(Il2CppBase() + 0x2F54000))(this, key);
	}
	template <typename T = void> T OnKey(uintptr_t key) {
		return ((T (*)(UIKeyNavigation*, uintptr_t))(Il2CppBase() + 0x2F544F4))(this, key);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIKeyNavigation*))(Il2CppBase() + 0x2F54B60))(this);
	}

};

}
