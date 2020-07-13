#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIPlusMinusButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIPlusMinusButton"));
	}

	template <typename T = uintptr_t> T& PlusBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MinusBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ShowLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsCircle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_MinValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_MaxValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_Current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_OnChangeCallback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlusBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMinusBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_Current() {
		return ((T (*)(UIPlusMinusButton*))(Il2CppBase() + 0x3B02D84))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPlusMinusButton*))(Il2CppBase() + 0x3B02D8C))(this);
	}
	template <typename T = void> T Init(int32_t minValue, int32_t maxValue, int32_t defaultValue, void* callback) {
		return ((T (*)(UIPlusMinusButton*, int32_t, int32_t, int32_t, void*))(Il2CppBase() + 0x3B02FFC))(this, minValue, maxValue, defaultValue, callback);
	}
	template <typename T = void> T OnPlusBtnClick() {
		return ((T (*)(UIPlusMinusButton*))(Il2CppBase() + 0x3B030D4))(this);
	}
	template <typename T = void> T OnMinusBtnClick() {
		return ((T (*)(UIPlusMinusButton*))(Il2CppBase() + 0x3B03218))(this);
	}

};

}
