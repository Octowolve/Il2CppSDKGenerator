#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardScrollPlayView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardScrollPlayView"));
	}

	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& RankLabelTween() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& ItemWidth() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& ItemHeight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& FXBlueAnim() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& FXPurpleAnim() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppString*> static T& FX_STATE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lastIndex() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollPlayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreUpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381E73C))(this);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381E950))(this);
	}
	template <typename T = void> T SwitchToView(int32_t index) {
		return ((T (*)(RankRewardScrollPlayView*, int32_t))(Il2CppBase() + 0x381E9F0))(this, index);
	}
	template <typename T = void> T SetScrollPlayData(Il2CppList<uintptr_t>* list, int32_t itemWidth, int32_t itemHeight) {
		return ((T (*)(RankRewardScrollPlayView*, Il2CppList<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E8A7D8))(this, list, itemWidth, itemHeight);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381EF60))(this);
	}
	template <typename T = void> T PreUpdateView() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381F010))(this);
	}
	template <typename T = void> T UpdateView(int32_t index) {
		return ((T (*)(RankRewardScrollPlayView*, int32_t))(Il2CppBase() + 0x381F26C))(this, index);
	}
	template <typename T = void> T StartScroll(int32_t index) {
		return ((T (*)(RankRewardScrollPlayView*, int32_t))(Il2CppBase() + 0x381F674))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381F7A4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDataValid() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381F7AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToView(int32_t P0) {
		return ((T (*)(RankRewardScrollPlayView*, int32_t))(Il2CppBase() + 0x381F7B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(RankRewardScrollPlayView*))(Il2CppBase() + 0x381F7BC))(this);
	}

};

}
