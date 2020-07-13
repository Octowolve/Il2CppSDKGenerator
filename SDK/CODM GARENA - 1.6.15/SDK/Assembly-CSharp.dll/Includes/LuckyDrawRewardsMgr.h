#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyDrawRewardsMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyDrawRewardsMgr"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& views() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isInitEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllColorEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreColorEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColorEfxRenderQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDrawingAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllDrawingAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDrawGetAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T SetRewards(Il2CppList<uintptr_t>* prop_list) {
		return ((T (*)(LuckyDrawRewardsMgr*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x41C1194))(this, prop_list);
	}
	template <typename T = void> T CloseAllColorEfx() {
		return ((T (*)(LuckyDrawRewardsMgr*))(Il2CppBase() + 0x41C1AB8))(this);
	}
	template <typename T = void> T RestoreColorEfx() {
		return ((T (*)(LuckyDrawRewardsMgr*))(Il2CppBase() + 0x41C1C68))(this);
	}
	template <typename T = void> T UpdateColorEfxRenderQ() {
		return ((T (*)(LuckyDrawRewardsMgr*))(Il2CppBase() + 0x41C1E18))(this);
	}
	template <typename T = void> T InitEvent() {
		return ((T (*)(LuckyDrawRewardsMgr*))(Il2CppBase() + 0x41C17A0))(this);
	}
	template <typename T = void> T OnItemClick(uintptr_t go) {
		return ((T (*)(LuckyDrawRewardsMgr*, uintptr_t))(Il2CppBase() + 0x41C1FC8))(this, go);
	}
	template <typename T = void> T SetSelect(int32_t idx) {
		return ((T (*)(LuckyDrawRewardsMgr*, int32_t))(Il2CppBase() + 0x41C2224))(this, idx);
	}
	template <typename T = void> T SetGet(int32_t idx, bool isGet) {
		return ((T (*)(LuckyDrawRewardsMgr*, int32_t, bool))(Il2CppBase() + 0x41C2368))(this, idx, isGet);
	}
	template <typename T = void> T SetSelectIndex(Il2CppList<int32_t>* indexs) {
		return ((T (*)(LuckyDrawRewardsMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x41C2524))(this, indexs);
	}
	template <typename T = void> T SetDrawingAni(Il2CppList<int32_t>* indexs) {
		return ((T (*)(LuckyDrawRewardsMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x41C26A8))(this, indexs);
	}
	template <typename T = void> T CloseAllDrawingAni() {
		return ((T (*)(LuckyDrawRewardsMgr*))(Il2CppBase() + 0x41C282C))(this);
	}
	template <typename T = void> T SetDrawGetAni(Il2CppList<int32_t>* indexs) {
		return ((T (*)(LuckyDrawRewardsMgr*, Il2CppList<int32_t>*))(Il2CppBase() + 0x41C2A24))(this, indexs);
	}

};

}
