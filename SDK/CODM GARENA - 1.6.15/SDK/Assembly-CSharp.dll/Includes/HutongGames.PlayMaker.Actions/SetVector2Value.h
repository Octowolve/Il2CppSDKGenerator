#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetVector2Value
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetVector2Value"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector2Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetVector2Value*))(Il2CppBase() + 0x502D6A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetVector2Value*))(Il2CppBase() + 0x502D6B8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetVector2Value*))(Il2CppBase() + 0x502D728))(this);
	}

};

}
