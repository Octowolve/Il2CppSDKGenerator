#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameDefuseBombButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameDefuseBombButton"));
	}

	template <typename T = bool> T& m_IsUsing() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsUsing() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D78A00))(this);
	}
	template <typename T = void> T set_IsUsing(bool value) {
		return ((T (*)(BombGameDefuseBombButton*, bool))(Il2CppBase() + 0x2D78A08))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D78A10))(this);
	}
	template <typename T = void> T ManualClick() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D78AC0))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D78B70))(this);
	}
	template <typename T = void> T OnUseItem(bool isPressed) {
		return ((T (*)(BombGameDefuseBombButton*, bool))(Il2CppBase() + 0x2D78CCC))(this, isPressed);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D79174))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(BombGameDefuseBombButton*))(Il2CppBase() + 0x2D7917C))(this);
	}

};

}
