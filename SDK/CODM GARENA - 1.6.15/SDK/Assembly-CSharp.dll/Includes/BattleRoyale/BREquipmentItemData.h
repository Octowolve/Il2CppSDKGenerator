#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentItemData"));
	}

	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PosId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& BulletCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Param1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& BR_MELEE_ID_SUFFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& DroppedPickUpConf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Conf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseless() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUselessForClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrBaseMeleeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ItemDataType() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpConf() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x18C9D78))(this);
	}
	template <typename T = void> T set_DroppedPickUpConf(uintptr_t value) {
		return ((T (*)(BREquipmentItemData*, uintptr_t))(Il2CppBase() + 0x18E3DE0))(this, value);
	}
	template <typename T = uintptr_t> T Conf() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x3348C18))(this);
	}
	template <typename T = bool> T CheckUseless() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x18E3F1C))(this);
	}
	template <typename T = bool> static T CheckUselessForClip(int32_t itemId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18C7BFC))(0, itemId);
	}
	template <typename T = bool> T CanDrop(uintptr_t* flag) {
		return ((T (*)(BREquipmentItemData*, uintptr_t*))(Il2CppBase() + 0x18D2510))(this, flag);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x18E4488))(this);
	}
	template <typename T = int32_t> T GetBrBaseMeleeId(int32_t itemId) {
		return ((T (*)(BREquipmentItemData*, int32_t))(Il2CppBase() + 0x18E3DE8))(this, itemId);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(BREquipmentItemData*))(Il2CppBase() + 0x18E4894))(this);
	}

};

}
