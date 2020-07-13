#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProceduralVector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProceduralVector2"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector2Property() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vector2Value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProceduralVector2*))(Il2CppBase() + 0x502A8E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProceduralVector2*))(Il2CppBase() + 0x502A900))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProceduralVector2*))(Il2CppBase() + 0x502A918))(this);
	}
	template <typename T = void> T DoSetProceduralVector() {
		return ((T (*)(SetProceduralVector2*))(Il2CppBase() + 0x502A914))(this);
	}

};

}
