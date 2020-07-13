#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildTabToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildTabToggle"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SelectTitle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& RedPoint() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPointActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetRedPointActive(bool flag) {
		return ((T (*)(GuildTabToggle*, bool))(Il2CppBase() + 0x3BF68D8))(this, flag);
	}

};

}
