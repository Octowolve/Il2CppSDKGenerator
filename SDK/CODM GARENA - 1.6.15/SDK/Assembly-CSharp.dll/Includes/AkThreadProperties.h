#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkThreadProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkThreadProperties"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22AC8C8))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkThreadProperties*, uintptr_t))(Il2CppBase() + 0x22AC95C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22AC988))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22AC9F0))(this);
	}
	template <typename T = void> T set_nPriority(int32_t value) {
		return ((T (*)(AkThreadProperties*, int32_t))(Il2CppBase() + 0x22ACB70))(this, value);
	}
	template <typename T = int32_t> T get_nPriority() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22ACC1C))(this);
	}
	template <typename T = void> T set_uStackSize(uint32_t value) {
		return ((T (*)(AkThreadProperties*, uint32_t))(Il2CppBase() + 0x22ACCC0))(this, value);
	}
	template <typename T = uint32_t> T get_uStackSize() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22ACD6C))(this);
	}
	template <typename T = void> T set_uSchedPolicy(int32_t value) {
		return ((T (*)(AkThreadProperties*, int32_t))(Il2CppBase() + 0x22ACE10))(this, value);
	}
	template <typename T = int32_t> T get_uSchedPolicy() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22ACEBC))(this);
	}
	template <typename T = void> T set_dwAffinityMask(uint32_t value) {
		return ((T (*)(AkThreadProperties*, uint32_t))(Il2CppBase() + 0x22ACF60))(this, value);
	}
	template <typename T = uint32_t> T get_dwAffinityMask() {
		return ((T (*)(AkThreadProperties*))(Il2CppBase() + 0x22AD00C))(this);
	}

};

}
