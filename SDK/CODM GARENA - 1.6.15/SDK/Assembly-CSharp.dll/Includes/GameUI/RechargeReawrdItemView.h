#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class RechargeReawrdItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "RechargeReawrdItemView"));
	}

	template <typename T = uintptr_t> T& Num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Get() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Select() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& progressBg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& progressBar() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& progressArrow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& whiteShake() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& timeTemplate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DrawAndGetAni() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& timeLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& GetLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& purpleEfx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& orangeEfx() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& FULL_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LAST_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GET_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GET_WIDTH_L() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ARROW_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& color() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& cachColor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpireTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQualityByColorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColorEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseColorEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreColorEfx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColorEfxRenderQ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T SetInfo(int32_t levelNum, uint32_t rewardId, int32_t rewardNum, bool isGet, bool nextIsGet, bool isLast, int32_t preProgress, int32_t curProgress, int32_t nextLevel, int32_t p) {
		return ((T (*)(RechargeReawrdItemView*, int32_t, uint32_t, int32_t, bool, bool, bool, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3AB8C54))(this, levelNum, rewardId, rewardNum, isGet, nextIsGet, isLast, preProgress, curProgress, nextLevel, p);
	}
	template <typename T = void> T SetLevel(int32_t levelNum) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB93C0))(this, levelNum);
	}
	template <typename T = void> T SetExpireTime(int32_t expire) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB94D4))(this, expire);
	}
	template <typename T = void> T SetSelect(bool isSelect) {
		return ((T (*)(RechargeReawrdItemView*, bool))(Il2CppBase() + 0x3AB9640))(this, isSelect);
	}
	template <typename T = void> T SetGet(bool isGet) {
		return ((T (*)(RechargeReawrdItemView*, bool))(Il2CppBase() + 0x3AB9734))(this, isGet);
	}
	template <typename T = void> T SetQuality(int32_t itemId) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB98D0))(this, itemId);
	}
	template <typename T = void> T SetQualityByColorId(int32_t colorId) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB9B60))(this, colorId);
	}
	template <typename T = void> T SetTime(int32_t seconds) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB9D38))(this, seconds);
	}
	template <typename T = Il2CppString*> T GetTimeStr(int32_t seconds) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3AB9EEC))(this, seconds);
	}
	template <typename T = void> T SetAni(bool show) {
		return ((T (*)(RechargeReawrdItemView*, bool))(Il2CppBase() + 0x3ABA124))(this, show);
	}
	template <typename T = void> T SetGetAni(bool isShow) {
		return ((T (*)(RechargeReawrdItemView*, bool))(Il2CppBase() + 0x3ABA244))(this, isShow);
	}
	template <typename T = void> T SetColorEfx(int32_t colorId) {
		return ((T (*)(RechargeReawrdItemView*, int32_t))(Il2CppBase() + 0x3ABA3C0))(this, colorId);
	}
	template <typename T = void> T CloseColorEfx() {
		return ((T (*)(RechargeReawrdItemView*))(Il2CppBase() + 0x3ABA574))(this);
	}
	template <typename T = void> T RestoreColorEfx() {
		return ((T (*)(RechargeReawrdItemView*))(Il2CppBase() + 0x3ABA6F4))(this);
	}
	template <typename T = void> T UpdateColorEfxRenderQ() {
		return ((T (*)(RechargeReawrdItemView*))(Il2CppBase() + 0x3ABA79C))(this);
	}

};

}
