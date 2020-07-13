#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2MoveTowards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2MoveTowards"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishDistance() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2MoveTowards*))(Il2CppBase() + 0x4F1C520))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2MoveTowards*))(Il2CppBase() + 0x4F1C56C))(this);
	}
	template <typename T = void> T DoMoveTowards() {
		return ((T (*)(Vector2MoveTowards*))(Il2CppBase() + 0x4F1C570))(this);
	}

};

}
