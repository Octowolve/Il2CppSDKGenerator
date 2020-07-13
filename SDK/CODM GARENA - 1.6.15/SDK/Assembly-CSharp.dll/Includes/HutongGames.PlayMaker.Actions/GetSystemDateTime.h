#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSystemDateTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSystemDateTime"));
	}

	template <typename T = uintptr_t> T& storeString() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& format() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSystemDateTime*))(Il2CppBase() + 0x4EFF6C4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSystemDateTime*))(Il2CppBase() + 0x4EFF758))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSystemDateTime*))(Il2CppBase() + 0x4EFF884))(this);
	}

};

}
