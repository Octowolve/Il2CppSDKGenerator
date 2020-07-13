#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetStringLength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetStringLength"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetStringLength*))(Il2CppBase() + 0x4EFF308))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetStringLength*))(Il2CppBase() + 0x4EFF31C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetStringLength*))(Il2CppBase() + 0x4EFF3A4))(this);
	}
	template <typename T = void> T DoGetStringLength() {
		return ((T (*)(GetStringLength*))(Il2CppBase() + 0x4EFF348))(this);
	}

};

}
