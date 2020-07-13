#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAtan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAtan"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RadToDeg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAtan*))(Il2CppBase() + 0x5085128))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAtan*))(Il2CppBase() + 0x508515C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAtan*))(Il2CppBase() + 0x5085298))(this);
	}
	template <typename T = void> T DoATan() {
		return ((T (*)(GetAtan*))(Il2CppBase() + 0x5085188))(this);
	}

};

}
