#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetStringLeft
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetStringLeft"));
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
		return ((T (*)(GetStringLeft*))(Il2CppBase() + 0x4EFF104))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetStringLeft*))(Il2CppBase() + 0x4EFF138))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetStringLeft*))(Il2CppBase() + 0x4EFF2FC))(this);
	}
	template <typename T = void> T DoGetStringLeft() {
		return ((T (*)(GetStringLeft*))(Il2CppBase() + 0x4EFF164))(this);
	}

};

}
