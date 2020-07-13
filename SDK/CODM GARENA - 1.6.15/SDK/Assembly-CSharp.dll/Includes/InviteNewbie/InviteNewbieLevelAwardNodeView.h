#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InviteNewbie {

class InviteNewbieLevelAwardNodeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InviteNewbie", "InviteNewbieLevelAwardNodeView"));
	}

	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& GoCanClaim() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GoClaimed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardNodeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetAwardNodeInfo(int32_t min_level, int32_t max_level, int32_t now_level, bool bClaimed, int32_t gap) {
		return ((T (*)(InviteNewbieLevelAwardNodeView*, int32_t, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x3183B08))(this, min_level, max_level, now_level, bClaimed, gap);
	}

};

}
