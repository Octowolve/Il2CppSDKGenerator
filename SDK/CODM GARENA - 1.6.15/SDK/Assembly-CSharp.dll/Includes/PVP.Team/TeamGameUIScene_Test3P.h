#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class TeamGameUISceneTest3P
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "TeamGameUIScene_Test3P"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TeamGameUISceneTest3P*))(Il2CppBase() + 0x3D8A3F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TeamGameUISceneTest3P*))(Il2CppBase() + 0x3D8A4A0))(this);
	}

};

}
