#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InviteNewbie {

class InviteNewbieActiveAwardNodeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InviteNewbie", "InviteNewbieActiveAwardNodeView"));
	}

	template <typename T = uintptr_t> T& Goal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalBg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LastOneBg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& GoGet1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GoGet2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AwardItem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ActivityType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAwardNodeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToDetails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetAwardNodeInfo(int32_t min, int32_t max, int32_t now, int32_t gap, uintptr_t award, bool bLast, uintptr_t activityType) {
		return ((T (*)(InviteNewbieActiveAwardNodeView*, int32_t, int32_t, int32_t, int32_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x317ED28))(this, min, max, now, gap, award, bLast, activityType);
	}
	template <typename T = void> T GoToDetails(uintptr_t Obj) {
		return ((T (*)(InviteNewbieActiveAwardNodeView*, uintptr_t))(Il2CppBase() + 0x317F270))(this, Obj);
	}

};

}
