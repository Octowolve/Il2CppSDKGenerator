#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalAirDropManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalAirDropManager"));
	}

	template <typename T = uintptr_t> T& airdropSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& goliathSpriteList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& goliathList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExtraAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& game() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& carePackageMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bChamberMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& ChamberCarePackageIconName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SASCarePackageIconName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMorethanOneAirDropSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirDropSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalAirDropManager*))(Il2CppBase() + 0x3F3E61C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalAirDropManager*))(Il2CppBase() + 0x3F3EC1C))(this);
	}
	template <typename T = void> T UpdateMorethanOneAirDropSpriteInfo(uintptr_t carePackage, int32_t idx) {
		return ((T (*)(TacticalAirDropManager*, uintptr_t, int32_t))(Il2CppBase() + 0x3F3FEC0))(this, carePackage, idx);
	}
	template <typename T = void> T UpdateAirDropSpriteInfo(uintptr_t carePackage) {
		return ((T (*)(TacticalAirDropManager*, uintptr_t))(Il2CppBase() + 0x3F40130))(this, carePackage);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalAirDropManager*))(Il2CppBase() + 0x3F40370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalAirDropManager*))(Il2CppBase() + 0x3F40374))(this);
	}

};

}
