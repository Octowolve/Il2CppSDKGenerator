#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassItemView"));
	}

	template <typename T = uintptr_t> T& ItemWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RotateTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& QualitySprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SelectRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TipHolder() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LevelLable() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mCallbackParam() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> static T& mCurrencyScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& SpecialFx() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& mindex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MeshEffectRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ParticalEffectRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpecialFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetItem(int32_t itemId, int32_t num, void* callback, uintptr_t callbackParam, uintptr_t tipSide, Il2CppString* descText, int32_t level, uintptr_t sv) {
		return ((T (*)(BattlePassItemView*, int32_t, int32_t, void*, uintptr_t, uintptr_t, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x326BE00))(this, itemId, num, callback, callbackParam, tipSide, descText, level, sv);
	}
	template <typename T = void> T SetSpecialFx(bool IsSpecial) {
		return ((T (*)(BattlePassItemView*, bool))(Il2CppBase() + 0x327378C))(this, IsSpecial);
	}
	template <typename T = void> T SetSelect(bool isShow) {
		return ((T (*)(BattlePassItemView*, bool))(Il2CppBase() + 0x328E184))(this, isShow);
	}
	template <typename T = void> T OnItemClick() {
		return ((T (*)(BattlePassItemView*))(Il2CppBase() + 0x328E2A8))(this);
	}
	template <typename T = void> T SetCulling(uintptr_t sv) {
		return ((T (*)(BattlePassItemView*, uintptr_t))(Il2CppBase() + 0x328DD30))(this, sv);
	}

};

}
