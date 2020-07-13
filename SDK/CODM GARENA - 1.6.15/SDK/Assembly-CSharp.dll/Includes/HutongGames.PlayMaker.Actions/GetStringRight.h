#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetStringRight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetStringRight"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& charCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetStringRight*))(Il2CppBase() + 0x4EFF3B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetStringRight*))(Il2CppBase() + 0x4EFF3E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetStringRight*))(Il2CppBase() + 0x4EFF5A0))(this);
	}
	template <typename T = void> T DoGetStringRight() {
		return ((T (*)(GetStringRight*))(Il2CppBase() + 0x4EFF410))(this);
	}

};

}
