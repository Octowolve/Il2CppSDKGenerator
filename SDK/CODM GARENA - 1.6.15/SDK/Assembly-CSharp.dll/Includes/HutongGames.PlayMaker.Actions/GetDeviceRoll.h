#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetDeviceRoll
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetDeviceRoll"));
	}

	template <typename T = uintptr_t> T& baseOrientation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& limitAngle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& smoothing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& lastZAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetDeviceRoll*))(Il2CppBase() + 0x508851C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetDeviceRoll*))(Il2CppBase() + 0x50885FC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetDeviceRoll*))(Il2CppBase() + 0x508897C))(this);
	}
	template <typename T = void> T DoGetDeviceRoll() {
		return ((T (*)(GetDeviceRoll*))(Il2CppBase() + 0x5088628))(this);
	}

};

}
