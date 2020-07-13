#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankFeaturedModeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankFeaturedModeItem"));
	}

	template <typename T = uintptr_t> T& ModeNameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AdditionLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetContent(Il2CppString* ModeName, Il2CppString* Addition) {
		return ((T (*)(RankFeaturedModeItem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37FD324))(this, ModeName, Addition);
	}

};

}
