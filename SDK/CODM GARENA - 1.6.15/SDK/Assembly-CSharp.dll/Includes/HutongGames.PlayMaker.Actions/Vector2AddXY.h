#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2AddXY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2AddXY"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& addX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& addY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x35);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2AddXY*))(Il2CppBase() + 0x4F1B7B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2AddXY*))(Il2CppBase() + 0x4F1B7F8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2AddXY*))(Il2CppBase() + 0x4F1B960))(this);
	}
	template <typename T = void> T DoVector2AddXYZ() {
		return ((T (*)(Vector2AddXY*))(Il2CppBase() + 0x4F1B824))(this);
	}

};

}
