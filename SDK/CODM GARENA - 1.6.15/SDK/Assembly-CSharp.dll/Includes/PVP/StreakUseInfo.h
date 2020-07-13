#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class StreakUseInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "StreakUseInfo"));
	}

	template <typename T = Il2CppString*> T& playerNameText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& streakId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& isUse() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& PlayID() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
