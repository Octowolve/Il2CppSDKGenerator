#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class WrappedRecommendFriends
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "WrappedRecommendFriends"));
	}

	template <typename T = uintptr_t> T& RecommendFriend() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& AlreadySend() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
