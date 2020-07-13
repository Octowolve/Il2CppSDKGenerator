#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetButton"));
	}

	template <typename T = uintptr_t> T& buttonName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetButton*))(Il2CppBase() + 0x5086234))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetButton*))(Il2CppBase() + 0x50862D0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetButton*))(Il2CppBase() + 0x50863E4))(this);
	}
	template <typename T = void> T DoGetButton() {
		return ((T (*)(GetButton*))(Il2CppBase() + 0x50862FC))(this);
	}

};

}
