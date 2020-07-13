#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameConstructor2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameConstructor`2"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateGameBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T CreateGame(uintptr_t world) {
		return ((T (*)(GameConstructor2*, uintptr_t))(Il2CppBase() + 0x48D9ED4))(this, world);
	}
	template <typename T = uintptr_t> T CreateGameBuilder() {
		return ((T (*)(GameConstructor2*))(Il2CppBase() + 0x48DA154))(this);
	}

};

}
