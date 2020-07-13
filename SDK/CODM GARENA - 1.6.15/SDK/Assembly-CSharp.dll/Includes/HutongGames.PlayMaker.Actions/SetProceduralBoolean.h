#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProceduralBoolean
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProceduralBoolean"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& boolProperty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& boolValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProceduralBoolean*))(Il2CppBase() + 0x502A5B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProceduralBoolean*))(Il2CppBase() + 0x502A694))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProceduralBoolean*))(Il2CppBase() + 0x502A6AC))(this);
	}
	template <typename T = void> T DoSetProceduralFloat() {
		return ((T (*)(SetProceduralBoolean*))(Il2CppBase() + 0x502A6A8))(this);
	}

};

}
