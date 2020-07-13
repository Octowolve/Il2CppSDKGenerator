#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InteractiveHUDParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InteractiveHUDParam"));
	}

	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& TagetUID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TargetAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CostPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SpriteScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& SpriteOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BtnDesc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& CostItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& BtnContent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CallBack() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T InstanceShow(bool bShow, uint32_t targetUID, uintptr_t targetAction, int32_t costPoint, Il2CppString* spriteName, float spriteScale, Il2CppVector3 spriteOffset, Il2CppString* content, Il2CppString* desc, int32_t costItem, uintptr_t callback) {
		return ((T (*)(void *, bool, uint32_t, uintptr_t, int32_t, Il2CppString*, float, Il2CppVector3, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x1F0EC58))(0, bShow, targetUID, targetAction, costPoint, spriteName, spriteScale, spriteOffset, content, desc, costItem, callback);
	}
	template <typename T = uintptr_t> static T InstanceHide() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0EE40))(0);
	}
	template <typename T = void> T SetParam(bool bShow, uint32_t targetUID, uintptr_t targetAction, int32_t costPoint, Il2CppString* spriteName, float spriteScale, Il2CppVector3 spriteOffset, Il2CppString* content, Il2CppString* desc, int32_t costItem, uintptr_t callback) {
		return ((T (*)(InteractiveHUDParam*, bool, uint32_t, uintptr_t, int32_t, Il2CppString*, float, Il2CppVector3, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x1F0EA60))(this, bShow, targetUID, targetAction, costPoint, spriteName, spriteScale, spriteOffset, content, desc, costItem, callback);
	}
	template <typename T = void> static T InstanceRelease() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F0EF48))(0);
	}

};

}
