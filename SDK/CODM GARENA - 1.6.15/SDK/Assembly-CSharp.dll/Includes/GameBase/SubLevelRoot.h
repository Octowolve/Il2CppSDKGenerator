#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SubLevelRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SubLevelRoot"));
	}

	template <typename T = uintptr_t> T& gameLogicFSM() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& dialogFSM() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& tutorialFSM() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SubLevelRoot*))(Il2CppBase() + 0x30B0300))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SubLevelRoot*))(Il2CppBase() + 0x30B04C4))(this);
	}

};

}
