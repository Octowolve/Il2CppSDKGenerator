#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LadderPlaylistUnlockConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LadderPlaylistUnlockConf"));
	}

	template <typename T = int32_t> T& ladderLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
