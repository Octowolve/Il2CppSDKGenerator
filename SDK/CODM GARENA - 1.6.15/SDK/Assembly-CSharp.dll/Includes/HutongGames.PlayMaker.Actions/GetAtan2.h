#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAtan2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAtan2"));
	}

	template <typename T = uintptr_t> T& xValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& yValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RadToDeg() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAtan2*))(Il2CppBase() + 0x50852A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAtan2*))(Il2CppBase() + 0x50852DC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAtan2*))(Il2CppBase() + 0x5085434))(this);
	}
	template <typename T = void> T DoATan() {
		return ((T (*)(GetAtan2*))(Il2CppBase() + 0x5085308))(this);
	}

};

}
