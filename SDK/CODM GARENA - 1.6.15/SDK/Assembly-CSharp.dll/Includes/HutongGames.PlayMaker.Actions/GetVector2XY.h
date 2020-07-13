#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVector2XY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVector2XY"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVector2XY*))(Il2CppBase() + 0x4F00A8C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVector2XY*))(Il2CppBase() + 0x4F00AA4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVector2XY*))(Il2CppBase() + 0x4F00B5C))(this);
	}
	template <typename T = void> T DoGetVector2XYZ() {
		return ((T (*)(GetVector2XY*))(Il2CppBase() + 0x4F00AD0))(this);
	}

};

}
