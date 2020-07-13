#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SwitchBagBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SwitchBagBtnView"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ProgressConainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ProgressPanel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LoadoutBtnObj() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& mCachePanelWidth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& mCachePanelRange() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& DynamicTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& bTimeCounting() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTimePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B5E48))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B5E50))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B5E5C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B6040))(this);
	}
	template <typename T = void> T OnLoadoutClick(uintptr_t obj) {
		return ((T (*)(SwitchBagBtnView*, uintptr_t))(Il2CppBase() + 0x30B6184))(this, obj);
	}
	template <typename T = void> T SetTime(float time) {
		return ((T (*)(SwitchBagBtnView*, float))(Il2CppBase() + 0x30B5A8C))(this, time);
	}
	template <typename T = void> T OnShowTimePanel(bool show) {
		return ((T (*)(SwitchBagBtnView*, bool))(Il2CppBase() + 0x30B631C))(this, show);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B653C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SwitchBagBtnView*, float))(Il2CppBase() + 0x30B6544))(this, dt);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B6838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SwitchBagBtnView*))(Il2CppBase() + 0x30B6840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchBagBtnView*, float))(Il2CppBase() + 0x30B6848))(this, P0);
	}

};

}
