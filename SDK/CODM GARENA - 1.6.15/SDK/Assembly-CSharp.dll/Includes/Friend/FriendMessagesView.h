#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendMessagesView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendMessagesView"));
	}

	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Table() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NoMessages() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& IgnoreStrangerToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& AgreeAllBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& RefuseAllBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& AgreeallBtnState() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& RefuseAllBtnState() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonIsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FriendMessagesView*))(Il2CppBase() + 0x32AFF58))(this);
	}
	template <typename T = void> T SetButtonIsClick(bool isClick) {
		return ((T (*)(FriendMessagesView*, bool))(Il2CppBase() + 0x32AF908))(this, isClick);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(FriendMessagesView*))(Il2CppBase() + 0x32B0040))(this);
	}

};

}
