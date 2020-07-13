#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "RepeatContext"));
	}

	template <typename T = int32_t> T& start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& min() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& lazy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& expr_pc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& previous() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7908))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(RepeatContext*, int32_t))(Il2CppBase() + 0x4AD7910))(this, value);
	}
	template <typename T = int32_t> T get_Start() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7900))(this);
	}
	template <typename T = void> T set_Start(int32_t value) {
		return ((T (*)(RepeatContext*, int32_t))(Il2CppBase() + 0x4AD7918))(this, value);
	}
	template <typename T = bool> T get_IsMinimum() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7928))(this);
	}
	template <typename T = bool> T get_IsMaximum() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7948))(this);
	}
	template <typename T = bool> T get_IsLazy() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7940))(this);
	}
	template <typename T = int32_t> T get_Expression() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD7920))(this);
	}
	template <typename T = uintptr_t> T get_Previous() {
		return ((T (*)(RepeatContext*))(Il2CppBase() + 0x4AD78F8))(this);
	}

};

}
