#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuildInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuildInfo"));
	}

	template <typename T = bool> T& IsUltSkill() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& KillStreakID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& BuildItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PosID() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
