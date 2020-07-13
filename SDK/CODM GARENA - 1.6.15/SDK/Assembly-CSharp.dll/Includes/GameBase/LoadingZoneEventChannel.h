#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoadingZoneEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoadingZoneEventChannel"));
	}

	template <typename T = uintptr_t> T& m_Game() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
