#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorMusic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorMusic"));
	}

	template <typename T = Il2CppString*> T& MusicName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Composer() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& AudioName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
