#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLotteryInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLotteryInfo"));
	}

	template <typename T = uint32_t> T& MachineId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& EnterCDTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CDDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemActorID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& LastItemActorID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(BRLotteryInfo*))(Il2CppBase() + 0x194E2B4))(this);
	}

};

}
