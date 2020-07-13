#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class BrPlaylistGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "BrPlaylistGroup"));
	}

	template <typename T = int32_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& selectPlaylistId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& configList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
