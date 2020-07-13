#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BROBTeamNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BROBTeamNode"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MemberList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& IndexLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Widget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_MemberHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CurTeamData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTeamMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPartly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_Height() {
		return ((T (*)(BROBTeamNode*))(Il2CppBase() + 0x2DA942C))(this);
	}
	template <typename T = void> T SetTeamMember(int32_t maxMembers) {
		return ((T (*)(BROBTeamNode*, int32_t))(Il2CppBase() + 0x2DA950C))(this, maxMembers);
	}
	template <typename T = void> T SetHeight(int32_t maxMembers) {
		return ((T (*)(BROBTeamNode*, int32_t))(Il2CppBase() + 0x2DA9620))(this, maxMembers);
	}
	template <typename T = void> T UpdateItemPartly() {
		return ((T (*)(BROBTeamNode*))(Il2CppBase() + 0x2DA9744))(this);
	}
	template <typename T = void> T UpdateItem(uint32_t teamIndex, uintptr_t data, bool showDead) {
		return ((T (*)(BROBTeamNode*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x2DA987C))(this, teamIndex, data, showDead);
	}

};

}
