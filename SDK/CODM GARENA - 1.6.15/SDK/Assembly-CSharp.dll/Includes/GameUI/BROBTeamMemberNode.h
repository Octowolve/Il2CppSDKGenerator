#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BROBTeamMemberNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BROBTeamMemberNode"));
	}

	template <typename T = uintptr_t> T& Bg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& KillCountLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MarkIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& OnItemClick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CurPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsDead() {
		return ((T (*)(BROBTeamMemberNode*))(Il2CppBase() + 0x2DA897C))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BROBTeamMemberNode*))(Il2CppBase() + 0x2DA89EC))(this);
	}
	template <typename T = void> T SetClickFunc(void* func) {
		return ((T (*)(BROBTeamMemberNode*, void*))(Il2CppBase() + 0x2DA8E38))(this, func);
	}
	template <typename T = void> T UpdateItem(uintptr_t playerInfo) {
		return ((T (*)(BROBTeamMemberNode*, uintptr_t))(Il2CppBase() + 0x2DA8EE0))(this, playerInfo);
	}
	template <typename T = void> T UpdateState() {
		return ((T (*)(BROBTeamMemberNode*))(Il2CppBase() + 0x2DA8FCC))(this);
	}

};

}
