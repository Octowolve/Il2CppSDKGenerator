#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGamePlacingBombButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGamePlacingBombButton"));
	}

	template <typename T = bool> T& m_IsUsing() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_DisenbleClick() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsUsing() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7C428))(this);
	}
	template <typename T = void> T set_IsUsing(bool value) {
		return ((T (*)(BombGamePlacingBombButton*, bool))(Il2CppBase() + 0x2D7B068))(this, value);
	}
	template <typename T = void> T set_DisEnbleClick(bool value) {
		return ((T (*)(BombGamePlacingBombButton*, bool))(Il2CppBase() + 0x2D7C430))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7C438))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7C4E8))(this);
	}
	template <typename T = void> T ManualClick() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7CAA4))(this);
	}
	template <typename T = void> T OnUseItem(bool isPressed) {
		return ((T (*)(BombGamePlacingBombButton*, bool))(Il2CppBase() + 0x2D7C5C0))(this, isPressed);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7CB54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(BombGamePlacingBombButton*))(Il2CppBase() + 0x2D7CB5C))(this);
	}

};

}
