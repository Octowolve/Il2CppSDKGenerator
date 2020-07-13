#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickUpData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickUpData"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Param1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& InfoType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PickUpType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsInBox() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& BoxObjectUID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BoxOwnerActorId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& Pos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& FromPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppQuaternion> T& Rot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& HasRot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& ReceiveDataTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& BoxIsOpen() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = bool> T& IsRelevant() {
		return *(T*)((uintptr_t)this + 0x62);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x63);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCommonBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOpenCloseBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Same() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BRDroppedPickUpData*))(Il2CppBase() + 0x18BD05C))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BRDroppedPickUpData*, bool))(Il2CppBase() + 0x18BD064))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BRDroppedPickUpData*))(Il2CppBase() + 0x18BD06C))(this);
	}
	template <typename T = bool> T IsCommonBox() {
		return ((T (*)(BRDroppedPickUpData*))(Il2CppBase() + 0x18BD1B0))(this);
	}
	template <typename T = bool> T IsOpenCloseBox() {
		return ((T (*)(BRDroppedPickUpData*))(Il2CppBase() + 0x18BD298))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(BRDroppedPickUpData*, uintptr_t))(Il2CppBase() + 0x18BD344))(this, other);
	}
	template <typename T = bool> T Same(uintptr_t other) {
		return ((T (*)(BRDroppedPickUpData*, uintptr_t))(Il2CppBase() + 0x18BD408))(this, other);
	}

};

}
