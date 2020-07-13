#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetProceduralColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetProceduralColor"));
	}

	template <typename T = uintptr_t> T& substanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& colorProperty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& colorValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetProceduralColor*))(Il2CppBase() + 0x502A6B8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetProceduralColor*))(Il2CppBase() + 0x502A7BC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetProceduralColor*))(Il2CppBase() + 0x502A7D4))(this);
	}
	template <typename T = void> T DoSetProceduralFloat() {
		return ((T (*)(SetProceduralColor*))(Il2CppBase() + 0x502A7D0))(this);
	}

};

}
