#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionAngleAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionAngleAxis"));
	}

	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& axis() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80628))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80648))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80714))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80724))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80734))(this);
	}
	template <typename T = void> T DoQuatAngleAxis() {
		return ((T (*)(QuaternionAngleAxis*))(Il2CppBase() + 0x4D80674))(this);
	}

};

}
