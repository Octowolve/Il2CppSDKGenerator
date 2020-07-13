#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendFindOptionCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendFindOptionCell"));
	}

	template <typename T = int32_t> T& modeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& modeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Selectedstate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& onSelectCell() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnClick() {
		return ((T (*)(FriendFindOptionCell*))(Il2CppBase() + 0x32A3CF8))(this);
	}

};

}
