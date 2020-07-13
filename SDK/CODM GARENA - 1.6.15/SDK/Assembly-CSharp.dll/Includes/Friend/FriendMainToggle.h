#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendMainToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendMainToggle"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SelectTitle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BadgeNumber() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& RedPoint() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBadgeNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPointShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetBadgeNumber(int32_t number) {
		return ((T (*)(FriendMainToggle*, int32_t))(Il2CppBase() + 0x32A9F6C))(this, number);
	}
	template <typename T = void> T SetRedPointShow(bool flag) {
		return ((T (*)(FriendMainToggle*, bool))(Il2CppBase() + 0x32AA50C))(this, flag);
	}

};

}
