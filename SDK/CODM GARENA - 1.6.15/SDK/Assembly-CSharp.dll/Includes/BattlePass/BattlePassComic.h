#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassComic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassComic"));
	}

	template <typename T = Il2CppString*> T& Str_Cdn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Comic_Sequence() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& mUnlockTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mSeasonId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mSeasonSeqName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& read_flag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
