#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RebuildTextures
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RebuildTextures"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& immediately() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RebuildTextures*))(Il2CppBase() + 0x4D83448))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RebuildTextures*))(Il2CppBase() + 0x4D83478))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RebuildTextures*))(Il2CppBase() + 0x4D83490))(this);
	}
	template <typename T = void> T DoRebuildTextures() {
		return ((T (*)(RebuildTextures*))(Il2CppBase() + 0x4D8348C))(this);
	}

};

}
