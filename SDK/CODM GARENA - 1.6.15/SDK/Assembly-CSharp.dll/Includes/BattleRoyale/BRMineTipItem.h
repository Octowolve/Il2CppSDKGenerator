#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRMineTipItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRMineTipItem"));
	}

	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TipIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& DistanceLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetItemInfo(Il2CppString* spriteName, float distance) {
		return ((T (*)(BRMineTipItem*, Il2CppString*, float))(Il2CppBase() + 0x1AB13AC))(this, spriteName, distance);
	}
	template <typename T = void> T AdjustUIPos(Il2CppVector2 PosInScreen) {
		return ((T (*)(BRMineTipItem*, Il2CppVector2))(Il2CppBase() + 0x1AB1538))(this, PosInScreen);
	}

};

}
