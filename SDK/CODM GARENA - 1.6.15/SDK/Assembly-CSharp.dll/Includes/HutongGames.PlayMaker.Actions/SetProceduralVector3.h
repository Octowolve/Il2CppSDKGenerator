#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProceduralVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProceduralVector3"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector3Property() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vector3Value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProceduralVector3*))(Il2CppBase() + 0x502A924))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProceduralVector3*))(Il2CppBase() + 0x502A93C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProceduralVector3*))(Il2CppBase() + 0x502A954))(this);
	}
	template <typename T = void> T DoSetProceduralVector() {
		return ((T (*)(SetProceduralVector3*))(Il2CppBase() + 0x502A950))(this);
	}

};

}
