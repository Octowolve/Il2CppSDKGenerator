#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickupBethlehemStarDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickupBethlehemStarDrop"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_EBRPickUpInfoType() {
		return ((T (*)(BRDroppedPickupBethlehemStarDrop*))(Il2CppBase() + 0x18B55A8))(this);
	}
	template <typename T = void> T TickBoxObserver() {
		return ((T (*)(BRDroppedPickupBethlehemStarDrop*))(Il2CppBase() + 0x18B55B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickBoxObserver() {
		return ((T (*)(BRDroppedPickupBethlehemStarDrop*))(Il2CppBase() + 0x18B5648))(this);
	}

};

}
