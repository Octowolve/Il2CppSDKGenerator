#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Translate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Translate"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& vector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& lateUpdate() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = bool> T& fixedUpdate() {
		return *(T*)((uintptr_t)this + 0x43);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19B00))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19C4C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19C80))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19FAC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19FCC))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F1A004))(this);
	}
	template <typename T = void> T DoTranslate() {
		return ((T (*)(Translate*))(Il2CppBase() + 0x4F19CCC))(this);
	}

};

}
