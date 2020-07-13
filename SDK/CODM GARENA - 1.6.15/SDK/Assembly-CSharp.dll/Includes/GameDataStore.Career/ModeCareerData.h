#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class ModeCareerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "ModeCareerData"));
	}

	template <typename T = uintptr_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& win_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& lose_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& game_times() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& playSecond() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& kill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& dead() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& shot_times() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& hit_times() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& headshot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& kd() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& wl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& spm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& accuarcy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponUseDataList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& baseInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T AppendData(uintptr_t stat, uintptr_t mode) {
		return ((T (*)(ModeCareerData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A08584))(this, stat, mode);
	}

};

}
