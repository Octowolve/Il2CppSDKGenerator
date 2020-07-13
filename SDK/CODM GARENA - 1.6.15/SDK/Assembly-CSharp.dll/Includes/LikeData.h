#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LikeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LikeData"));
	}

	template <typename T = uint64_t> T& activePlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& belikedPlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& matchGUID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasLiked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
