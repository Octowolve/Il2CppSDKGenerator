#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildNumberShowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildNumberShowView"));
	}

	template <typename T = uintptr_t> T& confirmBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ScrollView_LevelMaxMember() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ScrollBar_LevelMaxMember() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
