#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildStarItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildStarItemView"));
	}

	template <typename T = uintptr_t> T& CommonHead() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ActiveLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WeekLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SeasonLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CacllingCardTemplate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStarInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetStarInfo(uintptr_t picInfo, Il2CppString* name, int32_t active, Il2CppString* impeachDescription, uint64_t playerID, bool isWeek) {
		return ((T (*)(GuildStarItemView*, uintptr_t, Il2CppString*, int32_t, Il2CppString*, uint64_t, bool))(Il2CppBase() + 0x3BCA1C4))(this, picInfo, name, active, impeachDescription, playerID, isWeek);
	}
	template <typename T = void> T SetCallingCardInfo(int64_t callingCardID) {
		return ((T (*)(GuildStarItemView*, int64_t))(Il2CppBase() + 0x3BF4960))(this, callingCardID);
	}

};

}
