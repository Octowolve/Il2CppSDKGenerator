#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSpeed"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSpeed*))(Il2CppBase() + 0x4EFEF34))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSpeed*))(Il2CppBase() + 0x4EFEF48))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSpeed*))(Il2CppBase() + 0x4EFF0F8))(this);
	}
	template <typename T = void> T DoGetSpeed() {
		return ((T (*)(GetSpeed*))(Il2CppBase() + 0x4EFEF74))(this);
	}

};

}
