#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetVector2XY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetVector2XY"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector2Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetVector2XY*))(Il2CppBase() + 0x502D784))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetVector2XY*))(Il2CppBase() + 0x502D888))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetVector2XY*))(Il2CppBase() + 0x502D9B4))(this);
	}
	template <typename T = void> T DoSetVector2XYZ() {
		return ((T (*)(SetVector2XY*))(Il2CppBase() + 0x502D8B4))(this);
	}

};

}
