#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GameQuitMessageBoxView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GameQuitMessageBoxView"));
	}

	template <typename T = uintptr_t> T& LabelAddDiamond() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelAddDrop() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelAddGold() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelAddExp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& OkButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Callbackhandler() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& m_AddDiamond() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& m_AddDrop() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_AddGold() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_AddExp() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GameQuitMessageBoxView*))(Il2CppBase() + 0x22DB9F4))(this);
	}
	template <typename T = void> T OnOkClick() {
		return ((T (*)(GameQuitMessageBoxView*))(Il2CppBase() + 0x22DBD7C))(this);
	}
	template <typename T = void> T OnCancelClick() {
		return ((T (*)(GameQuitMessageBoxView*))(Il2CppBase() + 0x22DBEA0))(this);
	}
	template <typename T = void> T SetData(uintptr_t callbackHandler, uintptr_t viewMode) {
		return ((T (*)(GameQuitMessageBoxView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x22DB500))(this, callbackHandler, viewMode);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(GameQuitMessageBoxView*))(Il2CppBase() + 0x22DBF54))(this);
	}

};

}
