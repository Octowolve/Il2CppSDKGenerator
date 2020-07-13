#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HelicopterRotorCollision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HelicopterRotorCollision"));
	}

	template <typename T = bool> T& propellerTouch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rotorTouchColliers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRotorTouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(HelicopterRotorCollision*, uintptr_t))(Il2CppBase() + 0x36FAF14))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(HelicopterRotorCollision*, uintptr_t))(Il2CppBase() + 0x36FB08C))(this, other);
	}
	template <typename T = void> T SendRotorTouch() {
		return ((T (*)(HelicopterRotorCollision*))(Il2CppBase() + 0x36FB2D4))(this);
	}

};

}
