#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameShopConfigExtend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameShopConfigExtend"));
	}

	template <typename T = Il2CppString*> T& ActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ActiveEndTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ItemNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ShopColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& ShopID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& GameShopType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ShopType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& bNew() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
