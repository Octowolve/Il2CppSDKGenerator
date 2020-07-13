#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpponentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpponentInfo"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PicInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& OVR() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Trophy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ItemIndexOnMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ShowedOnMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SquadInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& ModeDefendSquadsDic() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& BattleInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& InventoryInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchDefendMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsRival() {
		return ((T (*)(OpponentInfo*))(Il2CppBase() + 0x394373C))(this);
	}
	template <typename T = void> T SwitchDefendMode(uintptr_t mode) {
		return ((T (*)(OpponentInfo*, uintptr_t))(Il2CppBase() + 0x394388C))(this, mode);
	}

};

}
