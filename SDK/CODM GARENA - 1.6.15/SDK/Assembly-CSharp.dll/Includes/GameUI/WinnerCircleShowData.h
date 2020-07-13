#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WinnerCircleShowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WinnerCircleShowData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& KillNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AvatarPicInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& RoleId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& RoleModelId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& WeaponId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& BagID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& HatID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ClothID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& SuitID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uint32_t>*> T& AttachmentIDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& IndividuationItemId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& IndividuationAniName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsAI() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& IsAlive() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& IsMvp() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& IsFMvp() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = uint32_t> T& GoliathNum() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WinnerCircleShowData*))(Il2CppBase() + 0x2A3CC20))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(WinnerCircleShowData*))(Il2CppBase() + 0x2A3D0C4))(this);
	}

};

}
