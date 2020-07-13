#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GamepadQuickMessageHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GamepadQuickMessageHUD"));
	}

	template <typename T = uintptr_t> T& MessageGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MessageTemplateObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MessageItems() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& SelectedIndex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& MoveStartTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& MoveStartIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfirmMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8B060))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8B7D8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8B870))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8BB20))(this);
	}
	template <typename T = void> T SelectIndex(int32_t idx) {
		return ((T (*)(GamepadQuickMessageHUD*, int32_t))(Il2CppBase() + 0x1E8BDD0))(this, idx);
	}
	template <typename T = void> T MoveTimer() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8C0A0))(this);
	}
	template <typename T = bool> T OnGamepadStart() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8C2C4))(this);
	}
	template <typename T = bool> T OnGamepadEnd() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8C3F0))(this);
	}
	template <typename T = void> T ConfirmMessage() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8C53C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8CACC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8CAD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8CADC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GamepadQuickMessageHUD*))(Il2CppBase() + 0x1E8CAE4))(this);
	}

};

}
