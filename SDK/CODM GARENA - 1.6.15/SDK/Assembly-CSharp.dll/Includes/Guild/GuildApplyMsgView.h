#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildApplyMsgView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildApplyMsgView"));
	}

	template <typename T = uintptr_t> T& applyMsgGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RefuseAllBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GuildRadioBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& EmptyState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
