#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DrawDebugRay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DrawDebugRay"));
	}

	template <typename T = uintptr_t> T& fromObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fromPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DrawDebugRay*))(Il2CppBase() + 0x4FC6DC4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(DrawDebugRay*))(Il2CppBase() + 0x4FC6F38))(this);
	}

};

}
