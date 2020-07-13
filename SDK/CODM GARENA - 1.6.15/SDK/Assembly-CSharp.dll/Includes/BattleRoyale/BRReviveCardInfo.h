#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRReviveCardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRReviveCardInfo"));
	}

	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsNew() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& SeatIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DropActorId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& IsSelfDrop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& dropDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& dropDelTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& dropHud() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& PickUpId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsJustPickUp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& PickUpEndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& PickUpStartPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bOffline() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& UseTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& UseSuccessTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& NeedDeleteTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsNeedDelete() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1B76C))(this);
	}
	template <typename T = float> T get_DropDelCd() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1B954))(this);
	}
	template <typename T = Il2CppString*> T get_DropImgName() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BA44))(this);
	}
	template <typename T = Il2CppString*> T get_PickUpImgName() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BB78))(this);
	}
	template <typename T = Il2CppString*> T get_UsingImgName() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BCAC))(this);
	}
	template <typename T = Il2CppString*> T get_TeamHudUsingImgName() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BDE0))(this);
	}
	template <typename T = int32_t> T get_DropObjAssetId() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BF14))(this);
	}
	template <typename T = void> T OnAdd() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1BFDC))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1C2DC))(this);
	}
	template <typename T = void> T OnRemove() {
		return ((T (*)(BRReviveCardInfo*))(Il2CppBase() + 0x1B1C468))(this);
	}

};

}
