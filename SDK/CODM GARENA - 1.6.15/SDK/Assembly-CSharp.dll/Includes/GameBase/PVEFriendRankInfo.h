#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PVEFriendRankInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PVEFriendRankInfo"));
	}

	template <typename T = Il2CppString*> T& PlayerNickName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& PlayerAvatarUrl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PlayerExpLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxChapterId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxScore() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
