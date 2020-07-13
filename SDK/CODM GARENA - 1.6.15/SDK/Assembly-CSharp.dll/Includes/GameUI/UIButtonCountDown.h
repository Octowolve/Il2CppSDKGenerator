#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIButtonCountDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIButtonCountDown"));
	}

	template <typename T = int32_t> T& CountDownTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ActivateObjs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DeactivateObjs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsCountingDown() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = double> T& m_StartCDTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IECountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsCountingDown() {
		return ((T (*)(UIButtonCountDown*))(Il2CppBase() + 0x29CFAC4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIButtonCountDown*))(Il2CppBase() + 0x29CFACC))(this);
	}
	template <typename T = void> T StartCountDown() {
		return ((T (*)(UIButtonCountDown*))(Il2CppBase() + 0x29CFC6C))(this);
	}
	template <typename T = uintptr_t> T IECountDown() {
		return ((T (*)(UIButtonCountDown*))(Il2CppBase() + 0x29CFB8C))(this);
	}

};

}
