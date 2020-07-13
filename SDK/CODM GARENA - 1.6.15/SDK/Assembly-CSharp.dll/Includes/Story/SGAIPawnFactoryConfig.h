#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGAIPawnFactoryConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGAIPawnFactoryConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AIPawnSpawnInfoList_EasyMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AIPawnSpawnInfoList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AIPawnSpawnInfoList_HardMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnSpawnInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SGAIPawnFactoryConfig*))(Il2CppBase() + 0x395D138))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAIPawnSpawnInfoList() {
		return ((T (*)(SGAIPawnFactoryConfig*))(Il2CppBase() + 0x395D1E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SGAIPawnFactoryConfig*))(Il2CppBase() + 0x395D424))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetAIPawnSpawnInfoList() {
		return ((T (*)(SGAIPawnFactoryConfig*))(Il2CppBase() + 0x395D42C))(this);
	}

};

}
