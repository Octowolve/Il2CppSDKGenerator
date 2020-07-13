#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class StreakStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "StreakStateInfo"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& selected() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& coldDown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isCarePackage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& IncreasingFlagFx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FullFlagFx() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& streakID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsCarePackageSteak() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}
