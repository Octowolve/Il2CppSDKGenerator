#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowCNView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowCNView"));
	}

	template <typename T = uintptr_t> T& shareBtnQQFriend() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& shareBtnQQZone() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& shareBtnWeChatFriend() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& shareBtnWeChatZone() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
