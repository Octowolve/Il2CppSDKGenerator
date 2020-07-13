#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankHandle"));
	}

	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_BankID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RefCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_RefCount() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2B19C))(this);
	}
	template <typename T = void> T set_RefCount(int32_t value) {
		return ((T (*)(BankHandle*, int32_t))(Il2CppBase() + 0x4A2BB9C))(this, value);
	}
	template <typename T = uintptr_t> T DoLoadBank() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2BBA4))(this);
	}
	template <typename T = void> T LoadBank() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2AEC0))(this);
	}
	template <typename T = void> T UnloadBank() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2BC68))(this);
	}
	template <typename T = void> T IncRef() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2B068))(this);
	}
	template <typename T = void> T DecRef() {
		return ((T (*)(BankHandle*))(Il2CppBase() + 0x4A2B0A0))(this);
	}
	template <typename T = void> T LogLoadResult(uintptr_t result) {
		return ((T (*)(BankHandle*, uintptr_t))(Il2CppBase() + 0x4A2B5DC))(this, result);
	}

};

}
