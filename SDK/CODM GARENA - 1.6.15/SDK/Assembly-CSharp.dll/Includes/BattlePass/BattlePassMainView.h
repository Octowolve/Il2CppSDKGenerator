#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassMainView"));
	}

	template <typename T = uintptr_t> T& tabBarPrefab() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& tabGrid() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& subViewContainer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& TipBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& titleLale() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BpExpBuffView() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& bpType2Tab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBpExpBuffView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ResetTab() {
		return ((T (*)(BattlePassMainView*))(Il2CppBase() + 0x2C0F56C))(this);
	}
	template <typename T = void> T SetTab(uintptr_t type) {
		return ((T (*)(BattlePassMainView*, uintptr_t))(Il2CppBase() + 0x2C0FD3C))(this, type);
	}
	template <typename T = void> T RefreshTabs() {
		return ((T (*)(BattlePassMainView*))(Il2CppBase() + 0x2C1025C))(this);
	}
	template <typename T = void> T SetRedDot(uintptr_t type, bool show) {
		return ((T (*)(BattlePassMainView*, uintptr_t, bool))(Il2CppBase() + 0x2C124B0))(this, type, show);
	}
	template <typename T = void> T SetBpExpBuffView() {
		return ((T (*)(BattlePassMainView*))(Il2CppBase() + 0x2C13F9C))(this);
	}

};

}
