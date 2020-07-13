#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class StopPanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "StopPanelView"));
	}

	template <typename T = uintptr_t> T& m_SettingBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_EndGameBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ReturnGameBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(StopPanelView*))(Il2CppBase() + 0x4055778))(this);
	}
	template <typename T = void> T OnOpenSettingPanel(uintptr_t go) {
		return ((T (*)(StopPanelView*, uintptr_t))(Il2CppBase() + 0x4055810))(this, go);
	}
	template <typename T = void> T OnEndGame(uintptr_t go) {
		return ((T (*)(StopPanelView*, uintptr_t))(Il2CppBase() + 0x40558B0))(this, go);
	}
	template <typename T = void> T OnReturnGame(uintptr_t go) {
		return ((T (*)(StopPanelView*, uintptr_t))(Il2CppBase() + 0x4055998))(this, go);
	}

};

}
