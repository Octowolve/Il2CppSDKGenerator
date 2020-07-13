#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProceduralFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProceduralFloat"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatProperty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProceduralFloat*))(Il2CppBase() + 0x502A7E0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProceduralFloat*))(Il2CppBase() + 0x502A8C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProceduralFloat*))(Il2CppBase() + 0x502A8DC))(this);
	}
	template <typename T = void> T DoSetProceduralFloat() {
		return ((T (*)(SetProceduralFloat*))(Il2CppBase() + 0x502A8D8))(this);
	}

};

}
