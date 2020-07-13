#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class FunctionButtonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "FunctionButtonData"));
	}

	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_HighLighted() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Tips() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ShowExtend() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_Enable() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& m_ShowExclamationMark() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = Il2CppString*> T& m_ClickSound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689C84))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(FunctionButtonData*, uintptr_t))(Il2CppBase() + 0x3689C8C))(this, value);
	}
	template <typename T = int32_t> T get_Width() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689C94))(this);
	}
	template <typename T = void> T set_Width(int32_t value) {
		return ((T (*)(FunctionButtonData*, int32_t))(Il2CppBase() + 0x3689C9C))(this, value);
	}
	template <typename T = bool> T get_HighLighted() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CA4))(this);
	}
	template <typename T = void> T set_HighLighted(bool value) {
		return ((T (*)(FunctionButtonData*, bool))(Il2CppBase() + 0x3689CAC))(this, value);
	}
	template <typename T = int32_t> T get_Tips() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CB4))(this);
	}
	template <typename T = void> T set_Tips(int32_t value) {
		return ((T (*)(FunctionButtonData*, int32_t))(Il2CppBase() + 0x3689CBC))(this, value);
	}
	template <typename T = bool> T get_ShowExtend() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CC4))(this);
	}
	template <typename T = void> T set_ShowExtend(bool value) {
		return ((T (*)(FunctionButtonData*, bool))(Il2CppBase() + 0x3689CCC))(this, value);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CD4))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(FunctionButtonData*, bool))(Il2CppBase() + 0x3689CDC))(this, value);
	}
	template <typename T = bool> T get_ShowExclamationMark() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CE4))(this);
	}
	template <typename T = void> T set_ShowExclamationMark(bool value) {
		return ((T (*)(FunctionButtonData*, bool))(Il2CppBase() + 0x3689CEC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClickSound() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689CF4))(this);
	}
	template <typename T = void> T set_ClickSound(Il2CppString* value) {
		return ((T (*)(FunctionButtonData*, Il2CppString*))(Il2CppBase() + 0x3689CFC))(this, value);
	}
	template <typename T = void> T _RefreshClickSound() {
		return ((T (*)(FunctionButtonData*))(Il2CppBase() + 0x3689AA4))(this);
	}

};

}
