#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyBoardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyBoardItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& template() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& rate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DrawAni() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GetAni() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& runAni() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& selectAni() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& stayAni() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& drawCountTag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& drawCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& clickCallBack() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _itemId() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& pressState() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& eventStyle() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& longPressTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& longPressCallBack() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& color() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& LastGetAniState() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& cachDrawCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComositeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterClickEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterLongPressEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRateVisiable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDrawAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseDrawEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CachAndHideEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreHideEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRunAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStayAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseRunAndSelectAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseDrawCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T SetInfo(uintptr_t boxShowPropInfo) {
		return ((T (*)(LuckyBoardItem*, uintptr_t))(Il2CppBase() + 0x1F76070))(this, boxShowPropInfo);
	}
	template <typename T = void> T SetComositeInfo(int32_t num) {
		return ((T (*)(LuckyBoardItem*, int32_t))(Il2CppBase() + 0x1F76C8C))(this, num);
	}
	template <typename T = void> T BindEvent() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7E58C))(this);
	}
	template <typename T = void> T OnItemPress(uintptr_t go, bool state) {
		return ((T (*)(LuckyBoardItem*, uintptr_t, bool))(Il2CppBase() + 0x1F7E730))(this, go, state);
	}
	template <typename T = void> T RegisterClickEvent(void* clickCallBack) {
		return ((T (*)(LuckyBoardItem*, void*))(Il2CppBase() + 0x1F76684))(this, clickCallBack);
	}
	template <typename T = void> T RegisterLongPressEvent(void* longPressCallBack) {
		return ((T (*)(LuckyBoardItem*, void*))(Il2CppBase() + 0x1F7672C))(this, longPressCallBack);
	}
	template <typename T = void> T OnItemLongPress(bool isPress) {
		return ((T (*)(LuckyBoardItem*, bool))(Il2CppBase() + 0x1F7E80C))(this, isPress);
	}
	template <typename T = void> T OnItemClick() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7EA9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7EB74))(this);
	}
	template <typename T = void> T SetRate(float rateNum) {
		return ((T (*)(LuckyBoardItem*, float))(Il2CppBase() + 0x1F77304))(this, rateNum);
	}
	template <typename T = void> T SetRateVisiable(bool isShow) {
		return ((T (*)(LuckyBoardItem*, bool))(Il2CppBase() + 0x1F7ECA4))(this, isShow);
	}
	template <typename T = void> T SetDrawAni(bool isShow) {
		return ((T (*)(LuckyBoardItem*, bool))(Il2CppBase() + 0x1F7EDD4))(this, isShow);
	}
	template <typename T = void> T SetGetAni(bool isShow) {
		return ((T (*)(LuckyBoardItem*, bool))(Il2CppBase() + 0x1F7CCC8))(this, isShow);
	}
	template <typename T = void> T CloseDrawEfx() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7C688))(this);
	}
	template <typename T = void> T CachAndHideEfx() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7D06C))(this);
	}
	template <typename T = void> T RestoreHideEfx() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7D408))(this);
	}
	template <typename T = void> T SetRunAni() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7B9E4))(this);
	}
	template <typename T = void> T SetSelectAni() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7B524))(this);
	}
	template <typename T = void> T SetStayAni(bool isShow) {
		return ((T (*)(LuckyBoardItem*, bool))(Il2CppBase() + 0x1F7B654))(this, isShow);
	}
	template <typename T = void> T CloseRunAndSelectAni() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7C91C))(this);
	}
	template <typename T = void> T CloseDrawCount() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7C7FC))(this);
	}
	template <typename T = void> T AddTagCount() {
		return ((T (*)(LuckyBoardItem*))(Il2CppBase() + 0x1F7B774))(this);
	}

};

}
