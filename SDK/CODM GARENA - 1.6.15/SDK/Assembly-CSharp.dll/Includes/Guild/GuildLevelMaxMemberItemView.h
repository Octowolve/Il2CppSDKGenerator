#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildLevelMaxMemberItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildLevelMaxMemberItemView"));
	}

	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MaxMemberLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
