#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorLevelObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorLevelObject"));
	}

	template <typename T = uintptr_t> T& m_PrepareAnimator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_MainAnimator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_EndingAnimator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPrepareAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMainAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverseMainAnimtor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEndingAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = float> T get_MainAnimLength() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B589D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B589D8))(this);
	}
	template <typename T = void> T PlayPrepareAnimator() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B58A80))(this);
	}
	template <typename T = void> T PlayMainAnimator() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B58BA4))(this);
	}
	template <typename T = void> T PlayReverseMainAnimtor() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B58C7C))(this);
	}
	template <typename T = void> T PlayEndingAnimator() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B58D88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(AnimatorLevelObject*))(Il2CppBase() + 0x2B58E98))(this);
	}

};

}
