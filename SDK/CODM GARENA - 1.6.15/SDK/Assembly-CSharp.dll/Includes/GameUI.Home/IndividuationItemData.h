#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class IndividuationItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "IndividuationItemData"));
	}

	template <typename T = uint64_t> T& Guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ExpireTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TimeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsEquiped() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsPlayInWinnerCircle() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& IsPlayInKillCamera() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& UnGet() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	template <typename T = uintptr_t> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SortWeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& HowToGetPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& HowToGetDesc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ColorId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ColorSubId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& AnimationName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& EffectID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFromCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitFromCsv() {
		return ((T (*)(IndividuationItemData*))(Il2CppBase() + 0x22E3230))(this);
	}

};

}
